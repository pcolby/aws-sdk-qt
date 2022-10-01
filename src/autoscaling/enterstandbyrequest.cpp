// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enterstandbyrequest.h"
#include "enterstandbyrequest_p.h"
#include "enterstandbyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::EnterStandbyRequest
 * \brief The EnterStandbyRequest class provides an interface for AutoScaling EnterStandby requests.
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
 * \sa AutoScalingClient::enterStandby
 */

/*!
 * Constructs a copy of \a other.
 */
EnterStandbyRequest::EnterStandbyRequest(const EnterStandbyRequest &other)
    : AutoScalingRequest(new EnterStandbyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnterStandbyRequest object.
 */
EnterStandbyRequest::EnterStandbyRequest()
    : AutoScalingRequest(new EnterStandbyRequestPrivate(AutoScalingRequest::EnterStandbyAction, this))
{

}

/*!
 * \reimp
 */
bool EnterStandbyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnterStandbyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnterStandbyRequest::response(QNetworkReply * const reply) const
{
    return new EnterStandbyResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::EnterStandbyRequestPrivate
 * \brief The EnterStandbyRequestPrivate class provides private implementation for EnterStandbyRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a EnterStandbyRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
EnterStandbyRequestPrivate::EnterStandbyRequestPrivate(
    const AutoScalingRequest::Action action, EnterStandbyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnterStandbyRequest
 * class' copy constructor.
 */
EnterStandbyRequestPrivate::EnterStandbyRequestPrivate(
    const EnterStandbyRequestPrivate &other, EnterStandbyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
