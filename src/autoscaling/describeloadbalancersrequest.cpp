// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeloadbalancersrequest.h"
#include "describeloadbalancersrequest_p.h"
#include "describeloadbalancersresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancersRequest
 * \brief The DescribeLoadBalancersRequest class provides an interface for AutoScaling DescribeLoadBalancers requests.
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
 * \sa AutoScalingClient::describeLoadBalancers
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLoadBalancersRequest::DescribeLoadBalancersRequest(const DescribeLoadBalancersRequest &other)
    : AutoScalingRequest(new DescribeLoadBalancersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLoadBalancersRequest object.
 */
DescribeLoadBalancersRequest::DescribeLoadBalancersRequest()
    : AutoScalingRequest(new DescribeLoadBalancersRequestPrivate(AutoScalingRequest::DescribeLoadBalancersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLoadBalancersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLoadBalancersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLoadBalancersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLoadBalancersResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DescribeLoadBalancersRequestPrivate
 * \brief The DescribeLoadBalancersRequestPrivate class provides private implementation for DescribeLoadBalancersRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeLoadBalancersRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DescribeLoadBalancersRequestPrivate::DescribeLoadBalancersRequestPrivate(
    const AutoScalingRequest::Action action, DescribeLoadBalancersRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLoadBalancersRequest
 * class' copy constructor.
 */
DescribeLoadBalancersRequestPrivate::DescribeLoadBalancersRequestPrivate(
    const DescribeLoadBalancersRequestPrivate &other, DescribeLoadBalancersRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
