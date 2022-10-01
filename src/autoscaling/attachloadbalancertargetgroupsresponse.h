// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTARGETGROUPSRESPONSE_H
#define QTAWS_ATTACHLOADBALANCERTARGETGROUPSRESPONSE_H

#include "autoscalingresponse.h"
#include "attachloadbalancertargetgroupsrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachLoadBalancerTargetGroupsResponsePrivate;

class QTAWSAUTOSCALING_EXPORT AttachLoadBalancerTargetGroupsResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    AttachLoadBalancerTargetGroupsResponse(const AttachLoadBalancerTargetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AttachLoadBalancerTargetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachLoadBalancerTargetGroupsResponse)
    Q_DISABLE_COPY(AttachLoadBalancerTargetGroupsResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
