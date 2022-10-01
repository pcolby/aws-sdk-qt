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

#include "getrepositorypolicyrequest.h"
#include "getrepositorypolicyrequest_p.h"
#include "getrepositorypolicyresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::GetRepositoryPolicyRequest
 * \brief The GetRepositoryPolicyRequest class provides an interface for EcrPublic GetRepositoryPolicy requests.
 *
 * \inmodule QtAwsEcrPublic
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
 * \sa EcrPublicClient::getRepositoryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetRepositoryPolicyRequest::GetRepositoryPolicyRequest(const GetRepositoryPolicyRequest &other)
    : EcrPublicRequest(new GetRepositoryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRepositoryPolicyRequest object.
 */
GetRepositoryPolicyRequest::GetRepositoryPolicyRequest()
    : EcrPublicRequest(new GetRepositoryPolicyRequestPrivate(EcrPublicRequest::GetRepositoryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetRepositoryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRepositoryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRepositoryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetRepositoryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::GetRepositoryPolicyRequestPrivate
 * \brief The GetRepositoryPolicyRequestPrivate class provides private implementation for GetRepositoryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a GetRepositoryPolicyRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
GetRepositoryPolicyRequestPrivate::GetRepositoryPolicyRequestPrivate(
    const EcrPublicRequest::Action action, GetRepositoryPolicyRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRepositoryPolicyRequest
 * class' copy constructor.
 */
GetRepositoryPolicyRequestPrivate::GetRepositoryPolicyRequestPrivate(
    const GetRepositoryPolicyRequestPrivate &other, GetRepositoryPolicyRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
