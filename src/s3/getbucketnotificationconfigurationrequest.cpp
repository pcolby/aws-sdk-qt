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

#include "getbucketnotificationconfigurationrequest.h"
#include "getbucketnotificationconfigurationrequest_p.h"
#include "getbucketnotificationconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketNotificationConfigurationRequest
 *
 * @brief  Implements S3 GetBucketNotificationConfiguration requests.
 *
 * @see    S3Client::getBucketNotificationConfiguration
 */

/**
 * @brief  Constructs a new GetBucketNotificationConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketNotificationConfigurationRequest::GetBucketNotificationConfigurationRequest(const GetBucketNotificationConfigurationRequest &other)
    : S3Request(new GetBucketNotificationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketNotificationConfigurationRequest object.
 */
GetBucketNotificationConfigurationRequest::GetBucketNotificationConfigurationRequest()
    : S3Request(new GetBucketNotificationConfigurationRequestPrivate(S3Request::GetBucketNotificationConfigurationAction, this))
{

}

bool GetBucketNotificationConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketNotificationConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketNotificationConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketNotificationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketNotificationConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketNotificationConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetBucketNotificationConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketNotificationConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketNotificationConfigurationRequest instance.
 */
GetBucketNotificationConfigurationRequestPrivate::GetBucketNotificationConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketNotificationConfigurationRequest * const q)
    : GetBucketNotificationConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketNotificationConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketNotificationConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketNotificationConfigurationRequest instance.
 */
GetBucketNotificationConfigurationRequestPrivate::GetBucketNotificationConfigurationRequestPrivate(
    const GetBucketNotificationConfigurationRequestPrivate &other, GetBucketNotificationConfigurationRequest * const q)
    : GetBucketNotificationConfigurationPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
