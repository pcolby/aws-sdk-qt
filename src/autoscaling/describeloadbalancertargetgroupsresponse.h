// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERTARGETGROUPSRESPONSE_H
#define QTAWS_DESCRIBELOADBALANCERTARGETGROUPSRESPONSE_H

#include "autoscalingresponse.h"
#include "describeloadbalancertargetgroupsrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLoadBalancerTargetGroupsResponsePrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLoadBalancerTargetGroupsResponse : public AutoScalingResponse {
    Q_OBJECT

public:
    DescribeLoadBalancerTargetGroupsResponse(const DescribeLoadBalancerTargetGroupsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeLoadBalancerTargetGroupsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancerTargetGroupsResponse)
    Q_DISABLE_COPY(DescribeLoadBalancerTargetGroupsResponse)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
