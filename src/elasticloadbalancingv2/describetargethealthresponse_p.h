// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETHEALTHRESPONSE_P_H
#define QTAWS_DESCRIBETARGETHEALTHRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetHealthResponse;

class DescribeTargetHealthResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeTargetHealthResponsePrivate(DescribeTargetHealthResponse * const q);

    void parseDescribeTargetHealthResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTargetHealthResponse)
    Q_DISABLE_COPY(DescribeTargetHealthResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
