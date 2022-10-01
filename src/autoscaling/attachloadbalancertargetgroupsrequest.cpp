// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "attachloadbalancertargetgroupsrequest.h"
#include "attachloadbalancertargetgroupsrequest_p.h"
#include "attachloadbalancertargetgroupsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancerTargetGroupsRequest
 * \brief The AttachLoadBalancerTargetGroupsRequest class provides an interface for AutoScaling AttachLoadBalancerTargetGroups requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::attachLoadBalancerTargetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
AttachLoadBalancerTargetGroupsRequest::AttachLoadBalancerTargetGroupsRequest(const AttachLoadBalancerTargetGroupsRequest &other)
    : AutoScalingRequest(new AttachLoadBalancerTargetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AttachLoadBalancerTargetGroupsRequest object.
 */
AttachLoadBalancerTargetGroupsRequest::AttachLoadBalancerTargetGroupsRequest()
    : AutoScalingRequest(new AttachLoadBalancerTargetGroupsRequestPrivate(AutoScalingRequest::AttachLoadBalancerTargetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool AttachLoadBalancerTargetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AttachLoadBalancerTargetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AttachLoadBalancerTargetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new AttachLoadBalancerTargetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::AttachLoadBalancerTargetGroupsRequestPrivate
 * \brief The AttachLoadBalancerTargetGroupsRequestPrivate class provides private implementation for AttachLoadBalancerTargetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a AttachLoadBalancerTargetGroupsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
AttachLoadBalancerTargetGroupsRequestPrivate::AttachLoadBalancerTargetGroupsRequestPrivate(
    const AutoScalingRequest::Action action, AttachLoadBalancerTargetGroupsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AttachLoadBalancerTargetGroupsRequest
 * class' copy constructor.
 */
AttachLoadBalancerTargetGroupsRequestPrivate::AttachLoadBalancerTargetGroupsRequestPrivate(
    const AttachLoadBalancerTargetGroupsRequestPrivate &other, AttachLoadBalancerTargetGroupsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
