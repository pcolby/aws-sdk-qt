// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEAUTOSCALINGNOTIFICATIONTYPESREQUEST_P_H
#define QTAWS_DESCRIBEAUTOSCALINGNOTIFICATIONTYPESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describeautoscalingnotificationtypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeAutoScalingNotificationTypesRequest;

class DescribeAutoScalingNotificationTypesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeAutoScalingNotificationTypesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeAutoScalingNotificationTypesRequest * const q);
    DescribeAutoScalingNotificationTypesRequestPrivate(const DescribeAutoScalingNotificationTypesRequestPrivate &other,
                                   DescribeAutoScalingNotificationTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAutoScalingNotificationTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
