// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERTARGETGROUPSRESPONSE_H
#define QTAWS_DETACHLOADBALANCERTARGETGROUPSRESPONSE_H

#include "autoscalingresponse.h"
#include "detachloadbalancertargetgroupsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DetachLoadBalancerTargetGroupsResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DetachLoadBalancerTargetGroupsResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DetachLoadBalancerTargetGroupsResponse(const DetachLoadBalancerTargetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachLoadBalancerTargetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachLoadBalancerTargetGroupsResponse)
    Q_DISABLE_COPY(DetachLoadBalancerTargetGroupsResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
