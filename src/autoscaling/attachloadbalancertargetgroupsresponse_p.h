// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTARGETGROUPSRESPONSE_P_H
#define QTAWS_ATTACHLOADBALANCERTARGETGROUPSRESPONSE_P_H

#include "autoscalingresponse_p.h"

namespace QtAws {
namespace AutoScaling {

class AttachLoadBalancerTargetGroupsResponse;

class AttachLoadBalancerTargetGroupsResponsePrivate : public AutoScalingResponsePrivate {

public:

    explicit AttachLoadBalancerTargetGroupsResponsePrivate(AttachLoadBalancerTargetGroupsResponse * const q);

    void parseAttachLoadBalancerTargetGroupsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AttachLoadBalancerTargetGroupsResponse)
    Q_DISABLE_COPY(AttachLoadBalancerTargetGroupsResponsePrivate)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
