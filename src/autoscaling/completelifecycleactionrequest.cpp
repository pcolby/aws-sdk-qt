/*
    Copyright 2013-2019 Paul Colby

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

#include "completelifecycleactionrequest.h"
#include "completelifecycleactionrequest_p.h"
#include "completelifecycleactionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CompleteLifecycleActionRequest
 * \brief The CompleteLifecycleActionRequest class provides an interface for AutoScaling CompleteLifecycleAction requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, see the <a
 *  href="http://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto Scaling
 *  User
 *
 * \sa AutoScalingClient::completeLifecycleAction
 */

/*!
 * Constructs a copy of \a other.
 */
CompleteLifecycleActionRequest::CompleteLifecycleActionRequest(const CompleteLifecycleActionRequest &other)
    : AutoScalingRequest(new CompleteLifecycleActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CompleteLifecycleActionRequest object.
 */
CompleteLifecycleActionRequest::CompleteLifecycleActionRequest()
    : AutoScalingRequest(new CompleteLifecycleActionRequestPrivate(AutoScalingRequest::CompleteLifecycleActionAction, this))
{

}

/*!
 * \reimp
 */
bool CompleteLifecycleActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CompleteLifecycleActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CompleteLifecycleActionRequest::response(QNetworkReply * const reply) const
{
    return new CompleteLifecycleActionResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::CompleteLifecycleActionRequestPrivate
 * \brief The CompleteLifecycleActionRequestPrivate class provides private implementation for CompleteLifecycleActionRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CompleteLifecycleActionRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
CompleteLifecycleActionRequestPrivate::CompleteLifecycleActionRequestPrivate(
    const AutoScalingRequest::Action action, CompleteLifecycleActionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CompleteLifecycleActionRequest
 * class' copy constructor.
 */
CompleteLifecycleActionRequestPrivate::CompleteLifecycleActionRequestPrivate(
    const CompleteLifecycleActionRequestPrivate &other, CompleteLifecycleActionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
