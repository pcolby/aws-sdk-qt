// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDBULKTEMPLATEDEMAILRESPONSE_H
#define QTAWS_SENDBULKTEMPLATEDEMAILRESPONSE_H

#include "sesresponse.h"
#include "sendbulktemplatedemailrequest.h"

namespace QtAws {
namespace Ses {

class SendBulkTemplatedEmailResponsePrivate;

class QTAWSSES_EXPORT SendBulkTemplatedEmailResponse : public SesResponse {
    Q_OBJECT

public:
    SendBulkTemplatedEmailResponse(const SendBulkTemplatedEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendBulkTemplatedEmailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendBulkTemplatedEmailResponse)
    Q_DISABLE_COPY(SendBulkTemplatedEmailResponse)

};

} // namespace Ses
} // namespace QtAws

#endif
