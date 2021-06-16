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

#include "putbucketownershipcontrolsrequest.h"
#include "putbucketownershipcontrolsrequest_p.h"
#include "putbucketownershipcontrolsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::PutBucketOwnershipControlsRequest
 * \brief The PutBucketOwnershipControlsRequest class provides an interface for S3 PutBucketOwnershipControls requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::putBucketOwnershipControls
 */

/*!
 * Constructs a copy of \a other.
 */
PutBucketOwnershipControlsRequest::PutBucketOwnershipControlsRequest(const PutBucketOwnershipControlsRequest &other)
    : S3Request(new PutBucketOwnershipControlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutBucketOwnershipControlsRequest object.
 */
PutBucketOwnershipControlsRequest::PutBucketOwnershipControlsRequest()
    : S3Request(new PutBucketOwnershipControlsRequestPrivate(S3Request::PutBucketOwnershipControlsAction, this))
{

}

/*!
 * \reimp
 */
bool PutBucketOwnershipControlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutBucketOwnershipControlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutBucketOwnershipControlsRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketOwnershipControlsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::PutBucketOwnershipControlsRequestPrivate
 * \brief The PutBucketOwnershipControlsRequestPrivate class provides private implementation for PutBucketOwnershipControlsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a PutBucketOwnershipControlsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
PutBucketOwnershipControlsRequestPrivate::PutBucketOwnershipControlsRequestPrivate(
    const S3Request::Action action, PutBucketOwnershipControlsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutBucketOwnershipControlsRequest
 * class' copy constructor.
 */
PutBucketOwnershipControlsRequestPrivate::PutBucketOwnershipControlsRequestPrivate(
    const PutBucketOwnershipControlsRequestPrivate &other, PutBucketOwnershipControlsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
