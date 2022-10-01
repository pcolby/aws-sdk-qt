// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlifecyclepolicyrequest.h"
#include "createlifecyclepolicyrequest_p.h"
#include "createlifecyclepolicyresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::CreateLifecyclePolicyRequest
 * \brief The CreateLifecyclePolicyRequest class provides an interface for Dlm CreateLifecyclePolicy requests.
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
 * \sa DlmClient::createLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLifecyclePolicyRequest::CreateLifecyclePolicyRequest(const CreateLifecyclePolicyRequest &other)
    : DlmRequest(new CreateLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLifecyclePolicyRequest object.
 */
CreateLifecyclePolicyRequest::CreateLifecyclePolicyRequest()
    : DlmRequest(new CreateLifecyclePolicyRequestPrivate(DlmRequest::CreateLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new CreateLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Dlm::CreateLifecyclePolicyRequestPrivate
 * \brief The CreateLifecyclePolicyRequestPrivate class provides private implementation for CreateLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a CreateLifecyclePolicyRequestPrivate object for Dlm \a action,
 * with public implementation \a q.
 */
CreateLifecyclePolicyRequestPrivate::CreateLifecyclePolicyRequestPrivate(
    const DlmRequest::Action action, CreateLifecyclePolicyRequest * const q)
    : DlmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLifecyclePolicyRequest
 * class' copy constructor.
 */
CreateLifecyclePolicyRequestPrivate::CreateLifecyclePolicyRequestPrivate(
    const CreateLifecyclePolicyRequestPrivate &other, CreateLifecyclePolicyRequest * const q)
    : DlmRequestPrivate(other, q)
{

}

} // namespace Dlm
} // namespace QtAws
