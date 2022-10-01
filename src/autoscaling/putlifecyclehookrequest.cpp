// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putlifecyclehookrequest.h"
#include "putlifecyclehookrequest_p.h"
#include "putlifecyclehookresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutLifecycleHookRequest
 * \brief The PutLifecycleHookRequest class provides an interface for AutoScaling PutLifecycleHook requests.
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
 * \sa AutoScalingClient::putLifecycleHook
 */

/*!
 * Constructs a copy of \a other.
 */
PutLifecycleHookRequest::PutLifecycleHookRequest(const PutLifecycleHookRequest &other)
    : AutoScalingRequest(new PutLifecycleHookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLifecycleHookRequest object.
 */
PutLifecycleHookRequest::PutLifecycleHookRequest()
    : AutoScalingRequest(new PutLifecycleHookRequestPrivate(AutoScalingRequest::PutLifecycleHookAction, this))
{

}

/*!
 * \reimp
 */
bool PutLifecycleHookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLifecycleHookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLifecycleHookRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecycleHookResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::PutLifecycleHookRequestPrivate
 * \brief The PutLifecycleHookRequestPrivate class provides private implementation for PutLifecycleHookRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutLifecycleHookRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
PutLifecycleHookRequestPrivate::PutLifecycleHookRequestPrivate(
    const AutoScalingRequest::Action action, PutLifecycleHookRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLifecycleHookRequest
 * class' copy constructor.
 */
PutLifecycleHookRequestPrivate::PutLifecycleHookRequestPrivate(
    const PutLifecycleHookRequestPrivate &other, PutLifecycleHookRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
