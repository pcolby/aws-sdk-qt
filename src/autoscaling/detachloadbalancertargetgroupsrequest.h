// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHLOADBALANCERTARGETGROUPSREQUEST_H
#define QTAWS_DETACHLOADBALANCERTARGETGROUPSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class DetachLoadBalancerTargetGroupsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT DetachLoadBalancerTargetGroupsRequest : public AutoScalingRequest {

public:
    DetachLoadBalancerTargetGroupsRequest(const DetachLoadBalancerTargetGroupsRequest &other);
    DetachLoadBalancerTargetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachLoadBalancerTargetGroupsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
