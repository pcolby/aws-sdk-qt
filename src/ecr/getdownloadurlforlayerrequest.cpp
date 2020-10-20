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

#include "getdownloadurlforlayerrequest.h"
#include "getdownloadurlforlayerrequest_p.h"
#include "getdownloadurlforlayerresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::GetDownloadUrlForLayerRequest
 * \brief The GetDownloadUrlForLayerRequest class provides an interface for ECR GetDownloadUrlForLayer requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::getDownloadUrlForLayer
 */

/*!
 * Constructs a copy of \a other.
 */
GetDownloadUrlForLayerRequest::GetDownloadUrlForLayerRequest(const GetDownloadUrlForLayerRequest &other)
    : EcrRequest(new GetDownloadUrlForLayerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDownloadUrlForLayerRequest object.
 */
GetDownloadUrlForLayerRequest::GetDownloadUrlForLayerRequest()
    : EcrRequest(new GetDownloadUrlForLayerRequestPrivate(EcrRequest::GetDownloadUrlForLayerAction, this))
{

}

/*!
 * \reimp
 */
bool GetDownloadUrlForLayerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDownloadUrlForLayerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDownloadUrlForLayerRequest::response(QNetworkReply * const reply) const
{
    return new GetDownloadUrlForLayerResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::GetDownloadUrlForLayerRequestPrivate
 * \brief The GetDownloadUrlForLayerRequestPrivate class provides private implementation for GetDownloadUrlForLayerRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a GetDownloadUrlForLayerRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
GetDownloadUrlForLayerRequestPrivate::GetDownloadUrlForLayerRequestPrivate(
    const EcrRequest::Action action, GetDownloadUrlForLayerRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDownloadUrlForLayerRequest
 * class' copy constructor.
 */
GetDownloadUrlForLayerRequestPrivate::GetDownloadUrlForLayerRequestPrivate(
    const GetDownloadUrlForLayerRequestPrivate &other, GetDownloadUrlForLayerRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
