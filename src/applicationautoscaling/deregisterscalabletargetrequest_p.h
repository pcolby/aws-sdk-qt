// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERSCALABLETARGETREQUEST_P_H
#define QTAWS_DEREGISTERSCALABLETARGETREQUEST_P_H

#include "applicationautoscalingrequest_p.h"
#include "deregisterscalabletargetrequest.h"

namespace QtAws {
namespace ApplicationAutoScaling {

class DeregisterScalableTargetRequest;

class DeregisterScalableTargetRequestPrivate : public ApplicationAutoScalingRequestPrivate {

public:
    DeregisterScalableTargetRequestPrivate(const ApplicationAutoScalingRequest::Action action,
                                   DeregisterScalableTargetRequest * const q);
    DeregisterScalableTargetRequestPrivate(const DeregisterScalableTargetRequestPrivate &other,
                                   DeregisterScalableTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterScalableTargetRequest)

};

} // namespace ApplicationAutoScaling
} // namespace QtAws

#endif
