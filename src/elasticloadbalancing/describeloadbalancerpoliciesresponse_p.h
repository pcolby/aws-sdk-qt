// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERPOLICIESRESPONSE_P_H
#define QTAWS_DESCRIBELOADBALANCERPOLICIESRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerPoliciesResponse;

class DescribeLoadBalancerPoliciesResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DescribeLoadBalancerPoliciesResponsePrivate(DescribeLoadBalancerPoliciesResponse * const q);

    void parseDescribeLoadBalancerPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerPoliciesResponse)
    Q_DISABLE_COPY(DescribeLoadBalancerPoliciesResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
