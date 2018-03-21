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

#include "listhandshakesforaccountrequest.h"
#include "listhandshakesforaccountrequest_p.h"
#include "listhandshakesforaccountresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  ListHandshakesForAccountRequest
 *
 * @brief  Implements Organizations ListHandshakesForAccount requests.
 *
 * @see    OrganizationsClient::listHandshakesForAccount
 */

/**
 * @brief  Constructs a new ListHandshakesForAccountRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHandshakesForAccountRequest::ListHandshakesForAccountRequest(const ListHandshakesForAccountRequest &other)
    : OrganizationsRequest(new ListHandshakesForAccountRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListHandshakesForAccountRequest object.
 */
ListHandshakesForAccountRequest::ListHandshakesForAccountRequest()
    : OrganizationsRequest(new ListHandshakesForAccountRequestPrivate(OrganizationsRequest::ListHandshakesForAccountAction, this))
{

}

bool ListHandshakesForAccountRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListHandshakesForAccountResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHandshakesForAccountResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListHandshakesForAccountRequest::response(QNetworkReply * const reply) const
{
    return new ListHandshakesForAccountResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListHandshakesForAccountRequestPrivate
 *
 * @brief  Private implementation for ListHandshakesForAccountRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListHandshakesForAccountRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListHandshakesForAccountRequest instance.
 */
ListHandshakesForAccountRequestPrivate::ListHandshakesForAccountRequestPrivate(
    const OrganizationsRequest::Action action, ListHandshakesForAccountRequest * const q)
    : ListHandshakesForAccountPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListHandshakesForAccountRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHandshakesForAccountRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHandshakesForAccountRequest instance.
 */
ListHandshakesForAccountRequestPrivate::ListHandshakesForAccountRequestPrivate(
    const ListHandshakesForAccountRequestPrivate &other, ListHandshakesForAccountRequest * const q)
    : ListHandshakesForAccountPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
