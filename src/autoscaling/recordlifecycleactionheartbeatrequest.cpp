// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
