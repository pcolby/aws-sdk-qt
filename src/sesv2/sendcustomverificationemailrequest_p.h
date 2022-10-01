// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCUSTOMVERIFICATIONEMAILREQUEST_P_H
#define QTAWS_SENDCUSTOMVERIFICATIONEMAILREQUEST_P_H

#include "sesv2request_p.h"
#include "sendcustomverificationemailrequest.h"

namespace QtAws {
namespace SESv2 {

class SendCustomVerificationEmailRequest;

class SendCustomVerificationEmailRequestPrivate : public SESv2RequestPrivate {

public:
    SendCustomVerificationEmailRequestPrivate(const SESv2Request::Action action,
                                   SendCustomVerificationEmailRequest * const q);
    SendCustomVerificationEmailRequestPrivate(const SendCustomVerificationEmailRequestPrivate &other,
                                   SendCustomVerificationEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendCustomVerificationEmailRequest)

};

} // namespace SESv2
} // namespace QtAws

#endif
