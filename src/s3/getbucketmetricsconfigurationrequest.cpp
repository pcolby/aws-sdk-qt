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

#include "getbucketmetricsconfigurationrequest.h"
#include "getbucketmetricsconfigurationrequest_p.h"
#include "getbucketmetricsconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketMetricsConfigurationRequest
 *
 * @brief  Implements S3 GetBucketMetricsConfiguration requests.
 *
 * @see    S3Client::getBucketMetricsConfiguration
 */

/**
 * @brief  Constructs a new GetBucketMetricsConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketMetricsConfigurationResponse::GetBucketMetricsConfigurationResponse(

/**
 * @brief  Constructs a new GetBucketMetricsConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketMetricsConfigurationRequest::GetBucketMetricsConfigurationRequest(const GetBucketMetricsConfigurationRequest &other)
    : S3Request(new GetBucketMetricsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketMetricsConfigurationRequest object.
 */
GetBucketMetricsConfigurationRequest::GetBucketMetricsConfigurationRequest()
    : S3Request(new GetBucketMetricsConfigurationRequestPrivate(S3Request::GetBucketMetricsConfigurationAction, this))
{

}

bool GetBucketMetricsConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketMetricsConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketMetricsConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketMetricsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketMetricsConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketMetricsConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetBucketMetricsConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketMetricsConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketMetricsConfigurationRequest instance.
 */
GetBucketMetricsConfigurationRequestPrivate::GetBucketMetricsConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketMetricsConfigurationRequest * const q)
    : GetBucketMetricsConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketMetricsConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketMetricsConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketMetricsConfigurationRequest instance.
 */
GetBucketMetricsConfigurationRequestPrivate::GetBucketMetricsConfigurationRequestPrivate(
    const GetBucketMetricsConfigurationRequestPrivate &other, GetBucketMetricsConfigurationRequest * const q)
    : GetBucketMetricsConfigurationPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
