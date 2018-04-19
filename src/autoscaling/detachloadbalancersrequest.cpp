/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
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
 *
 * Constructs a DetachLoadBalancersRequestPrivate object for AutoScaling \a action with,
 * public implementation \a q.
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
