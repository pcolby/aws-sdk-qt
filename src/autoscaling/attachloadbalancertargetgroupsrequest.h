// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ATTACHLOADBALANCERTARGETGROUPSREQUEST_H
#define QTAWS_ATTACHLOADBALANCERTARGETGROUPSREQUEST_H

#include "autoscalingrequest.h"

namespace QtAws {
namespace AutoScaling {

class AttachLoadBalancerTargetGroupsRequestPrivate;

class QTAWSAUTOSCALING_EXPORT AttachLoadBalancerTargetGroupsRequest : public AutoScalingRequest {

public:
    AttachLoadBalancerTargetGroupsRequest(const AttachLoadBalancerTargetGroupsRequest &other);
    AttachLoadBalancerTargetGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AttachLoadBalancerTargetGroupsRequest)

};

} // namespace AutoScaling
} // namespace QtAws

#endif
