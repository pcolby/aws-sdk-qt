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

#include "putbucketinventoryconfigurationrequest.h"
#include "putbucketinventoryconfigurationrequest_p.h"
#include "putbucketinventoryconfigurationresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketInventoryConfigurationRequest
 *
 * @brief  Implements S3 PutBucketInventoryConfiguration requests.
 *
 * @see    S3Client::putBucketInventoryConfiguration
 */

/**
 * @brief  Constructs a new PutBucketInventoryConfigurationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutBucketInventoryConfigurationRequest::PutBucketInventoryConfigurationRequest(const PutBucketInventoryConfigurationRequest &other)
    : S3Request(new PutBucketInventoryConfigurationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutBucketInventoryConfigurationRequest object.
 */
PutBucketInventoryConfigurationRequest::PutBucketInventoryConfigurationRequest()
    : S3Request(new PutBucketInventoryConfigurationRequestPrivate(S3Request::PutBucketInventoryConfigurationAction, this))
{

}

bool PutBucketInventoryConfigurationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutBucketInventoryConfigurationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutBucketInventoryConfigurationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * PutBucketInventoryConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new PutBucketInventoryConfigurationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutBucketInventoryConfigurationRequestPrivate
 *
 * @brief  Private implementation for PutBucketInventoryConfigurationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketInventoryConfigurationRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public PutBucketInventoryConfigurationRequest instance.
 */
PutBucketInventoryConfigurationRequestPrivate::PutBucketInventoryConfigurationRequestPrivate(
    const S3Request::Action action, PutBucketInventoryConfigurationRequest * const q)
    : PutBucketInventoryConfigurationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketInventoryConfigurationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutBucketInventoryConfigurationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutBucketInventoryConfigurationRequest instance.
 */
PutBucketInventoryConfigurationRequestPrivate::PutBucketInventoryConfigurationRequestPrivate(
    const PutBucketInventoryConfigurationRequestPrivate &other, PutBucketInventoryConfigurationRequest * const q)
    : PutBucketInventoryConfigurationPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
