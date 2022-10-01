// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSRESPONSE_P_H
#define QTAWS_DESCRIBELOADBALANCERSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLoadBalancersResponse;

class DescribeLoadBalancersResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DescribeLoadBalancersResponsePrivate(DescribeLoadBalancersResponse * const q);

    void parseDescribeLoadBalancersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancersResponse)
    Q_DISABLE_COPY(DescribeLoadBalancersResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
