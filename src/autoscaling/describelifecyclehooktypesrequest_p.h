// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELIFECYCLEHOOKTYPESREQUEST_P_H
#define QTAWS_DESCRIBELIFECYCLEHOOKTYPESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describelifecyclehooktypesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLifecycleHookTypesRequest;

class DescribeLifecycleHookTypesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeLifecycleHookTypesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeLifecycleHookTypesRequest * const q);
    DescribeLifecycleHookTypesRequestPrivate(const DescribeLifecycleHookTypesRequestPrivate &other,
                                   DescribeLifecycleHookTypesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeLifecycleHookTypesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
