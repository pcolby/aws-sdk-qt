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

#include "detachloadbalancersrequest.h"
#include "detachloadbalancersrequest_p.h"
#include "detachloadbalancersresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DetachLoadBalancersRequest
 * \brief The DetachLoadBalancersRequest class provides an interface for AutoScaling DetachLoadBalancers requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information about Amazon EC2 Auto Scaling, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User Guide</a>. For information about granting IAM users required permissions for calls to Amazon EC2 Auto
 *  Scaling, see <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/ec2-auto-scaling-api-permissions.html">Granting IAM users
 *  required permissions for Amazon EC2 Auto Scaling resources</a> in the <i>Amazon EC2 Auto Scaling API
 *
 * \sa AutoScalingClient::detachLoadBalancers
 */

/*!
 * Constructs a copy of \a other.
 */
DetachLoadBalancersRequest::DetachLoadBalancersRequest(const DetachLoadBalancersRequest &other)
    : AutoScalingRequest(new DetachLoadBalancersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetachLoadBalancersRequest object.
 */
DetachLoadBalancersRequest::DetachLoadBalancersRequest()
    : AutoScalingRequest(new DetachLoadBalancersRequestPrivate(AutoScalingRequest::DetachLoadBalancersAction, this))
{

}

/*!
 * \reimp
 */
bool DetachLoadBalancersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetachLoadBalancersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetachLoadBalancersRequest::response(QNetworkReply * const reply) const
{
    return new DetachLoadBalancersResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DetachLoadBalancersRequestPrivate
 * \brief The DetachLoadBalancersRequestPrivate class provides private implementation for DetachLoadBalancersRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DetachLoadBalancersRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DetachLoadBalancersRequestPrivate::DetachLoadBalancersRequestPrivate(
    const AutoScalingRequest::Action action, DetachLoadBalancersRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetachLoadBalancersRequest
 * class' copy constructor.
 */
DetachLoadBalancersRequestPrivate::DetachLoadBalancersRequestPrivate(
    const DetachLoadBalancersRequestPrivate &other, DetachLoadBalancersRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
