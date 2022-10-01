// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
