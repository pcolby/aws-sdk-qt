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

#include "terminateinstanceinautoscalinggrouprequest.h"
#include "terminateinstanceinautoscalinggrouprequest_p.h"
#include "terminateinstanceinautoscalinggroupresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::TerminateInstanceInAutoScalingGroupRequest
 * \brief The TerminateInstanceInAutoScalingGroupRequest class provides an interface for AutoScaling TerminateInstanceInAutoScalingGroup requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::terminateInstanceInAutoScalingGroup
 */

/*!
 * Constructs a copy of \a other.
 */
TerminateInstanceInAutoScalingGroupRequest::TerminateInstanceInAutoScalingGroupRequest(const TerminateInstanceInAutoScalingGroupRequest &other)
    : AutoScalingRequest(new TerminateInstanceInAutoScalingGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TerminateInstanceInAutoScalingGroupRequest object.
 */
TerminateInstanceInAutoScalingGroupRequest::TerminateInstanceInAutoScalingGroupRequest()
    : AutoScalingRequest(new TerminateInstanceInAutoScalingGroupRequestPrivate(AutoScalingRequest::TerminateInstanceInAutoScalingGroupAction, this))
{

}

/*!
 * \reimp
 */
bool TerminateInstanceInAutoScalingGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TerminateInstanceInAutoScalingGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TerminateInstanceInAutoScalingGroupRequest::response(QNetworkReply * const reply) const
{
    return new TerminateInstanceInAutoScalingGroupResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::TerminateInstanceInAutoScalingGroupRequestPrivate
 * \brief The TerminateInstanceInAutoScalingGroupRequestPrivate class provides private implementation for TerminateInstanceInAutoScalingGroupRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 *
 * Constructs a TerminateInstanceInAutoScalingGroupRequestPrivate object for AutoScaling \a action with,
 * public implementation \a q.
 */
TerminateInstanceInAutoScalingGroupRequestPrivate::TerminateInstanceInAutoScalingGroupRequestPrivate(
    const AutoScalingRequest::Action action, TerminateInstanceInAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TerminateInstanceInAutoScalingGroupRequest
 * class' copy constructor.
 */
TerminateInstanceInAutoScalingGroupRequestPrivate::TerminateInstanceInAutoScalingGroupRequestPrivate(
    const TerminateInstanceInAutoScalingGroupRequestPrivate &other, TerminateInstanceInAutoScalingGroupRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
