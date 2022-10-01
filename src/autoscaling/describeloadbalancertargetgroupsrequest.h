// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOADBALANCERTARGETGROUPSREQUEST_H
#define QTAWS_DESCRIBELOADBALANCERTARGETGROUPSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DescribeLoadBalancerTargetGroupsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DescribeLoadBalancerTargetGroupsRequest : public AutoScalingRequest {

public:
    DescribeLoadBalancerTargetGroupsRequest(const DescribeLoadBalancerTargetGroupsRequest &other);
    DescribeLoadBalancerTargetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLoadBalancerTargetGroupsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
