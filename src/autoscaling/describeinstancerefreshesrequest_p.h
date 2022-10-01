// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSTANCEREFRESHESREQUEST_P_H
#define QTAWS_DESCRIBEINSTANCEREFRESHESREQUEST_P_H

#include "autoscalingrequest_p.h"
#include "describeinstancerefreshesrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeInstanceRefreshesRequest;

class DescribeInstanceRefreshesRequestPrivate : public AutoScalingRequestPrivate {

public:
    DescribeInstanceRefreshesRequestPrivate(const AutoScalingRequest::Action action,
                                   DescribeInstanceRefreshesRequest * const q);
    DescribeInstanceRefreshesRequestPrivate(const DescribeInstanceRefreshesRequestPrivate &other,
                                   DescribeInstanceRefreshesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeInstanceRefreshesRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
