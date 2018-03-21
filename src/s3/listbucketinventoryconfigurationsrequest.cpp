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

#include "listbucketinventoryconfigurationsrequest.h"
#include "listbucketinventoryconfigurationsrequest_p.h"
#include "listbucketinventoryconfigurationsresponse.h"
#include "s3request_p.h"

namespace AWS {
namespace S3 {

/**
 * @class  ListBucketInventoryConfigurationsRequest
 *
 * @brief  Implements S3 ListBucketInventoryConfigurations requests.
 *
 * @see    S3Client::listBucketInventoryConfigurations
 */

/**
 * @brief  Constructs a new ListBucketInventoryConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBucketInventoryConfigurationsRequest::ListBucketInventoryConfigurationsRequest(const ListBucketInventoryConfigurationsRequest &other)
    : S3Request(new ListBucketInventoryConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBucketInventoryConfigurationsRequest object.
 */
ListBucketInventoryConfigurationsRequest::ListBucketInventoryConfigurationsRequest()
    : S3Request(new ListBucketInventoryConfigurationsRequestPrivate(S3Request::ListBucketInventoryConfigurationsAction, this))
{

}

bool ListBucketInventoryConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBucketInventoryConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBucketInventoryConfigurationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  S3Client::send
 */
AwsAbstractResponse * ListBucketInventoryConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListBucketInventoryConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBucketInventoryConfigurationsRequestPrivate
 *
 * @brief  Private implementation for ListBucketInventoryConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketInventoryConfigurationsRequestPrivate object.
 *
 * @param  action  S3 action being performed.
 * @param  q       Pointer to this object's public ListBucketInventoryConfigurationsRequest instance.
 */
ListBucketInventoryConfigurationsRequestPrivate::ListBucketInventoryConfigurationsRequestPrivate(
    const S3Request::Action action, ListBucketInventoryConfigurationsRequest * const q)
    : ListBucketInventoryConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBucketInventoryConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBucketInventoryConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBucketInventoryConfigurationsRequest instance.
 */
ListBucketInventoryConfigurationsRequestPrivate::ListBucketInventoryConfigurationsRequestPrivate(
    const ListBucketInventoryConfigurationsRequestPrivate &other, ListBucketInventoryConfigurationsRequest * const q)
    : ListBucketInventoryConfigurationsPrivate(other, q)
{

}

} // namespace S3
} // namespace AWS
