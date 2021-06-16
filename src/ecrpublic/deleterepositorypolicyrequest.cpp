/*
    Copyright 2013-2021 Paul Colby

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

#include "deleterepositorypolicyrequest.h"
#include "deleterepositorypolicyrequest_p.h"
#include "deleterepositorypolicyresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace ECRPublic {

/*!
 * \class QtAws::ECRPublic::DeleteRepositoryPolicyRequest
 * \brief The DeleteRepositoryPolicyRequest class provides an interface for ECRPublic DeleteRepositoryPolicy requests.
 *
 * \inmodule QtAwsECRPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa ECRPublicClient::deleteRepositoryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRepositoryPolicyRequest::DeleteRepositoryPolicyRequest(const DeleteRepositoryPolicyRequest &other)
    : ECRPublicRequest(new DeleteRepositoryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRepositoryPolicyRequest object.
 */
DeleteRepositoryPolicyRequest::DeleteRepositoryPolicyRequest()
    : ECRPublicRequest(new DeleteRepositoryPolicyRequestPrivate(ECRPublicRequest::DeleteRepositoryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRepositoryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRepositoryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRepositoryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRepositoryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ECRPublic::DeleteRepositoryPolicyRequestPrivate
 * \brief The DeleteRepositoryPolicyRequestPrivate class provides private implementation for DeleteRepositoryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsECRPublic
 */

/*!
 * Constructs a DeleteRepositoryPolicyRequestPrivate object for ECRPublic \a action,
 * with public implementation \a q.
 */
DeleteRepositoryPolicyRequestPrivate::DeleteRepositoryPolicyRequestPrivate(
    const ECRPublicRequest::Action action, DeleteRepositoryPolicyRequest * const q)
    : ECRPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRepositoryPolicyRequest
 * class' copy constructor.
 */
DeleteRepositoryPolicyRequestPrivate::DeleteRepositoryPolicyRequestPrivate(
    const DeleteRepositoryPolicyRequestPrivate &other, DeleteRepositoryPolicyRequest * const q)
    : ECRPublicRequestPrivate(other, q)
{

}

} // namespace ECRPublic
} // namespace QtAws
