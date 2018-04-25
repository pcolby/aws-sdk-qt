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

#include "getbucketcorsrequest.h"
#include "getbucketcorsrequest_p.h"
#include "getbucketcorsresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketCorsRequest
 * \brief The GetBucketCorsRequest class provides an interface for S3 GetBucketCors requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketCors
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketCorsRequest::GetBucketCorsRequest(const GetBucketCorsRequest &other)
    : S3Request(new GetBucketCorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketCorsRequest object.
 */
GetBucketCorsRequest::GetBucketCorsRequest()
    : S3Request(new GetBucketCorsRequestPrivate(S3Request::GetBucketCorsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketCorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketCorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketCorsRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketCorsResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketCorsRequestPrivate
 * \brief The GetBucketCorsRequestPrivate class provides private implementation for GetBucketCorsRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketCorsRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketCorsRequestPrivate::GetBucketCorsRequestPrivate(
    const S3Request::Action action, GetBucketCorsRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketCorsRequest
 * class' copy constructor.
 */
GetBucketCorsRequestPrivate::GetBucketCorsRequestPrivate(
    const GetBucketCorsRequestPrivate &other, GetBucketCorsRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
