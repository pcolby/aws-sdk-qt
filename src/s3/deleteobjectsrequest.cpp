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

#include "deleteobjectsrequest.h"
#include "deleteobjectsrequest_p.h"
#include "deleteobjectsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteObjectsRequest
 * \brief The DeleteObjectsRequest class provides an interface for S3 DeleteObjects requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteObjects
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteObjectsRequest::DeleteObjectsRequest(const DeleteObjectsRequest &other)
    : S3Request(new DeleteObjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteObjectsRequest object.
 */
DeleteObjectsRequest::DeleteObjectsRequest()
    : S3Request(new DeleteObjectsRequestPrivate(S3Request::DeleteObjectsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteObjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteObjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteObjectsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteObjectsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteObjectsRequestPrivate
 * \brief The DeleteObjectsRequestPrivate class provides private implementation for DeleteObjectsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteObjectsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteObjectsRequestPrivate::DeleteObjectsRequestPrivate(
    const S3Request::Action action, DeleteObjectsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteObjectsRequest
 * class' copy constructor.
 */
DeleteObjectsRequestPrivate::DeleteObjectsRequestPrivate(
    const DeleteObjectsRequestPrivate &other, DeleteObjectsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
