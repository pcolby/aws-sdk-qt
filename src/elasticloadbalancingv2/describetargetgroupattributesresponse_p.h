// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETGROUPATTRIBUTESRESPONSE_P_H
#define QTAWS_DESCRIBETARGETGROUPATTRIBUTESRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetGroupAttributesResponse;

class DescribeTargetGroupAttributesResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeTargetGroupAttributesResponsePrivate(DescribeTargetGroupAttributesResponse * const q);

    void parseDescribeTargetGroupAttributesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTargetGroupAttributesResponse)
    Q_DISABLE_COPY(DescribeTargetGroupAttributesResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
