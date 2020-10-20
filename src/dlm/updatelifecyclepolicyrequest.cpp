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

#include "updatelifecyclepolicyrequest.h"
#include "updatelifecyclepolicyrequest_p.h"
#include "updatelifecyclepolicyresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace DLM {

/*!
 * \class QtAws::DLM::UpdateLifecyclePolicyRequest
 * \brief The UpdateLifecyclePolicyRequest class provides an interface for DLM UpdateLifecyclePolicy requests.
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
 * \class QtAws::DLM::UpdateLifecyclePolicyRequestPrivate
 * \brief The UpdateLifecyclePolicyRequestPrivate class provides private implementation for UpdateLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsDLM
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

} // namespace DLM
} // namespace QtAws
