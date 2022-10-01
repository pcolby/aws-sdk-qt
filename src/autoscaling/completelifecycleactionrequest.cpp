// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
