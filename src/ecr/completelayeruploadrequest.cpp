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

#include "completelayeruploadrequest.h"
#include "completelayeruploadrequest_p.h"
#include "completelayeruploadresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::CompleteLayerUploadRequest
 * \brief The CompleteLayerUploadRequest class provides an interface for ECR CompleteLayerUpload requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::completeLayerUpload
 */

/*!
 * Constructs a copy of \a other.
 */
CompleteLayerUploadRequest::CompleteLayerUploadRequest(const CompleteLayerUploadRequest &other)
    : ECRRequest(new CompleteLayerUploadRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CompleteLayerUploadRequest object.
 */
CompleteLayerUploadRequest::CompleteLayerUploadRequest()
    : ECRRequest(new CompleteLayerUploadRequestPrivate(ECRRequest::CompleteLayerUploadAction, this))
{

}

/*!
 * \reimp
 */
bool CompleteLayerUploadRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CompleteLayerUploadResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CompleteLayerUploadRequest::response(QNetworkReply * const reply) const
{
    return new CompleteLayerUploadResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::CompleteLayerUploadRequestPrivate
 * \brief The CompleteLayerUploadRequestPrivate class provides private implementation for CompleteLayerUploadRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a CompleteLayerUploadRequestPrivate object for ECR \a action,
 * with public implementation \a q.
 */
CompleteLayerUploadRequestPrivate::CompleteLayerUploadRequestPrivate(
    const ECRRequest::Action action, CompleteLayerUploadRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CompleteLayerUploadRequest
 * class' copy constructor.
 */
CompleteLayerUploadRequestPrivate::CompleteLayerUploadRequestPrivate(
    const CompleteLayerUploadRequestPrivate &other, CompleteLayerUploadRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
