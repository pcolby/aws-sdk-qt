// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKSREQUEST_P_H
#define QTAWS_DESCRIBELIFECYCLEHOOKSREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describelifecyclehooksrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHooksRequest;

class DescribeLifecycleHooksRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeLifecycleHooksRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeLifecycleHooksRequest * const q);
    DescribeLifecycleHooksRequestPrivate(const DescribeLifecycleHooksRequestPrivate &other,
                                   DescribeLifecycleHooksRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLifecycleHooksRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
