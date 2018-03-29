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

#include "putbucketanalyticsconfigurationrequest.h"
#include "putbucketanalyticsconfigurationrequest_p.h"
#include "putbucketanalyticsconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketAnalyticsConfigurationRequest
 *
 * @brief  Implements S3 PutBucketAnalyticsConfiguration requests.
 *
 * @see    S3Client::putBucketAnalyticsConfiguration
 */

/**
 * @brief  Constructs a new PutBucketAnalyticsConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketAnalyticsConfigurationRequest::PutBucketAnalyticsConfigurationRequest(const PutBucketAnalyticsConfigurationRequest &other)
    : S3Request(new PutBucketAnalyticsConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketAnalyticsConfigurationRequest object.
 */
PutBucketAnalyticsConfigurationRequest::PutBucketAnalyticsConfigurationRequest()
    : S3Request(new PutBucketAnalyticsConfigurationRequestPrivate(S3Request::PutBucketAnalyticsConfigurationAction, this))
{

}

bool PutBucketAnalyticsConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketAnalyticsConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketAnalyticsConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketAnalyticsConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketAnalyticsConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketAnalyticsConfigurationRequestPrivate
 *
 * @brief  Private implementation for PutBucketAnalyticsConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketAnalyticsConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketAnalyticsConfigurationRequest instance.
 */
PutBucketAnalyticsConfigurationRequestPrivate::PutBucketAnalyticsConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketAnalyticsConfigurationRequest * const q)
    : PutBucketAnalyticsConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketAnalyticsConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketAnalyticsConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketAnalyticsConfigurationRequest instance.
 */
PutBucketAnalyticsConfigurationRequestPrivate::PutBucketAnalyticsConfigurationRequestPrivate(
    const PutBucketAnalyticsConfigurationRequestPrivate &other, PutBucketAnalyticsConfigurationRequest * const q)
    : PutBucketAnalyticsConfigurationPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
