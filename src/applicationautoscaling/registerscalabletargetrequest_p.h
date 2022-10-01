// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERSCALABLETARGETREQUEST_P_H
#define QTAWS_REGISTERSCALABLETARGETREQUEST_P_H

#include "applicationautoscalingrequest_p.h"
#include "registerscalabletargetrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class RegisterScalableTargetRequest;

class RegisterScalableTargetRequestPrivate : public ApplicationAutoScalingRequestPrivate {

public:
    RegisterScalableTargetRequestPrivate(const ApplicationAutoScalingRequest::Action action,
                                   RegisterScalableTargetRequest * const q);
    RegisterScalableTargetRequestPrivate(const RegisterScalableTargetRequestPrivate &other,
                                   RegisterScalableTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterScalableTargetRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
