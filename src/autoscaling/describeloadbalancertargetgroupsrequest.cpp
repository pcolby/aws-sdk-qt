// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloadbalancertargetgroupsrequest.h"
#include "describeloadbalancertargetgroupsrequest_p.h"
#include "describeloadbalancertargetgroupsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancerTargetGroupsRequest
 * \brief The DescribeLoadBalancerTargetGroupsRequest class provides an interface for AutoScaling DescribeLoadBalancerTargetGroups requests.
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
 * \sa AutoScalingClient::describeLoadBalancerTargetGroups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLoadBalancerTargetGroupsRequest::DescribeLoadBalancerTargetGroupsRequest(const DescribeLoadBalancerTargetGroupsRequest &other)
    : AutoScalingRequest(new DescribeLoadBalancerTargetGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLoadBalancerTargetGroupsRequest object.
 */
DescribeLoadBalancerTargetGroupsRequest::DescribeLoadBalancerTargetGroupsRequest()
    : AutoScalingRequest(new DescribeLoadBalancerTargetGroupsRequestPrivate(AutoScalingRequest::DescribeLoadBalancerTargetGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoadBalancerTargetGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLoadBalancerTargetGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoadBalancerTargetGroupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancerTargetGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancerTargetGroupsRequestPrivate
 * \brief The DescribeLoadBalancerTargetGroupsRequestPrivate class provides private implementation for DescribeLoadBalancerTargetGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLoadBalancerTargetGroupsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeLoadBalancerTargetGroupsRequestPrivate::DescribeLoadBalancerTargetGroupsRequestPrivate(
    const AutoScalingRequest::Action action, DescribeLoadBalancerTargetGroupsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBalancerTargetGroupsRequest
 * class' copy constructor.
 */
DescribeLoadBalancerTargetGroupsRequestPrivate::DescribeLoadBalancerTargetGroupsRequestPrivate(
    const DescribeLoadBalancerTargetGroupsRequestPrivate &other, DescribeLoadBalancerTargetGroupsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
