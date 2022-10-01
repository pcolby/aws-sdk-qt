// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAUTOSCALINGGROUPREQUEST_P_H
#define QTAWS_UPDATEAUTOSCALINGGROUPREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "updateautoscalinggrouprequest.h"

namespace QtAws {
namespace AutoScaling {

class UpdateAutoScalingGroupRequest;

class UpdateAutoScalingGroupRequestPrivate : public AutoScalingRequestPrivate {

public:
    UpdateAutoScalingGroupRequestPrivate(const AutoScalingRequest::Action action,
                                   UpdateAutoScalingGroupRequest * const q);
    UpdateAutoScalingGroupRequestPrivate(const UpdateAutoScalingGroupRequestPrivate &other,
                                   UpdateAutoScalingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAutoScalingGroupRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
