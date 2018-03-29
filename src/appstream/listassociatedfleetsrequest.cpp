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

#include "listassociatedfleetsrequest.h"
#include "listassociatedfleetsrequest_p.h"
#include "listassociatedfleetsresponse.h"
#include "appstreamrequest_p.h"

namespace AWS {
namespace AppStream {

/**
 * @class  ListAssociatedFleetsRequest
 *
 * @brief  Implements AppStream ListAssociatedFleets requests.
 *
 * @see    AppStreamClient::listAssociatedFleets
 */

/**
 * @brief  Constructs a new ListAssociatedFleetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAssociatedFleetsRequest::ListAssociatedFleetsRequest(const ListAssociatedFleetsRequest &other)
    : AppStreamRequest(new ListAssociatedFleetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAssociatedFleetsRequest object.
 */
ListAssociatedFleetsRequest::ListAssociatedFleetsRequest()
    : AppStreamRequest(new ListAssociatedFleetsRequestPrivate(AppStreamRequest::ListAssociatedFleetsAction, this))
{

}

bool ListAssociatedFleetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAssociatedFleetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAssociatedFleetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AppStreamClient::send
 */
AwsAbstractResponse * ListAssociatedFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListAssociatedFleetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAssociatedFleetsRequestPrivate
 *
 * @brief  Private implementation for ListAssociatedFleetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociatedFleetsRequestPrivate object.
 *
 * @param  action  AppStream action being performed.
 * @param  q       Pointer to this object's public ListAssociatedFleetsRequest instance.
 */
ListAssociatedFleetsRequestPrivate::ListAssociatedFleetsRequestPrivate(
    const AppStreamRequest::Action action, ListAssociatedFleetsRequest * const q)
    : ListAssociatedFleetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociatedFleetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAssociatedFleetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAssociatedFleetsRequest instance.
 */
ListAssociatedFleetsRequestPrivate::ListAssociatedFleetsRequestPrivate(
    const ListAssociatedFleetsRequestPrivate &other, ListAssociatedFleetsRequest * const q)
    : ListAssociatedFleetsPrivate(other, q)
{

}

} // namespace AppStream
} // namespace AWS
