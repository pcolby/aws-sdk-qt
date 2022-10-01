// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "suspendprocessesrequest.h"
#include "suspendprocessesrequest_p.h"
#include "suspendprocessesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SuspendProcessesRequest
 * \brief The SuspendProcessesRequest class provides an interface for AutoScaling SuspendProcesses requests.
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
 * \sa AutoScalingClient::suspendProcesses
 */

/*!
 * Constructs a copy of \a other.
 */
SuspendProcessesRequest::SuspendProcessesRequest(const SuspendProcessesRequest &other)
    : AutoScalingRequest(new SuspendProcessesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SuspendProcessesRequest object.
 */
SuspendProcessesRequest::SuspendProcessesRequest()
    : AutoScalingRequest(new SuspendProcessesRequestPrivate(AutoScalingRequest::SuspendProcessesAction, this))
{

}

/*!
 * \reimp
 */
bool SuspendProcessesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SuspendProcessesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SuspendProcessesRequest::response(QNetworkReply * const reply) const
{
    return new SuspendProcessesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::SuspendProcessesRequestPrivate
 * \brief The SuspendProcessesRequestPrivate class provides private implementation for SuspendProcessesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SuspendProcessesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
SuspendProcessesRequestPrivate::SuspendProcessesRequestPrivate(
    const AutoScalingRequest::Action action, SuspendProcessesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SuspendProcessesRequest
 * class' copy constructor.
 */
SuspendProcessesRequestPrivate::SuspendProcessesRequestPrivate(
    const SuspendProcessesRequestPrivate &other, SuspendProcessesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
