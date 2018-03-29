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

#include "getbucketanalyticsconfigurationrequest.h"
#include "getbucketanalyticsconfigurationrequest_p.h"
#include "getbucketanalyticsconfigurationresponse.h"
#include "s3request_p.h"

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketAnalyticsConfigurationRequest
 *
 * @brief  Implements S3 GetBucketAnalyticsConfiguration requests.
 *
 * @see    S3Client::getBucketAnalyticsConfiguration
 */

/**
 * @brief  Constructs a new GetBucketAnalyticsConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBucketAnalyticsConfigurationRequest::GetBucketAnalyticsConfigurationRequest(const GetBucketAnalyticsConfigurationRequest &other)
    : S3Request(new GetBucketAnalyticsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBucketAnalyticsConfigurationRequest object.
 */
GetBucketAnalyticsConfigurationRequest::GetBucketAnalyticsConfigurationRequest()
    : S3Request(new GetBucketAnalyticsConfigurationRequestPrivate(S3Request::GetBucketAnalyticsConfigurationAction, this))
{

}

bool GetBucketAnalyticsConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBucketAnalyticsConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBucketAnalyticsConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * GetBucketAnalyticsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetBucketAnalyticsConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBucketAnalyticsConfigurationRequestPrivate
 *
 * @brief  Private implementation for GetBucketAnalyticsConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAnalyticsConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public GetBucketAnalyticsConfigurationRequest instance.
 */
GetBucketAnalyticsConfigurationRequestPrivate::GetBucketAnalyticsConfigurationRequestPrivate(
    const S3Request::Action action, GetBucketAnalyticsConfigurationRequest * const q)
    : GetBucketAnalyticsConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAnalyticsConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBucketAnalyticsConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBucketAnalyticsConfigurationRequest instance.
 */
GetBucketAnalyticsConfigurationRequestPrivate::GetBucketAnalyticsConfigurationRequestPrivate(
    const GetBucketAnalyticsConfigurationRequestPrivate &other, GetBucketAnalyticsConfigurationRequest * const q)
    : GetBucketAnalyticsConfigurationPrivate(other, q)
{

}

} // namespace S3
} // namespace QtAws
