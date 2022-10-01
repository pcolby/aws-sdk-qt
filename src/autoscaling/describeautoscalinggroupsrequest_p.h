// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGGROUPSREQUEST_P_H
#define QTAWS_DESCRIBEAUTOSCALINGGROUPSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describeautoscalinggroupsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingGroupsRequest;

class DescribeAutoScalingGroupsRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeAutoScalingGroupsRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeAutoScalingGroupsRequest * const q);
    DescribeAutoScalingGroupsRequestPrivate(const DescribeAutoScalingGroupsRequestPrivate &other,
                                   DescribeAutoScalingGroupsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAutoScalingGroupsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
