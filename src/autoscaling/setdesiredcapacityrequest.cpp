/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service with AWS Auto Scaling, Amazon CloudWatch, and Elastic Load
 * 
 *  Balancing>
 * 
 *  For more information, including information about granting IAM users required permissions for Amazon EC2 Auto Scaling
 *  actions, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User
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
