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

#include "listaccesskeysrequest.h"
#include "listaccesskeysrequest_p.h"
#include "listaccesskeysresponse.h"
#include "iamrequest_p.h"

namespace AWS {
namespace IAM {

/**
 * @class  ListAccessKeysRequest
 *
 * @brief  Implements IAM ListAccessKeys requests.
 *
 * @see    IAMClient::listAccessKeys
 */

/**
 * @brief  Constructs a new ListAccessKeysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAccessKeysRequest::ListAccessKeysRequest(const ListAccessKeysRequest &other)
    : IAMRequest(new ListAccessKeysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAccessKeysRequest object.
 */
ListAccessKeysRequest::ListAccessKeysRequest()
    : IAMRequest(new ListAccessKeysRequestPrivate(IAMRequest::ListAccessKeysAction, this))
{

}

bool ListAccessKeysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAccessKeysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAccessKeysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  IAMClient::send
 */
AwsAbstractResponse * ListAccessKeysRequest::response(QNetworkReply * const reply) const
{
    return new ListAccessKeysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAccessKeysRequestPrivate
 *
 * @brief  Private implementation for ListAccessKeysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAccessKeysRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public ListAccessKeysRequest instance.
 */
ListAccessKeysRequestPrivate::ListAccessKeysRequestPrivate(
    const IAMRequest::Action action, ListAccessKeysRequest * const q)
    : ListAccessKeysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAccessKeysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAccessKeysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAccessKeysRequest instance.
 */
ListAccessKeysRequestPrivate::ListAccessKeysRequestPrivate(
    const ListAccessKeysRequestPrivate &other, ListAccessKeysRequest * const q)
    : ListAccessKeysPrivate(other, q)
{

}

} // namespace IAM
} // namespace AWS
