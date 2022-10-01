// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERPOLICYTYPESRESPONSE_P_H
#define QTAWS_DESCRIBELOADBALANCERPOLICYTYPESRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerPolicyTypesResponse;

class DescribeLoadBalancerPolicyTypesResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DescribeLoadBalancerPolicyTypesResponsePrivate(DescribeLoadBalancerPolicyTypesResponse * const q);

    void parseDescribeLoadBalancerPolicyTypesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerPolicyTypesResponse)
    Q_DISABLE_COPY(DescribeLoadBalancerPolicyTypesResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
