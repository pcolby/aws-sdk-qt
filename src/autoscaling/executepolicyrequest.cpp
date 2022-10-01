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

#include "executepolicyrequest.h"
#include "executepolicyrequest_p.h"
#include "executepolicyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::ExecutePolicyRequest
 * \brief The ExecutePolicyRequest class provides an interface for AutoScaling ExecutePolicy requests.
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
 * \sa AutoScalingClient::executePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
ExecutePolicyRequest::ExecutePolicyRequest(const ExecutePolicyRequest &other)
    : AutoScalingRequest(new ExecutePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecutePolicyRequest object.
 */
ExecutePolicyRequest::ExecutePolicyRequest()
    : AutoScalingRequest(new ExecutePolicyRequestPrivate(AutoScalingRequest::ExecutePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool ExecutePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecutePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecutePolicyRequest::response(QNetworkReply * const reply) const
{
    return new ExecutePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::ExecutePolicyRequestPrivate
 * \brief The ExecutePolicyRequestPrivate class provides private implementation for ExecutePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a ExecutePolicyRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
ExecutePolicyRequestPrivate::ExecutePolicyRequestPrivate(
    const AutoScalingRequest::Action action, ExecutePolicyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecutePolicyRequest
 * class' copy constructor.
 */
ExecutePolicyRequestPrivate::ExecutePolicyRequestPrivate(
    const ExecutePolicyRequestPrivate &other, ExecutePolicyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
