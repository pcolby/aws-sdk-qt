/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbucketlifecycleconfigurationrequest.h"
#include "getbucketlifecycleconfigurationrequest_p.h"
#include "getbucketlifecycleconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketLifecycleConfigurationRequest
 *
 * @brief  Implements S3 GetBucketLifecycleConfiguration requests.
 *
 * @see    S3Client::getBucketLifecycleConfiguration
 */

/**
 * @brief  Constructs a new GetBucketLifecycleConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketLifecycleConfigurationResponse::GetBucketLifecycleConfigurationResponse(

/**
 * @brief  Constructs a new GetBucketLifecycleConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketLifecycleConfigurationRequest::GetBucketLifecycleConfigurationRequest(const GetBucketLifecycleConfigurationRequest &other)
    : S3Request(new GetBucketLifecycleConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketLifecycleConfigurationRequest object.
 */
GetBucketLifecycleConfigurationRequest::GetBucketLifecycleConfigurationRequest()
    : S3Request(new GetBucketLifecycleConfigurationRequestPrivate(S3Request::GetBucketLifecycleConfigurationAction, this))
{

}

bool GetBucketLifecycleConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketLifecycleConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketLifecycleConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketLifecycleConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketLifecycleConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketLifecycleConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetBucketLifecycleConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketLifecycleConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketLifecycleConfigurationRequest instance.
 */
GetBucketLifecycleConfigurationRequestPrivate::GetBucketLifecycleConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketLifecycleConfigurationRequest * const q)
    : GetBucketLifecycleConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketLifecycleConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketLifecycleConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketLifecycleConfigurationRequest instance.
 */
GetBucketLifecycleConfigurationRequestPrivate::GetBucketLifecycleConfigurationRequestPrivate(
    const GetBucketLifecycleConfigurationRequestPrivate &other, GetBucketLifecycleConfigurationRequest * const q)
    : GetBucketLifecycleConfigurationPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
