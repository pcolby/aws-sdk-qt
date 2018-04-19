/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbucketloggingrequest.h"
#include "getbucketloggingrequest_p.h"
#include "getbucketloggingresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketLoggingRequest
 * \brief The GetBucketLoggingRequest class provides an interface for S3 GetBucketLogging requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketLogging
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketLoggingRequest::GetBucketLoggingRequest(const GetBucketLoggingRequest &other)
    : S3Request(new GetBucketLoggingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketLoggingRequest object.
 */
GetBucketLoggingRequest::GetBucketLoggingRequest()
    : S3Request(new GetBucketLoggingRequestPrivate(S3Request::GetBucketLoggingAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketLoggingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketLoggingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketLoggingRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLoggingResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketLoggingRequestPrivate
 * \brief The GetBucketLoggingRequestPrivate class provides private implementation for GetBucketLoggingRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 * Constructs a GetBucketLoggingRequestPrivate object for S3 \a action,
 * with public implementation \a q.
 */
GetBucketLoggingRequestPrivate::GetBucketLoggingRequestPrivate(
    const S3Request::Action action, GetBucketLoggingRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLoggingRequest
 * class' copy constructor.
 */
GetBucketLoggingRequestPrivate::GetBucketLoggingRequestPrivate(
    const GetBucketLoggingRequestPrivate &other, GetBucketLoggingRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
