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

#include "putimagerequest.h"
#include "putimagerequest_p.h"
#include "putimageresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::PutImageRequest
 * \brief The PutImageRequest class provides an interface for ECR PutImage requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::putImage
 */

/*!
 * Constructs a copy of \a other.
 */
PutImageRequest::PutImageRequest(const PutImageRequest &other)
    : EcrRequest(new PutImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImageRequest object.
 */
PutImageRequest::PutImageRequest()
    : EcrRequest(new PutImageRequestPrivate(EcrRequest::PutImageAction, this))
{

}

/*!
 * \reimp
 */
bool PutImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutImageRequest::response(QNetworkReply * const reply) const
{
    return new PutImageResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::PutImageRequestPrivate
 * \brief The PutImageRequestPrivate class provides private implementation for PutImageRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a PutImageRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
PutImageRequestPrivate::PutImageRequestPrivate(
    const EcrRequest::Action action, PutImageRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutImageRequest
 * class' copy constructor.
 */
PutImageRequestPrivate::PutImageRequestPrivate(
    const PutImageRequestPrivate &other, PutImageRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
