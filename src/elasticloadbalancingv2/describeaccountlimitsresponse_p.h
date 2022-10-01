// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTLIMITSRESPONSE_P_H
#define QTAWS_DESCRIBEACCOUNTLIMITSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeAccountLimitsResponse;

class DescribeAccountLimitsResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeAccountLimitsResponsePrivate(DescribeAccountLimitsResponse * const q);

    void parseDescribeAccountLimitsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAccountLimitsResponse)
    Q_DISABLE_COPY(DescribeAccountLimitsResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
