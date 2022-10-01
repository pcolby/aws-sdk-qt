// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelifecyclepolicyrequest.h"
#include "deletelifecyclepolicyrequest_p.h"
#include "deletelifecyclepolicyresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::DeleteLifecyclePolicyRequest
 * \brief The DeleteLifecyclePolicyRequest class provides an interface for Dlm DeleteLifecyclePolicy requests.
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
 * \sa DlmClient::deleteLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest(const DeleteLifecyclePolicyRequest &other)
    : DlmRequest(new DeleteLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLifecyclePolicyRequest object.
 */
DeleteLifecyclePolicyRequest::DeleteLifecyclePolicyRequest()
    : DlmRequest(new DeleteLifecyclePolicyRequestPrivate(DlmRequest::DeleteLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Dlm::DeleteLifecyclePolicyRequestPrivate
 * \brief The DeleteLifecyclePolicyRequestPrivate class provides private implementation for DeleteLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a DeleteLifecyclePolicyRequestPrivate object for Dlm \a action,
 * with public implementation \a q.
 */
DeleteLifecyclePolicyRequestPrivate::DeleteLifecyclePolicyRequestPrivate(
    const DlmRequest::Action action, DeleteLifecyclePolicyRequest * const q)
    : DlmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLifecyclePolicyRequest
 * class' copy constructor.
 */
DeleteLifecyclePolicyRequestPrivate::DeleteLifecyclePolicyRequestPrivate(
    const DeleteLifecyclePolicyRequestPrivate &other, DeleteLifecyclePolicyRequest * const q)
    : DlmRequestPrivate(other, q)
{

}

} // namespace Dlm
} // namespace QtAws
