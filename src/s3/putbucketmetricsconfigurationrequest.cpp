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

#include "putbucketmetricsconfigurationrequest.h"
#include "putbucketmetricsconfigurationrequest_p.h"
#include "putbucketmetricsconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketMetricsConfigurationRequest
 *
 * @brief  Implements S3 PutBucketMetricsConfiguration requests.
 *
 * @see    S3Client::putBucketMetricsConfiguration
 */

/**
 * @brief  Constructs a new PutBucketMetricsConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketMetricsConfigurationRequest::PutBucketMetricsConfigurationRequest(const PutBucketMetricsConfigurationRequest &other)
    : S3Request(new PutBucketMetricsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketMetricsConfigurationRequest object.
 */
PutBucketMetricsConfigurationRequest::PutBucketMetricsConfigurationRequest()
    : S3Request(new PutBucketMetricsConfigurationRequestPrivate(S3Request::PutBucketMetricsConfigurationAction, this))
{

}

bool PutBucketMetricsConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketMetricsConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketMetricsConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketMetricsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketMetricsConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketMetricsConfigurationRequestPrivate
 *
 * @brief  Private implementation for PutBucketMetricsConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketMetricsConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketMetricsConfigurationRequest instance.
 */
PutBucketMetricsConfigurationRequestPrivate::PutBucketMetricsConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketMetricsConfigurationRequest * const q)
    : PutBucketMetricsConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketMetricsConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketMetricsConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketMetricsConfigurationRequest instance.
 */
PutBucketMetricsConfigurationRequestPrivate::PutBucketMetricsConfigurationRequestPrivate(
    const PutBucketMetricsConfigurationRequestPrivate &other, PutBucketMetricsConfigurationRequest * const q)
    : PutBucketMetricsConfigurationPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
