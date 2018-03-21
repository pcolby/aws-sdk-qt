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

#include "listaccountsrequest.h"
#include "listaccountsrequest_p.h"
#include "listaccountsresponse.h"
#include "organizationsrequest_p.h"

namespace AWS {
namespace Organizations {

/**
 * @class  ListAccountsRequest
 *
 * @brief  Implements Organizations ListAccounts requests.
 *
 * @see    OrganizationsClient::listAccounts
 */

/**
 * @brief  Constructs a new ListAccountsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAccountsRequest::ListAccountsRequest(const ListAccountsRequest &other)
    : OrganizationsRequest(new ListAccountsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAccountsRequest object.
 */
ListAccountsRequest::ListAccountsRequest()
    : OrganizationsRequest(new ListAccountsRequestPrivate(OrganizationsRequest::ListAccountsAction, this))
{

}

bool ListAccountsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAccountsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAccountsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  OrganizationsClient::send
 */
AwsAbstractResponse * ListAccountsRequest::response(QNetworkReply * const reply) const
{
    return new ListAccountsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAccountsRequestPrivate
 *
 * @brief  Private implementation for ListAccountsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountsRequestPrivate object.
 *
 * @param  action  Organizations action being performed.
 * @param  q       Pointer to this object's public ListAccountsRequest instance.
 */
ListAccountsRequestPrivate::ListAccountsRequestPrivate(
    const OrganizationsRequest::Action action, ListAccountsRequest * const q)
    : ListAccountsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAccountsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAccountsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAccountsRequest instance.
 */
ListAccountsRequestPrivate::ListAccountsRequestPrivate(
    const ListAccountsRequestPrivate &other, ListAccountsRequest * const q)
    : ListAccountsPrivate(other, q)
{

}

} // namespace Organizations
} // namespace AWS
