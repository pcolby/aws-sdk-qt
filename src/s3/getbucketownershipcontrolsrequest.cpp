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

#include "getbucketownershipcontrolsrequest.h"
#include "getbucketownershipcontrolsrequest_p.h"
#include "getbucketownershipcontrolsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketOwnershipControlsRequest
 * \brief The GetBucketOwnershipControlsRequest class provides an interface for S3 GetBucketOwnershipControls requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketOwnershipControls
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketOwnershipControlsRequest::GetBucketOwnershipControlsRequest(const GetBucketOwnershipControlsRequest &other)
    : S3Request(new GetBucketOwnershipControlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketOwnershipControlsRequest object.
 */
GetBucketOwnershipControlsRequest::GetBucketOwnershipControlsRequest()
    : S3Request(new GetBucketOwnershipControlsRequestPrivate(S3Request::GetBucketOwnershipControlsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketOwnershipControlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketOwnershipControlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketOwnershipControlsRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketOwnershipControlsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketOwnershipControlsRequestPrivate
 * \brief The GetBucketOwnershipControlsRequestPrivate class provides private implementation for GetBucketOwnershipControlsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketOwnershipControlsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketOwnershipControlsRequestPrivate::GetBucketOwnershipControlsRequestPrivate(
    const S3Request::Action action, GetBucketOwnershipControlsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketOwnershipControlsRequest
 * class' copy constructor.
 */
GetBucketOwnershipControlsRequestPrivate::GetBucketOwnershipControlsRequestPrivate(
    const GetBucketOwnershipControlsRequestPrivate &other, GetBucketOwnershipControlsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
