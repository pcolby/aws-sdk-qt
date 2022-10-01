// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VALIDATESECURITYPROFILEBEHAVIORSREQUEST_P_H
#define QTAWS_VALIDATESECURITYPROFILEBEHAVIORSREQUEST_P_H

#include "iotrequest_p.h"
#include "validatesecurityprofilebehaviorsrequest.h"

namespace QtAws {
namespace IoT {

class ValidateSecurityProfileBehaviorsRequest;

class ValidateSecurityProfileBehaviorsRequestPrivate : public IoTRequestPrivate {

public:
    ValidateSecurityProfileBehaviorsRequestPrivate(const IoTRequest::Action action,
                                   ValidateSecurityProfileBehaviorsRequest * const q);
    ValidateSecurityProfileBehaviorsRequestPrivate(const ValidateSecurityProfileBehaviorsRequestPrivate &other,
                                   ValidateSecurityProfileBehaviorsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ValidateSecurityProfileBehaviorsRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
