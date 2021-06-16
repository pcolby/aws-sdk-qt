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

#include "batchdeleteimagerequest.h"
#include "batchdeleteimagerequest_p.h"
#include "batchdeleteimageresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace ECRPublic {

/*!
 * \class QtAws::ECRPublic::BatchDeleteImageRequest
 * \brief The BatchDeleteImageRequest class provides an interface for ECRPublic BatchDeleteImage requests.
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
 * \sa ECRPublicClient::batchDeleteImage
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeleteImageRequest::BatchDeleteImageRequest(const BatchDeleteImageRequest &other)
    : ECRPublicRequest(new BatchDeleteImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeleteImageRequest object.
 */
BatchDeleteImageRequest::BatchDeleteImageRequest()
    : ECRPublicRequest(new BatchDeleteImageRequestPrivate(ECRPublicRequest::BatchDeleteImageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeleteImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeleteImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeleteImageRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeleteImageResponse(*this, reply);
}

/*!
 * \class QtAws::ECRPublic::BatchDeleteImageRequestPrivate
 * \brief The BatchDeleteImageRequestPrivate class provides private implementation for BatchDeleteImageRequest.
 * \internal
 *
 * \inmodule QtAwsECRPublic
 */

/*!
 * Constructs a BatchDeleteImageRequestPrivate object for ECRPublic \a action,
 * with public implementation \a q.
 */
BatchDeleteImageRequestPrivate::BatchDeleteImageRequestPrivate(
    const ECRPublicRequest::Action action, BatchDeleteImageRequest * const q)
    : ECRPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeleteImageRequest
 * class' copy constructor.
 */
BatchDeleteImageRequestPrivate::BatchDeleteImageRequestPrivate(
    const BatchDeleteImageRequestPrivate &other, BatchDeleteImageRequest * const q)
    : ECRPublicRequestPrivate(other, q)
{

}

} // namespace ECRPublic
} // namespace QtAws
