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

#include "listprotectionsrequest.h"
#include "listprotectionsrequest_p.h"
#include "listprotectionsresponse.h"
#include "shieldrequest_p.h"

namespace AWS {
namespace Shield {

/**
 * @class  ListProtectionsRequest
 *
 * @brief  Implements Shield ListProtections requests.
 *
 * @see    ShieldClient::listProtections
 */

/**
 * @brief  Constructs a new ListProtectionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListProtectionsRequest::ListProtectionsRequest(const ListProtectionsRequest &other)
    : ShieldRequest(new ListProtectionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListProtectionsRequest object.
 */
ListProtectionsRequest::ListProtectionsRequest()
    : ShieldRequest(new ListProtectionsRequestPrivate(ShieldRequest::ListProtectionsAction, this))
{

}

bool ListProtectionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListProtectionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListProtectionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ShieldClient::send
 */
AwsAbstractResponse * ListProtectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListProtectionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListProtectionsRequestPrivate
 *
 * @brief  Private implementation for ListProtectionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProtectionsRequestPrivate object.
 *
 * @param  action  Shield action being performed.
 * @param  q       Pointer to this object's public ListProtectionsRequest instance.
 */
ListProtectionsRequestPrivate::ListProtectionsRequestPrivate(
    const ShieldRequest::Action action, ListProtectionsRequest * const q)
    : ListProtectionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListProtectionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListProtectionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListProtectionsRequest instance.
 */
ListProtectionsRequestPrivate::ListProtectionsRequestPrivate(
    const ListProtectionsRequestPrivate &other, ListProtectionsRequest * const q)
    : ListProtectionsPrivate(other, q)
{

}

} // namespace Shield
} // namespace AWS
