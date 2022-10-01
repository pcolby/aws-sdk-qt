// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERTARGETGROUPSRESPONSE_P_H
#define QTAWS_DETACHLOADBALANCERTARGETGROUPSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class DetachLoadBalancerTargetGroupsResponse;

class DetachLoadBalancerTargetGroupsResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit DetachLoadBalancerTargetGroupsResponsePrivate(DetachLoadBalancerTargetGroupsResponse * const q);

    void parseDetachLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DetachLoadBalancerTargetGroupsResponse)
    Q_DISABLE_COPY(DetachLoadBalancerTargetGroupsResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
