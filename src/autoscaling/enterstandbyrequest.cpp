/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
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
