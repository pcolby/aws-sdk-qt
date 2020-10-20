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

#include "deletebucketcorsrequest.h"
#include "deletebucketcorsrequest_p.h"
#include "deletebucketcorsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketCorsRequest
 * \brief The DeleteBucketCorsRequest class provides an interface for S3 DeleteBucketCors requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketCors
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketCorsRequest::DeleteBucketCorsRequest(const DeleteBucketCorsRequest &other)
    : S3Request(new DeleteBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketCorsRequest object.
 */
DeleteBucketCorsRequest::DeleteBucketCorsRequest()
    : S3Request(new DeleteBucketCorsRequestPrivate(S3Request::DeleteBucketCorsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketCorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketCorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketCorsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketCorsRequestPrivate
 * \brief The DeleteBucketCorsRequestPrivate class provides private implementation for DeleteBucketCorsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketCorsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketCorsRequestPrivate::DeleteBucketCorsRequestPrivate(
    const S3Request::Action action, DeleteBucketCorsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketCorsRequest
 * class' copy constructor.
 */
DeleteBucketCorsRequestPrivate::DeleteBucketCorsRequestPrivate(
    const DeleteBucketCorsRequestPrivate &other, DeleteBucketCorsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
