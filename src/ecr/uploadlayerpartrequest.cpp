/*
    Copyright 2013-2019 Paul Colby

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

#include "uploadlayerpartrequest.h"
#include "uploadlayerpartrequest_p.h"
#include "uploadlayerpartresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::UploadLayerPartRequest
 * \brief The UploadLayerPartRequest class provides an interface for ECR UploadLayerPart requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::uploadLayerPart
 */

/*!
 * Constructs a copy of \a other.
 */
UploadLayerPartRequest::UploadLayerPartRequest(const UploadLayerPartRequest &other)
    : EcrRequest(new UploadLayerPartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadLayerPartRequest object.
 */
UploadLayerPartRequest::UploadLayerPartRequest()
    : EcrRequest(new UploadLayerPartRequestPrivate(EcrRequest::UploadLayerPartAction, this))
{

}

/*!
 * \reimp
 */
bool UploadLayerPartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadLayerPartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadLayerPartRequest::response(QNetworkReply * const reply) const
{
    return new UploadLayerPartResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::UploadLayerPartRequestPrivate
 * \brief The UploadLayerPartRequestPrivate class provides private implementation for UploadLayerPartRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a UploadLayerPartRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
UploadLayerPartRequestPrivate::UploadLayerPartRequestPrivate(
    const EcrRequest::Action action, UploadLayerPartRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadLayerPartRequest
 * class' copy constructor.
 */
UploadLayerPartRequestPrivate::UploadLayerPartRequestPrivate(
    const UploadLayerPartRequestPrivate &other, UploadLayerPartRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
