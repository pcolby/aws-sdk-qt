// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepolicyrequest.h"
#include "deletepolicyrequest_p.h"
#include "deletepolicyresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeletePolicyRequest
 * \brief The DeletePolicyRequest class provides an interface for AutoScaling DeletePolicy requests.
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
 * \sa AutoScalingClient::deletePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePolicyRequest::DeletePolicyRequest(const DeletePolicyRequest &other)
    : AutoScalingRequest(new DeletePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePolicyRequest object.
 */
DeletePolicyRequest::DeletePolicyRequest()
    : AutoScalingRequest(new DeletePolicyRequestPrivate(AutoScalingRequest::DeletePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeletePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeletePolicyRequestPrivate
 * \brief The DeletePolicyRequestPrivate class provides private implementation for DeletePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeletePolicyRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const AutoScalingRequest::Action action, DeletePolicyRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePolicyRequest
 * class' copy constructor.
 */
DeletePolicyRequestPrivate::DeletePolicyRequestPrivate(
    const DeletePolicyRequestPrivate &other, DeletePolicyRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
