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

#include "getbucketnotificationrequest.h"
#include "getbucketnotificationrequest_p.h"
#include "getbucketnotificationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/*!
 * \class QtAws::S3::GetBucketNotificationRequest
 * \brief The GetBucketNotificationRequest class provides an interface for S3 GetBucketNotification requests.
 *
 * \inmodule QtAwsS3
 *
 *
 * \sa S3Client::getBucketNotification
 */

/*!
 * Constructs a copy of \a other.
 */
GetBucketNotificationRequest::GetBucketNotificationRequest(const GetBucketNotificationRequest &other)
    : S3Request(new GetBucketNotificationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBucketNotificationRequest object.
 */
GetBucketNotificationRequest::GetBucketNotificationRequest()
    : S3Request(new GetBucketNotificationRequestPrivate(S3Request::GetBucketNotificationAction, this))
{

}

/*!
 * \reimp
 */
bool GetBucketNotificationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBucketNotificationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBucketNotificationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketNotificationResponse(*this, reply);
}

/*!
 * \class QtAws::S3::GetBucketNotificationRequestPrivate
 * \brief The GetBucketNotificationRequestPrivate class provides private implementation for GetBucketNotificationRequest.
 * \internal
 *
 * \inmodule QtAwsS3
 */

/*!
 *
 * Constructs a GetBucketNotificationRequestPrivate object for S3 \a action with,
 * public implementation \a q.
 */
GetBucketNotificationRequestPrivate::GetBucketNotificationRequestPrivate(
    const S3Request::Action action, GetBucketNotificationRequest * const q)
    : S3RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBucketNotificationRequest
 * class' copy constructor.
 */
GetBucketNotificationRequestPrivate::GetBucketNotificationRequestPrivate(
    const GetBucketNotificationRequestPrivate &other, GetBucketNotificationRequest * const q)
    : S3RequestPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
