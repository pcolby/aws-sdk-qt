// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESSLPOLICIESRESPONSE_P_H
#define QTAWS_DESCRIBESSLPOLICIESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeSSLPoliciesResponse;

class DescribeSSLPoliciesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeSSLPoliciesResponsePrivate(DescribeSSLPoliciesResponse * const q);

    void parseDescribeSSLPoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeSSLPoliciesResponse)
    Q_DISABLE_COPY(DescribeSSLPoliciesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
