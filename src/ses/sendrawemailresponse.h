// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDRAWEMAILRESPONSE_H
#define QTAWS_SENDRAWEMAILRESPONSE_H

#include "sesresponse.h"
#include "sendrawemailrequest.h"

namespace QtAws {
namespace Ses {

class SendRawEmailResponsePrivate;

class QTAWSSES_EXPORT SendRawEmailResponse : public SesResponse {
    Q_OBJECT

public:
    SendRawEmailResponse(const SendRawEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendRawEmailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendRawEmailResponse)
    Q_DISABLE_COPY(SendRawEmailResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
