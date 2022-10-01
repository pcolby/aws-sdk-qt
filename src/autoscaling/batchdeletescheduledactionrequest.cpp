// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchdeletescheduledactionrequest.h"
#include "batchdeletescheduledactionrequest_p.h"
#include "batchdeletescheduledactionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::BatchDeleteScheduledActionRequest
 * \brief The BatchDeleteScheduledActionRequest class provides an interface for AutoScaling BatchDeleteScheduledAction requests.
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
 * \sa AutoScalingClient::batchDeleteScheduledAction
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteScheduledActionRequest::BatchDeleteScheduledActionRequest(const BatchDeleteScheduledActionRequest &other)
    : AutoScalingRequest(new BatchDeleteScheduledActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteScheduledActionRequest object.
 */
BatchDeleteScheduledActionRequest::BatchDeleteScheduledActionRequest()
    : AutoScalingRequest(new BatchDeleteScheduledActionRequestPrivate(AutoScalingRequest::BatchDeleteScheduledActionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteScheduledActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteScheduledActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteScheduledActionRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteScheduledActionResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::BatchDeleteScheduledActionRequestPrivate
 * \brief The BatchDeleteScheduledActionRequestPrivate class provides private implementation for BatchDeleteScheduledActionRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a BatchDeleteScheduledActionRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
BatchDeleteScheduledActionRequestPrivate::BatchDeleteScheduledActionRequestPrivate(
    const AutoScalingRequest::Action action, BatchDeleteScheduledActionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteScheduledActionRequest
 * class' copy constructor.
 */
BatchDeleteScheduledActionRequestPrivate::BatchDeleteScheduledActionRequestPrivate(
    const BatchDeleteScheduledActionRequestPrivate &other, BatchDeleteScheduledActionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
