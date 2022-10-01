// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCUSTOMVERIFICATIONEMAILREQUEST_H
#define QTAWS_SENDCUSTOMVERIFICATIONEMAILREQUEST_H

#include "sesv2request.h"

namespace QtAws {
namespace SESv2 {

class SendCustomVerificationEmailRequestPrivate;

class QTAWSSESV2_EXPORT SendCustomVerificationEmailRequest : public SESv2Request {

public:
    SendCustomVerificationEmailRequest(const SendCustomVerificationEmailRequest &other);
    SendCustomVerificationEmailRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SendCustomVerificationEmailRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
