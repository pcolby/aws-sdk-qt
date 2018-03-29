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

#include "listinventoryentriesrequest.h"
#include "listinventoryentriesrequest_p.h"
#include "listinventoryentriesresponse.h"
#include "ssmrequest_p.h"

namespace QtAws {
namespace SSM {

/**
 * @class  ListInventoryEntriesRequest
 *
 * @brief  Implements SSM ListInventoryEntries requests.
 *
 * @see    SSMClient::listInventoryEntries
 */

/**
 * @brief  Constructs a new ListInventoryEntriesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListInventoryEntriesRequest::ListInventoryEntriesRequest(const ListInventoryEntriesRequest &other)
    : SSMRequest(new ListInventoryEntriesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListInventoryEntriesRequest object.
 */
ListInventoryEntriesRequest::ListInventoryEntriesRequest()
    : SSMRequest(new ListInventoryEntriesRequestPrivate(SSMRequest::ListInventoryEntriesAction, this))
{

}

bool ListInventoryEntriesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListInventoryEntriesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListInventoryEntriesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SSMClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInventoryEntriesRequest::response(QNetworkReply * const reply) const
{
    return new ListInventoryEntriesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListInventoryEntriesRequestPrivate
 *
 * @brief  Private implementation for ListInventoryEntriesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListInventoryEntriesRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public ListInventoryEntriesRequest instance.
 */
ListInventoryEntriesRequestPrivate::ListInventoryEntriesRequestPrivate(
    const SSMRequest::Action action, ListInventoryEntriesRequest * const q)
    : SSMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListInventoryEntriesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListInventoryEntriesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListInventoryEntriesRequest instance.
 */
ListInventoryEntriesRequestPrivate::ListInventoryEntriesRequestPrivate(
    const ListInventoryEntriesRequestPrivate &other, ListInventoryEntriesRequest * const q)
    : SSMRequestPrivate(other, q)
{

}

} // namespace SSM
} // namespace QtAws
