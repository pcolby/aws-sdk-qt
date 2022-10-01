// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumeprocessesrequest.h"
#include "resumeprocessesrequest_p.h"
#include "resumeprocessesresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ResumeProcessesRequest
 * \brief The ResumeProcessesRequest class provides an interface for AutoScaling ResumeProcesses requests.
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
 * \sa AutoScalingClient::resumeProcesses
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeProcessesRequest::ResumeProcessesRequest(const ResumeProcessesRequest &other)
    : AutoScalingRequest(new ResumeProcessesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeProcessesRequest object.
 */
ResumeProcessesRequest::ResumeProcessesRequest()
    : AutoScalingRequest(new ResumeProcessesRequestPrivate(AutoScalingRequest::ResumeProcessesAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeProcessesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeProcessesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeProcessesRequest::response(QNetworkReply * const reply) const
{
    return new ResumeProcessesResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::ResumeProcessesRequestPrivate
 * \brief The ResumeProcessesRequestPrivate class provides private implementation for ResumeProcessesRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a ResumeProcessesRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
ResumeProcessesRequestPrivate::ResumeProcessesRequestPrivate(
    const AutoScalingRequest::Action action, ResumeProcessesRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeProcessesRequest
 * class' copy constructor.
 */
ResumeProcessesRequestPrivate::ResumeProcessesRequestPrivate(
    const ResumeProcessesRequestPrivate &other, ResumeProcessesRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
