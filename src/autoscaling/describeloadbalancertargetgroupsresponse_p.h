// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERTARGETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBELOADBALANCERTARGETGROUPSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLoadBalancerTargetGroupsResponse;

class DescribeLoadBalancerTargetGroupsResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeLoadBalancerTargetGroupsResponsePrivate(DescribeLoadBalancerTargetGroupsResponse * const q);

    void parseDescribeLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerTargetGroupsResponse)
    Q_DISABLE_COPY(DescribeLoadBalancerTargetGroupsResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
