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

#include "deletescheduledactionrequest.h"
#include "deletescheduledactionrequest_p.h"
#include "deletescheduledactionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteScheduledActionRequest
 * \brief The DeleteScheduledActionRequest class provides an interface for AutoScaling DeleteScheduledAction requests.
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
 *  For more information, including information about granting IAM users required permissions for Amazon EC2 Auto Scaling
 *  actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User
 *
 * \sa AutoScalingClient::deleteScheduledAction
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteScheduledActionRequest::DeleteScheduledActionRequest(const DeleteScheduledActionRequest &other)
    : AutoScalingRequest(new DeleteScheduledActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteScheduledActionRequest object.
 */
DeleteScheduledActionRequest::DeleteScheduledActionRequest()
    : AutoScalingRequest(new DeleteScheduledActionRequestPrivate(AutoScalingRequest::DeleteScheduledActionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteScheduledActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteScheduledActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteScheduledActionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScheduledActionResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteScheduledActionRequestPrivate
 * \brief The DeleteScheduledActionRequestPrivate class provides private implementation for DeleteScheduledActionRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteScheduledActionRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeleteScheduledActionRequestPrivate::DeleteScheduledActionRequestPrivate(
    const AutoScalingRequest::Action action, DeleteScheduledActionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteScheduledActionRequest
 * class' copy constructor.
 */
DeleteScheduledActionRequestPrivate::DeleteScheduledActionRequestPrivate(
    const DeleteScheduledActionRequestPrivate &other, DeleteScheduledActionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
