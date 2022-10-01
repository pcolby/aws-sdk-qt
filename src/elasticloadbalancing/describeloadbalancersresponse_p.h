// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERSRESPONSE_P_H
#define QTAWS_DESCRIBELOADBALANCERSRESPONSE_P_H

#include "elasticloadbalancingresponse_p.h"

namespace QtAws {
namespace ElasticLoadBalancing {

class DescribeLoadBalancersResponse;

class DescribeLoadBalancersResponsePrivate : public ElasticLoadBalancingResponsePrivate {

public:

    explicit DescribeLoadBalancersResponsePrivate(DescribeLoadBalancersResponse * const q);

    void parseDescribeLoadBalancersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeLoadBalancersResponse)
    Q_DISABLE_COPY(DescribeLoadBalancersResponsePrivate)

};

} // namespace ElasticLoadBalancing
} // namespace QtAws

#endif
