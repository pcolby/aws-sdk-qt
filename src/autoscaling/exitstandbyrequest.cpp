// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "exitstandbyrequest.h"
#include "exitstandbyrequest_p.h"
#include "exitstandbyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ExitStandbyRequest
 * \brief The ExitStandbyRequest class provides an interface for AutoScaling ExitStandby requests.
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
 * \sa AutoScalingClient::exitStandby
 */

/*!
 * Constructs a copy of \a other.
 */
ExitStandbyRequest::ExitStandbyRequest(const ExitStandbyRequest &other)
    : AutoScalingRequest(new ExitStandbyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExitStandbyRequest object.
 */
ExitStandbyRequest::ExitStandbyRequest()
    : AutoScalingRequest(new ExitStandbyRequestPrivate(AutoScalingRequest::ExitStandbyAction, this))
{

}

/*!
 * \reimp
 */
bool ExitStandbyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExitStandbyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExitStandbyRequest::response(QNetworkReply * const reply) const
{
    return new ExitStandbyResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::ExitStandbyRequestPrivate
 * \brief The ExitStandbyRequestPrivate class provides private implementation for ExitStandbyRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a ExitStandbyRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
ExitStandbyRequestPrivate::ExitStandbyRequestPrivate(
    const AutoScalingRequest::Action action, ExitStandbyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExitStandbyRequest
 * class' copy constructor.
 */
ExitStandbyRequestPrivate::ExitStandbyRequestPrivate(
    const ExitStandbyRequestPrivate &other, ExitStandbyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
