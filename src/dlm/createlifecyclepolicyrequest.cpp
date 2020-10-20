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

#include "createlifecyclepolicyrequest.h"
#include "createlifecyclepolicyrequest_p.h"
#include "createlifecyclepolicyresponse.h"
#include "dlmrequest_p.h"

namespace QtAws {
namespace DLM {

/*!
 * \class QtAws::DLM::CreateLifecyclePolicyRequest
 * \brief The CreateLifecyclePolicyRequest class provides an interface for DLM CreateLifecyclePolicy requests.
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
 * \class QtAws::DLM::CreateLifecyclePolicyRequestPrivate
 * \brief The CreateLifecyclePolicyRequestPrivate class provides private implementation for CreateLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsDLM
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

} // namespace DLM
} // namespace QtAws
