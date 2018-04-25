/*
    Copyright 2013-2018 Paul Colby

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

#include "batchgetimagerequest.h"
#include "batchgetimagerequest_p.h"
#include "batchgetimageresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/*!
 * \class QtAws::ECR::BatchGetImageRequest
 * \brief The BatchGetImageRequest class provides an interface for ECR BatchGetImage requests.
 *
 * \inmodule QtAwsECR
 *
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed Docker registry service. Customers can use the familiar
 *  Docker CLI to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry. Amazon ECR
 *  supports private Docker repositories with resource-based permissions using IAM so that specific users or Amazon EC2
 *  instances can access repositories and images. Developers can use the Docker CLI to author and manage
 *
 * \sa EcrClient::batchGetImage
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetImageRequest::BatchGetImageRequest(const BatchGetImageRequest &other)
    : EcrRequest(new BatchGetImageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetImageRequest object.
 */
BatchGetImageRequest::BatchGetImageRequest()
    : EcrRequest(new BatchGetImageRequestPrivate(EcrRequest::BatchGetImageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetImageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetImageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetImageRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetImageResponse(*this, reply);
}

/*!
 * \class QtAws::ECR::BatchGetImageRequestPrivate
 * \brief The BatchGetImageRequestPrivate class provides private implementation for BatchGetImageRequest.
 * \internal
 *
 * \inmodule QtAwsECR
 */

/*!
 * Constructs a BatchGetImageRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
BatchGetImageRequestPrivate::BatchGetImageRequestPrivate(
    const EcrRequest::Action action, BatchGetImageRequest * const q)
    : EcrRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetImageRequest
 * class' copy constructor.
 */
BatchGetImageRequestPrivate::BatchGetImageRequestPrivate(
    const BatchGetImageRequestPrivate &other, BatchGetImageRequest * const q)
    : EcrRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
