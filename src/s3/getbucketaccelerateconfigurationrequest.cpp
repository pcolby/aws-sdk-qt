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

#include "getbucketaccelerateconfigurationrequest.h"
#include "getbucketaccelerateconfigurationrequest_p.h"
#include "getbucketaccelerateconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketAccelerateConfigurationRequest
 *
 * @brief  Implements S3 GetBucketAccelerateConfiguration requests.
 *
 * @see    S3Client::getBucketAccelerateConfiguration
 */

/**
 * @brief  Constructs a new GetBucketAccelerateConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketAccelerateConfigurationRequest::GetBucketAccelerateConfigurationRequest(const GetBucketAccelerateConfigurationRequest &other)
    : S3Request(new GetBucketAccelerateConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketAccelerateConfigurationRequest object.
 */
GetBucketAccelerateConfigurationRequest::GetBucketAccelerateConfigurationRequest()
    : S3Request(new GetBucketAccelerateConfigurationRequestPrivate(S3Request::GetBucketAccelerateConfigurationAction, this))
{

}

bool GetBucketAccelerateConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketAccelerateConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketAccelerateConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketAccelerateConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketAccelerateConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketAccelerateConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetBucketAccelerateConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAccelerateConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketAccelerateConfigurationRequest instance.
 */
GetBucketAccelerateConfigurationRequestPrivate::GetBucketAccelerateConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketAccelerateConfigurationRequest * const q)
    : GetBucketAccelerateConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAccelerateConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketAccelerateConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketAccelerateConfigurationRequest instance.
 */
GetBucketAccelerateConfigurationRequestPrivate::GetBucketAccelerateConfigurationRequestPrivate(
    const GetBucketAccelerateConfigurationRequestPrivate &other, GetBucketAccelerateConfigurationRequest * const q)
    : GetBucketAccelerateConfigurationPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
