// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detachloadbalancertargetgroupsrequest.h"
#include "detachloadbalancertargetgroupsrequest_p.h"
#include "detachloadbalancertargetgroupsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DetachLoadBalancerTargetGroupsRequest
 * \brief The DetachLoadBalancerTargetGroupsRequest class provides an interface for AutoScaling DetachLoadBalancerTargetGroups requests.
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
 * \sa AutoScalingClient::detachLoadBalancerTargetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DetachLoadBalancerTargetGroupsRequest::DetachLoadBalancerTargetGroupsRequest(const DetachLoadBalancerTargetGroupsRequest &other)
    : AutoScalingRequest(new DetachLoadBalancerTargetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachLoadBalancerTargetGroupsRequest object.
 */
DetachLoadBalancerTargetGroupsRequest::DetachLoadBalancerTargetGroupsRequest()
    : AutoScalingRequest(new DetachLoadBalancerTargetGroupsRequestPrivate(AutoScalingRequest::DetachLoadBalancerTargetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DetachLoadBalancerTargetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachLoadBalancerTargetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachLoadBalancerTargetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DetachLoadBalancerTargetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DetachLoadBalancerTargetGroupsRequestPrivate
 * \brief The DetachLoadBalancerTargetGroupsRequestPrivate class provides private implementation for DetachLoadBalancerTargetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DetachLoadBalancerTargetGroupsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DetachLoadBalancerTargetGroupsRequestPrivate::DetachLoadBalancerTargetGroupsRequestPrivate(
    const AutoScalingRequest::Action action, DetachLoadBalancerTargetGroupsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachLoadBalancerTargetGroupsRequest
 * class' copy constructor.
 */
DetachLoadBalancerTargetGroupsRequestPrivate::DetachLoadBalancerTargetGroupsRequestPrivate(
    const DetachLoadBalancerTargetGroupsRequestPrivate &other, DetachLoadBalancerTargetGroupsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
