// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCUSTOMVERIFICATIONEMAILRESPONSE_H
#define QTAWS_SENDCUSTOMVERIFICATIONEMAILRESPONSE_H

#include "sesv2response.h"
#include "sendcustomverificationemailrequest.h"

namespace QtAws {
namespace SESv2 {

class SendCustomVerificationEmailResponsePrivate;

class QTAWSSESV2_EXPORT SendCustomVerificationEmailResponse : public SESv2Response {
    Q_OBJECT

public:
    SendCustomVerificationEmailResponse(const SendCustomVerificationEmailRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const SendCustomVerificationEmailRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendCustomVerificationEmailResponse)
    Q_DISABLE_COPY(SendCustomVerificationEmailResponse)

};

} // namespace SESv2
} // namespace QtAws

#endif
