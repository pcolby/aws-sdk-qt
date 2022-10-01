// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATETARGETGROUPRESPONSE_P_H
#define QTAWS_CREATETARGETGROUPRESPONSE_P_H

#include "elasticloadbalancingv2response_p.h"

namespace QtAws {
namespace ElasticLoadBalancingv2 {

class CreateTargetGroupResponse;

class CreateTargetGroupResponsePrivate : public ElasticLoadBalancingv2ResponsePrivate {

public:

    explicit CreateTargetGroupResponsePrivate(CreateTargetGroupResponse * const q);

    void parseCreateTargetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateTargetGroupResponse)
    Q_DISABLE_COPY(CreateTargetGroupResponsePrivate)

};

} // namespace ElasticLoadBalancingv2
} // namespace QtAws

#endif
