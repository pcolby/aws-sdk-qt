/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
