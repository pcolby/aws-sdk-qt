// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSCALINGGROUPREQUEST_P_H
#define QTAWS_DELETEAUTOSCALINGGROUPREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "deleteautoscalinggrouprequest.h"

namespace QtAws {
namespace AutoScaling {

class DeleteAutoScalingGroupRequest;

class DeleteAutoScalingGroupRequestPrivate : public AutoScalingRequestPrivate {

public:
    DeleteAutoScalingGroupRequestPrivate(const AutoScalingRequest::Action action,
                                   DeleteAutoScalingGroupRequest * const q);
    DeleteAutoScalingGroupRequestPrivate(const DeleteAutoScalingGroupRequestPrivate &other,
                                   DeleteAutoScalingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAutoScalingGroupRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
