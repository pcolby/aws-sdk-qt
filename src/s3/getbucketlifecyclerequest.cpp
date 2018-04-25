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

#include "getbucketlifecyclerequest.h"
#include "getbucketlifecyclerequest_p.h"
#include "getbucketlifecycleresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLifecycleRequest
 * \brief The GetBucketLifecycleRequest class provides an interface for S3 GetBucketLifecycle requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLifecycle
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketLifecycleRequest::GetBucketLifecycleRequest(const GetBucketLifecycleRequest &other)
    : S3Request(new GetBucketLifecycleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketLifecycleRequest object.
 */
GetBucketLifecycleRequest::GetBucketLifecycleRequest()
    : S3Request(new GetBucketLifecycleRequestPrivate(S3Request::GetBucketLifecycleAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketLifecycleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketLifecycleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketLifecycleRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLifecycleResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketLifecycleRequestPrivate
 * \brief The GetBucketLifecycleRequestPrivate class provides private implementation for GetBucketLifecycleRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLifecycleRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketLifecycleRequestPrivate::GetBucketLifecycleRequestPrivate(
    const S3Request::Action action, GetBucketLifecycleRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLifecycleRequest
 * class' copy constructor.
 */
GetBucketLifecycleRequestPrivate::GetBucketLifecycleRequestPrivate(
    const GetBucketLifecycleRequestPrivate &other, GetBucketLifecycleRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
