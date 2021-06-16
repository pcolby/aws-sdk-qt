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

#include "deletebucketownershipcontrolsrequest.h"
#include "deletebucketownershipcontrolsrequest_p.h"
#include "deletebucketownershipcontrolsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::DeleteBucketOwnershipControlsRequest
 * \brief The DeleteBucketOwnershipControlsRequest class provides an interface for S3 DeleteBucketOwnershipControls requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::deleteBucketOwnershipControls
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBucketOwnershipControlsRequest::DeleteBucketOwnershipControlsRequest(const DeleteBucketOwnershipControlsRequest &other)
    : S3Request(new DeleteBucketOwnershipControlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBucketOwnershipControlsRequest object.
 */
DeleteBucketOwnershipControlsRequest::DeleteBucketOwnershipControlsRequest()
    : S3Request(new DeleteBucketOwnershipControlsRequestPrivate(S3Request::DeleteBucketOwnershipControlsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBucketOwnershipControlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBucketOwnershipControlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBucketOwnershipControlsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBucketOwnershipControlsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::DeleteBucketOwnershipControlsRequestPrivate
 * \brief The DeleteBucketOwnershipControlsRequestPrivate class provides private implementation for DeleteBucketOwnershipControlsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a DeleteBucketOwnershipControlsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
DeleteBucketOwnershipControlsRequestPrivate::DeleteBucketOwnershipControlsRequestPrivate(
    const S3Request::Action action, DeleteBucketOwnershipControlsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBucketOwnershipControlsRequest
 * class' copy constructor.
 */
DeleteBucketOwnershipControlsRequestPrivate::DeleteBucketOwnershipControlsRequestPrivate(
    const DeleteBucketOwnershipControlsRequestPrivate &other, DeleteBucketOwnershipControlsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
