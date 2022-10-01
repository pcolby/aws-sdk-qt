// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PHONENUMBERVALIDATEREQUEST_P_H
#define QTAWS_PHONENUMBERVALIDATEREQUEST_P_H

#include "pinpointrequest_p.h"
#include "phonenumbervalidaterequest.h"

namespace QtAws {
namespace Pinpoint {

class PhoneNumberValidateRequest;

class PhoneNumberValidateRequestPrivate : public PinpointRequestPrivate {

public:
    PhoneNumberValidateRequestPrivate(const PinpointRequest::Action action,
                                   PhoneNumberValidateRequest * const q);
    PhoneNumberValidateRequestPrivate(const PhoneNumberValidateRequestPrivate &other,
                                   PhoneNumberValidateRequest * const q);

private:
    Q_DECLARE_PUBLIC(PhoneNumberValidateRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
