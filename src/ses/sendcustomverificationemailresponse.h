// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCUSTOMVERIFICATIONEMAILRESPONSE_H
#define QTAWS_SENDCUSTOMVERIFICATIONEMAILRESPONSE_H

#include "sesresponse.h"
#include "sendcustomverificationemailrequest.h"

namespace QtAws {
namespace Ses {

class SendCustomVerificationEmailResponsePrivate;

class QTAWSSES_EXPORT SendCustomVerificationEmailResponse : public SesResponse {
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

} // namespace Ses
} // namespace QtAws

#endif
