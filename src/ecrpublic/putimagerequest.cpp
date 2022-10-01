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
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::PutImageRequest
 * \brief The PutImageRequest class provides an interface for EcrPublic PutImage requests.
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
 * \sa EcrPublicClient::putImage
 */

/*!
 * Constructs a copy of \a other.
 */
PutImageRequest::PutImageRequest(const PutImageRequest &other)
    : EcrPublicRequest(new PutImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImageRequest object.
 */
PutImageRequest::PutImageRequest()
    : EcrPublicRequest(new PutImageRequestPrivate(EcrPublicRequest::PutImageAction, this))
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
 * \class QtAws::EcrPublic::PutImageRequestPrivate
 * \brief The PutImageRequestPrivate class provides private implementation for PutImageRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a PutImageRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
PutImageRequestPrivate::PutImageRequestPrivate(
    const EcrPublicRequest::Action action, PutImageRequest * const q)
    : EcrPublicRequestPrivate(action, q)
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
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
