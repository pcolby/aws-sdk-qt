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

#include "listpublickeysrequest.h"
#include "listpublickeysrequest_p.h"
#include "listpublickeysresponse.h"
#include "cloudtrailrequest_p.h"

namespace AWS {
namespace CloudTrail {

/**
 * @class  ListPublicKeysRequest
 *
 * @brief  Implements CloudTrail ListPublicKeys requests.
 *
 * @see    CloudTrailClient::listPublicKeys
 */

/**
 * @brief  Constructs a new ListPublicKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPublicKeysRequest::ListPublicKeysRequest(const ListPublicKeysRequest &other)
    : CloudTrailRequest(new ListPublicKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPublicKeysRequest object.
 */
ListPublicKeysRequest::ListPublicKeysRequest()
    : CloudTrailRequest(new ListPublicKeysRequestPrivate(CloudTrailRequest::ListPublicKeysAction, this))
{

}

bool ListPublicKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPublicKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPublicKeysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
AwsAbstractResponse * ListPublicKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListPublicKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPublicKeysRequestPrivate
 *
 * @brief  Private implementation for ListPublicKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPublicKeysRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public ListPublicKeysRequest instance.
 */
ListPublicKeysRequestPrivate::ListPublicKeysRequestPrivate(
    const CloudTrailRequest::Action action, ListPublicKeysRequest * const q)
    : ListPublicKeysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPublicKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPublicKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPublicKeysRequest instance.
 */
ListPublicKeysRequestPrivate::ListPublicKeysRequestPrivate(
    const ListPublicKeysRequestPrivate &other, ListPublicKeysRequest * const q)
    : ListPublicKeysPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace AWS
