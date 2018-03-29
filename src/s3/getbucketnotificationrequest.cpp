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

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketNotificationRequest
 *
 * @brief  Implements S3 GetBucketNotification requests.
 *
 * @see    S3Client::getBucketNotification
 */

/**
 * @brief  Constructs a new GetBucketNotificationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketNotificationRequest::GetBucketNotificationRequest(const GetBucketNotificationRequest &other)
    : S3Request(new GetBucketNotificationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketNotificationRequest object.
 */
GetBucketNotificationRequest::GetBucketNotificationRequest()
    : S3Request(new GetBucketNotificationRequestPrivate(S3Request::GetBucketNotificationAction, this))
{

}

bool GetBucketNotificationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketNotificationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketNotificationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketNotificationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketNotificationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketNotificationRequestPrivate
 *
 * @brief  Private implementation for GetBucketNotificationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketNotificationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketNotificationRequest instance.
 */
GetBucketNotificationRequestPrivate::GetBucketNotificationRequestPrivate(
    const S3Request::Action action, GetBucketNotificationRequest * const q)
    : GetBucketNotificationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketNotificationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketNotificationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketNotificationRequest instance.
 */
GetBucketNotificationRequestPrivate::GetBucketNotificationRequestPrivate(
    const GetBucketNotificationRequestPrivate &other, GetBucketNotificationRequest * const q)
    : GetBucketNotificationPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
