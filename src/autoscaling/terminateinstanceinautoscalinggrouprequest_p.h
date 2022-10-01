// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TERMINATEINSTANCEINAUTOSCALINGGROUPREQUEST_P_H
#define QTAWS_TERMINATEINSTANCEINAUTOSCALINGGROUPREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "terminateinstanceinautoscalinggrouprequest.h"

namespace QtAws {
namespace AutoScaling {

class TerminateInstanceInAutoScalingGroupRequest;

class TerminateInstanceInAutoScalingGroupRequestPrivate : public AutoScalingRequestPrivate {

public:
    TerminateInstanceInAutoScalingGroupRequestPrivate(const AutoScalingRequest::Action action,
                                   TerminateInstanceInAutoScalingGroupRequest * const q);
    TerminateInstanceInAutoScalingGroupRequestPrivate(const TerminateInstanceInAutoScalingGroupRequestPrivate &other,
                                   TerminateInstanceInAutoScalingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(TerminateInstanceInAutoScalingGroupRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
