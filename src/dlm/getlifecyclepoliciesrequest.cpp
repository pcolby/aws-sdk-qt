// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlifecyclepoliciesrequest.h"
#include "getlifecyclepoliciesrequest_p.h"
#include "getlifecyclepoliciesresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace Dlm {

/*!
 * \class QtAws::Dlm::GetLifecyclePoliciesRequest
 * \brief The GetLifecyclePoliciesRequest class provides an interface for Dlm GetLifecyclePolicies requests.
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
 * \sa DlmClient::getLifecyclePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
GetLifecyclePoliciesRequest::GetLifecyclePoliciesRequest(const GetLifecyclePoliciesRequest &other)
    : DlmRequest(new GetLifecyclePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLifecyclePoliciesRequest object.
 */
GetLifecyclePoliciesRequest::GetLifecyclePoliciesRequest()
    : DlmRequest(new GetLifecyclePoliciesRequestPrivate(DlmRequest::GetLifecyclePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool GetLifecyclePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLifecyclePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLifecyclePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new GetLifecyclePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Dlm::GetLifecyclePoliciesRequestPrivate
 * \brief The GetLifecyclePoliciesRequestPrivate class provides private implementation for GetLifecyclePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsDlm
 */

/*!
 * Constructs a GetLifecyclePoliciesRequestPrivate object for Dlm \a action,
 * with public implementation \a q.
 */
GetLifecyclePoliciesRequestPrivate::GetLifecyclePoliciesRequestPrivate(
    const DlmRequest::Action action, GetLifecyclePoliciesRequest * const q)
    : DlmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLifecyclePoliciesRequest
 * class' copy constructor.
 */
GetLifecyclePoliciesRequestPrivate::GetLifecyclePoliciesRequestPrivate(
    const GetLifecyclePoliciesRequestPrivate &other, GetLifecyclePoliciesRequest * const q)
    : DlmRequestPrivate(other, q)
{

}

} // namespace Dlm
} // namespace QtAws
