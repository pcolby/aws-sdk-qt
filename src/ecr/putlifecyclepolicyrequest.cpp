/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "putlifecyclepolicyrequest.h"
#include "putlifecyclepolicyrequest_p.h"
#include "putlifecyclepolicyresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::PutLifecyclePolicyRequest
 * \brief The PutLifecyclePolicyRequest class provides an interface for ECR PutLifecyclePolicy requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa ECRClient::putLifecyclePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutLifecyclePolicyRequest::PutLifecyclePolicyRequest(const PutLifecyclePolicyRequest &other)
    : ECRRequest(new PutLifecyclePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLifecyclePolicyRequest object.
 */
PutLifecyclePolicyRequest::PutLifecyclePolicyRequest()
    : ECRRequest(new PutLifecyclePolicyRequestPrivate(ECRRequest::PutLifecyclePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutLifecyclePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLifecyclePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLifecyclePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutLifecyclePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::PutLifecyclePolicyRequestPrivate
 * \brief The PutLifecyclePolicyRequestPrivate class provides private implementation for PutLifecyclePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a PutLifecyclePolicyRequestPrivate object for ECR \a action,
 * with public implementation \a q.
 */
PutLifecyclePolicyRequestPrivate::PutLifecyclePolicyRequestPrivate(
    const ECRRequest::Action action, PutLifecyclePolicyRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLifecyclePolicyRequest
 * class' copy constructor.
 */
PutLifecyclePolicyRequestPrivate::PutLifecyclePolicyRequestPrivate(
    const PutLifecyclePolicyRequestPrivate &other, PutLifecyclePolicyRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
