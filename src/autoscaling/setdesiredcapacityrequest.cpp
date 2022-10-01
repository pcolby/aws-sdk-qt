// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setdesiredcapacityrequest.h"
#include "setdesiredcapacityrequest_p.h"
#include "setdesiredcapacityresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::SetDesiredCapacityRequest
 * \brief The SetDesiredCapacityRequest class provides an interface for AutoScaling SetDesiredCapacity requests.
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
 * \sa AutoScalingClient::setDesiredCapacity
 */

/*!
 * Constructs a copy of \a other.
 */
SetDesiredCapacityRequest::SetDesiredCapacityRequest(const SetDesiredCapacityRequest &other)
    : AutoScalingRequest(new SetDesiredCapacityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetDesiredCapacityRequest object.
 */
SetDesiredCapacityRequest::SetDesiredCapacityRequest()
    : AutoScalingRequest(new SetDesiredCapacityRequestPrivate(AutoScalingRequest::SetDesiredCapacityAction, this))
{

}

/*!
 * \reimp
 */
bool SetDesiredCapacityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetDesiredCapacityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetDesiredCapacityRequest::response(QNetworkReply * const reply) const
{
    return new SetDesiredCapacityResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::SetDesiredCapacityRequestPrivate
 * \brief The SetDesiredCapacityRequestPrivate class provides private implementation for SetDesiredCapacityRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a SetDesiredCapacityRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
SetDesiredCapacityRequestPrivate::SetDesiredCapacityRequestPrivate(
    const AutoScalingRequest::Action action, SetDesiredCapacityRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetDesiredCapacityRequest
 * class' copy constructor.
 */
SetDesiredCapacityRequestPrivate::SetDesiredCapacityRequestPrivate(
    const SetDesiredCapacityRequestPrivate &other, SetDesiredCapacityRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
