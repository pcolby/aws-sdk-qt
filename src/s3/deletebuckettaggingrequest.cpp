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

#include "deletebuckettaggingrequest.h"
#include "deletebuckettaggingrequest_p.h"
#include "deletebuckettaggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketTaggingRequest
 * \brief The DeleteBucketTaggingRequest class provides an interface for S3 DeleteBucketTagging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketTagging
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketTaggingRequest::DeleteBucketTaggingRequest(const DeleteBucketTaggingRequest &other)
    : S3Request(new DeleteBucketTaggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketTaggingRequest object.
 */
DeleteBucketTaggingRequest::DeleteBucketTaggingRequest()
    : S3Request(new DeleteBucketTaggingRequestPrivate(S3Request::DeleteBucketTaggingAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketTaggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketTaggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketTaggingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketTaggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketTaggingRequestPrivate
 * \brief The DeleteBucketTaggingRequestPrivate class provides private implementation for DeleteBucketTaggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketTaggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketTaggingRequestPrivate::DeleteBucketTaggingRequestPrivate(
    const S3Request::Action action, DeleteBucketTaggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketTaggingRequest
 * class' copy constructor.
 */
DeleteBucketTaggingRequestPrivate::DeleteBucketTaggingRequestPrivate(
    const DeleteBucketTaggingRequestPrivate &other, DeleteBucketTaggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
