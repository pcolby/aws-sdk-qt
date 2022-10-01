// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBULKEMAILRESPONSE_H
#define QTAWS_SENDBULKEMAILRESPONSE_H

#include "sesv2response.h"
#include "sendbulkemailrequest.h"

namespace QtAws {
namespace SESv2 {

class SendBulkEmailResponsePrivate;

class QTAWSSESV2_EXPORT SendBulkEmailResponse : public SESv2Response {
    Q_OBJECT

public:
    SendBulkEmailResponse(const SendBulkEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendBulkEmailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendBulkEmailResponse)
    Q_DISABLE_COPY(SendBulkEmailResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
