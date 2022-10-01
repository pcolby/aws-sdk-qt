// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SENDCONTACTMETHODVERIFICATIONREQUEST_P_H
#define QTAWS_SENDCONTACTMETHODVERIFICATIONREQUEST_P_H

#include "lightsailrequest_p.h"
#include "sendcontactmethodverificationrequest.h"

namespace QtAws {
namespace Lightsail {

class SendContactMethodVerificationRequest;

class SendContactMethodVerificationRequestPrivate : public LightsailRequestPrivate {

public:
    SendContactMethodVerificationRequestPrivate(const LightsailRequest::Action action,
                                   SendContactMethodVerificationRequest * const q);
    SendContactMethodVerificationRequestPrivate(const SendContactMethodVerificationRequestPrivate &other,
                                   SendContactMethodVerificationRequest * const q);

private:
    Q_DECLARE_PUBLIC(SendContactMethodVerificationRequest)

};

} // namespace Lightsail
} // namespace QtAws

#endif
