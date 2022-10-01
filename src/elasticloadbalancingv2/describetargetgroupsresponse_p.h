// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBETARGETGROUPSRESPONSE_P_H
#define QTAWS_DESCRIBETARGETGROUPSRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class DescribeTargetGroupsResponse;

class DescribeTargetGroupsResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit DescribeTargetGroupsResponsePrivate(DescribeTargetGroupsResponse * const q);

    void parseDescribeTargetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeTargetGroupsResponse)
    Q_DISABLE_COPY(DescribeTargetGroupsResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
