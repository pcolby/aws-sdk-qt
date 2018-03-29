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

#include "listattacksrequest.h"
#include "listattacksrequest_p.h"
#include "listattacksresponse.h"
#include "shieldrequest_p.h"

namespace AWS {
namespace Shield {

/**
 * @class  ListAttacksRequest
 *
 * @brief  Implements Shield ListAttacks requests.
 *
 * @see    ShieldClient::listAttacks
 */

/**
 * @brief  Constructs a new ListAttacksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAttacksRequest::ListAttacksRequest(const ListAttacksRequest &other)
    : ShieldRequest(new ListAttacksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAttacksRequest object.
 */
ListAttacksRequest::ListAttacksRequest()
    : ShieldRequest(new ListAttacksRequestPrivate(ShieldRequest::ListAttacksAction, this))
{

}

bool ListAttacksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAttacksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAttacksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ShieldClient::send
 */
AwsAbstractResponse * ListAttacksRequest::response(QNetworkReply * const reply) const
{
    return new ListAttacksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAttacksRequestPrivate
 *
 * @brief  Private implementation for ListAttacksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAttacksRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public ListAttacksRequest instance.
 */
ListAttacksRequestPrivate::ListAttacksRequestPrivate(
    const ShieldRequest::Action action, ListAttacksRequest * const q)
    : ListAttacksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAttacksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAttacksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAttacksRequest instance.
 */
ListAttacksRequestPrivate::ListAttacksRequestPrivate(
    const ListAttacksRequestPrivate &other, ListAttacksRequest * const q)
    : ListAttacksPrivate(other, q)
{

}

} // namespace Shield
} // namespace AWS
