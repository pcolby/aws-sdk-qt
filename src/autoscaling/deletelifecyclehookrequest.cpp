// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelifecyclehookrequest.h"
#include "deletelifecyclehookrequest_p.h"
#include "deletelifecyclehookresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteLifecycleHookRequest
 * \brief The DeleteLifecycleHookRequest class provides an interface for AutoScaling DeleteLifecycleHook requests.
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
 * \sa AutoScalingClient::deleteLifecycleHook
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLifecycleHookRequest::DeleteLifecycleHookRequest(const DeleteLifecycleHookRequest &other)
    : AutoScalingRequest(new DeleteLifecycleHookRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLifecycleHookRequest object.
 */
DeleteLifecycleHookRequest::DeleteLifecycleHookRequest()
    : AutoScalingRequest(new DeleteLifecycleHookRequestPrivate(AutoScalingRequest::DeleteLifecycleHookAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLifecycleHookRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLifecycleHookResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLifecycleHookRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLifecycleHookResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteLifecycleHookRequestPrivate
 * \brief The DeleteLifecycleHookRequestPrivate class provides private implementation for DeleteLifecycleHookRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteLifecycleHookRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeleteLifecycleHookRequestPrivate::DeleteLifecycleHookRequestPrivate(
    const AutoScalingRequest::Action action, DeleteLifecycleHookRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLifecycleHookRequest
 * class' copy constructor.
 */
DeleteLifecycleHookRequestPrivate::DeleteLifecycleHookRequestPrivate(
    const DeleteLifecycleHookRequestPrivate &other, DeleteLifecycleHookRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
