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

#include "putscalingpolicyrequest.h"
#include "putscalingpolicyrequest_p.h"
#include "putscalingpolicyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutScalingPolicyRequest
 * \brief The PutScalingPolicyRequest class provides an interface for AutoScaling PutScalingPolicy requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information about Amazon EC2 Auto Scaling, see the <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/what-is-amazon-ec2-auto-scaling.html">Amazon EC2 Auto
 *  Scaling User Guide</a>. For information about granting IAM users required permissions for calls to Amazon EC2 Auto
 *  Scaling, see <a
 *  href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/ec2-auto-scaling-api-permissions.html">Granting IAM users
 *  required permissions for Amazon EC2 Auto Scaling resources</a> in the <i>Amazon EC2 Auto Scaling API
 *
 * \sa AutoScalingClient::putScalingPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest(const PutScalingPolicyRequest &other)
    : AutoScalingRequest(new PutScalingPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutScalingPolicyRequest object.
 */
PutScalingPolicyRequest::PutScalingPolicyRequest()
    : AutoScalingRequest(new PutScalingPolicyRequestPrivate(AutoScalingRequest::PutScalingPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutScalingPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutScalingPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutScalingPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutScalingPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::PutScalingPolicyRequestPrivate
 * \brief The PutScalingPolicyRequestPrivate class provides private implementation for PutScalingPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a PutScalingPolicyRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const AutoScalingRequest::Action action, PutScalingPolicyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutScalingPolicyRequest
 * class' copy constructor.
 */
PutScalingPolicyRequestPrivate::PutScalingPolicyRequestPrivate(
    const PutScalingPolicyRequestPrivate &other, PutScalingPolicyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
