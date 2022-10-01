// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULESRESPONSE_P_H
#define QTAWS_DESCRIBERULESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeRulesResponse;

class DescribeRulesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeRulesResponsePrivate(DescribeRulesResponse * const q);

    void parseDescribeRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRulesResponse)
    Q_DISABLE_COPY(DescribeRulesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
