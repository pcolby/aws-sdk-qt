// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCUSTOMVERIFICATIONEMAILREQUEST_P_H
#define QTAWS_SENDCUSTOMVERIFICATIONEMAILREQUEST_P_H

#include "sesrequest_p.h"
#include "sendcustomverificationemailrequest.h"

namespace QtAws {
namespace Ses {

class SendCustomVerificationEmailRequest;

class SendCustomVerificationEmailRequestPrivate : public SesRequestPrivate {

public:
    SendCustomVerificationEmailRequestPrivate(const SesRequest::Action action,
                                   SendCustomVerificationEmailRequest * const q);
    SendCustomVerificationEmailRequestPrivate(const SendCustomVerificationEmailRequestPrivate &other,
                                   SendCustomVerificationEmailRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendCustomVerificationEmailRequest)

};

} // namespace Ses
} // namespace QtAws

#endif
