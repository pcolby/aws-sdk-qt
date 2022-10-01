// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
 * Constructs a TerminateInstanceInAutoScalingGroupRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
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
