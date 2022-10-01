// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBELOADBALANCERATTRIBUTESRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancerAttributesResponse;

class DescribeLoadBalancerAttributesResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DescribeLoadBalancerAttributesResponsePrivate(DescribeLoadBalancerAttributesResponse * const q);

    void parseDescribeLoadBalancerAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancerAttributesResponse)
    Q_DISABLE_COPY(DescribeLoadBalancerAttributesResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
