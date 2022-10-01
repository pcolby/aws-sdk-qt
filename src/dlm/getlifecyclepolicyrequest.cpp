// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlifecyclepolicyrequest.h"
#include "getlifecyclepolicyrequest_p.h"
#include "getlifecyclepolicyresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::GetLifecyclePolicyRequest
 * \brief The GetLifecyclePolicyRequest class provides an interface for Dlm GetLifecyclePolicy requests.
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
 * \sa DlmClient::getLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetLifecyclePolicyRequest::GetLifecyclePolicyRequest(const GetLifecyclePolicyRequest &other)
    : DlmRequest(new GetLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLifecyclePolicyRequest object.
 */
GetLifecyclePolicyRequest::GetLifecyclePolicyRequest()
    : DlmRequest(new GetLifecyclePolicyRequestPrivate(DlmRequest::GetLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Dlm::GetLifecyclePolicyRequestPrivate
 * \brief The GetLifecyclePolicyRequestPrivate class provides private implementation for GetLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a GetLifecyclePolicyRequestPrivate object for Dlm \a action,
 * with public implementation \a q.
 */
GetLifecyclePolicyRequestPrivate::GetLifecyclePolicyRequestPrivate(
    const DlmRequest::Action action, GetLifecyclePolicyRequest * const q)
    : DlmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLifecyclePolicyRequest
 * class' copy constructor.
 */
GetLifecyclePolicyRequestPrivate::GetLifecyclePolicyRequestPrivate(
    const GetLifecyclePolicyRequestPrivate &other, GetLifecyclePolicyRequest * const q)
    : DlmRequestPrivate(other, q)
{

}

} // namespace Dlm
} // namespace QtAws
