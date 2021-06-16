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

#include "listimagesrequest.h"
#include "listimagesrequest_p.h"
#include "listimagesresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::ListImagesRequest
 * \brief The ListImagesRequest class provides an interface for ECR ListImages requests.
 *
 * \inmodule QtAwsECR
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 *
 * \sa EcrClient::listImages
 */

/*!
 * Constructs a copy of \a other.
 */
ListImagesRequest::ListImagesRequest(const ListImagesRequest &other)
    : EcrRequest(new ListImagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListImagesRequest object.
 */
ListImagesRequest::ListImagesRequest()
    : EcrRequest(new ListImagesRequestPrivate(EcrRequest::ListImagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListImagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListImagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImagesRequest::response(QNetworkReply * const reply) const
{
    return new ListImagesResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::ListImagesRequestPrivate
 * \brief The ListImagesRequestPrivate class provides private implementation for ListImagesRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a ListImagesRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const EcrRequest::Action action, ListImagesRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListImagesRequest
 * class' copy constructor.
 */
ListImagesRequestPrivate::ListImagesRequestPrivate(
    const ListImagesRequestPrivate &other, ListImagesRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
