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

#include "deletebucketlifecyclerequest.h"
#include "deletebucketlifecyclerequest_p.h"
#include "deletebucketlifecycleresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketLifecycleRequest
 * \brief The DeleteBucketLifecycleRequest class provides an interface for S3 DeleteBucketLifecycle requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketLifecycle
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketLifecycleRequest::DeleteBucketLifecycleRequest(const DeleteBucketLifecycleRequest &other)
    : S3Request(new DeleteBucketLifecycleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketLifecycleRequest object.
 */
DeleteBucketLifecycleRequest::DeleteBucketLifecycleRequest()
    : S3Request(new DeleteBucketLifecycleRequestPrivate(S3Request::DeleteBucketLifecycleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketLifecycleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketLifecycleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketLifecycleResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketLifecycleRequestPrivate
 * \brief The DeleteBucketLifecycleRequestPrivate class provides private implementation for DeleteBucketLifecycleRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketLifecycleRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketLifecycleRequestPrivate::DeleteBucketLifecycleRequestPrivate(
    const S3Request::Action action, DeleteBucketLifecycleRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketLifecycleRequest
 * class' copy constructor.
 */
DeleteBucketLifecycleRequestPrivate::DeleteBucketLifecycleRequestPrivate(
    const DeleteBucketLifecycleRequestPrivate &other, DeleteBucketLifecycleRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
