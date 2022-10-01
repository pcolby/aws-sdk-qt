// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
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
