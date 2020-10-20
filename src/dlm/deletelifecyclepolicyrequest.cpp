/*
    Copyright 2013-2020 Paul Colby

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

#include "deletelifecyclepolicyrequest.h"
#include "deletelifecyclepolicyrequest_p.h"
#include "deletelifecyclepolicyresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace DLM {

/*!
 * \class QtAws::DLM::DeleteLifecyclePolicyRequest
 * \brief The DeleteLifecyclePolicyRequest class provides an interface for DLM DeleteLifecyclePolicy requests.
 *
 * \inmodule QtAwsDLM
 *
 *  <fullname>Amazon Data Lifecycle Manager</fullname>
 * 
 *  With Amazon Data Lifecycle Manager, you can manage the lifecycle of your AWS resources. You create lifecycle policies,
 *  which are used to automate operations on the specified
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
 * \class QtAws::DLM::DeleteLifecyclePolicyRequestPrivate
 * \brief The DeleteLifecyclePolicyRequestPrivate class provides private implementation for DeleteLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsDLM
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

} // namespace DLM
} // namespace QtAws
