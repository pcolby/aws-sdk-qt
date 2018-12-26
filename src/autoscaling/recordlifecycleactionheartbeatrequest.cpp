/*
    Copyright 2013-2018 Paul Colby

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

#include "recordlifecycleactionheartbeatrequest.h"
#include "recordlifecycleactionheartbeatrequest_p.h"
#include "recordlifecycleactionheartbeatresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::RecordLifecycleActionHeartbeatRequest
 * \brief The RecordLifecycleActionHeartbeatRequest class provides an interface for AutoScaling RecordLifecycleActionHeartbeat requests.
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
 * \sa AutoScalingClient::recordLifecycleActionHeartbeat
 */

/*!
 * Constructs a copy of \a other.
 */
RecordLifecycleActionHeartbeatRequest::RecordLifecycleActionHeartbeatRequest(const RecordLifecycleActionHeartbeatRequest &other)
    : AutoScalingRequest(new RecordLifecycleActionHeartbeatRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RecordLifecycleActionHeartbeatRequest object.
 */
RecordLifecycleActionHeartbeatRequest::RecordLifecycleActionHeartbeatRequest()
    : AutoScalingRequest(new RecordLifecycleActionHeartbeatRequestPrivate(AutoScalingRequest::RecordLifecycleActionHeartbeatAction, this))
{

}

/*!
 * \reimp
 */
bool RecordLifecycleActionHeartbeatRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RecordLifecycleActionHeartbeatResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RecordLifecycleActionHeartbeatRequest::response(QNetworkReply * const reply) const
{
    return new RecordLifecycleActionHeartbeatResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::RecordLifecycleActionHeartbeatRequestPrivate
 * \brief The RecordLifecycleActionHeartbeatRequestPrivate class provides private implementation for RecordLifecycleActionHeartbeatRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a RecordLifecycleActionHeartbeatRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
RecordLifecycleActionHeartbeatRequestPrivate::RecordLifecycleActionHeartbeatRequestPrivate(
    const AutoScalingRequest::Action action, RecordLifecycleActionHeartbeatRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RecordLifecycleActionHeartbeatRequest
 * class' copy constructor.
 */
RecordLifecycleActionHeartbeatRequestPrivate::RecordLifecycleActionHeartbeatRequestPrivate(
    const RecordLifecycleActionHeartbeatRequestPrivate &other, RecordLifecycleActionHeartbeatRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
