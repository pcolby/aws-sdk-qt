// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelifecyclepolicyrequest.h"
#include "updatelifecyclepolicyrequest_p.h"
#include "updatelifecyclepolicyresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::UpdateLifecyclePolicyRequest
 * \brief The UpdateLifecyclePolicyRequest class provides an interface for Dlm UpdateLifecyclePolicy requests.
 *
 * \inmodule QtAwsDlm
 *
 *  <fullname>Amazon Data Lifecycle Manager</fullname>
 * 
 *  With Amazon Data Lifecycle Manager, you can manage the lifecycle of your Amazon Web Services resources. You create
 *  lifecycle policies, which are used to automate operations on the specified
 * 
 *  resources>
 * 
 *  Amazon DLM supports Amazon EBS volumes and snapshots. For information about using Amazon DLM with Amazon EBS, see <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/snapshot-lifecycle.html">Automating the Amazon EBS Snapshot
 *  Lifecycle</a> in the <i>Amazon EC2 User
 *
 * \sa DlmClient::updateLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLifecyclePolicyRequest::UpdateLifecyclePolicyRequest(const UpdateLifecyclePolicyRequest &other)
    : DlmRequest(new UpdateLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLifecyclePolicyRequest object.
 */
UpdateLifecyclePolicyRequest::UpdateLifecyclePolicyRequest()
    : DlmRequest(new UpdateLifecyclePolicyRequestPrivate(DlmRequest::UpdateLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Dlm::UpdateLifecyclePolicyRequestPrivate
 * \brief The UpdateLifecyclePolicyRequestPrivate class provides private implementation for UpdateLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a UpdateLifecyclePolicyRequestPrivate object for Dlm \a action,
 * with public implementation \a q.
 */
UpdateLifecyclePolicyRequestPrivate::UpdateLifecyclePolicyRequestPrivate(
    const DlmRequest::Action action, UpdateLifecyclePolicyRequest * const q)
    : DlmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLifecyclePolicyRequest
 * class' copy constructor.
 */
UpdateLifecyclePolicyRequestPrivate::UpdateLifecyclePolicyRequestPrivate(
    const UpdateLifecyclePolicyRequestPrivate &other, UpdateLifecyclePolicyRequest * const q)
    : DlmRequestPrivate(other, q)
{

}

} // namespace Dlm
} // namespace QtAws
