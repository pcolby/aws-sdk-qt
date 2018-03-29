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

#include "listgatewaysrequest.h"
#include "listgatewaysrequest_p.h"
#include "listgatewaysresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ListGatewaysRequest
 *
 * @brief  Implements StorageGateway ListGateways requests.
 *
 * @see    StorageGatewayClient::listGateways
 */

/**
 * @brief  Constructs a new ListGatewaysRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGatewaysRequest::ListGatewaysRequest(const ListGatewaysRequest &other)
    : StorageGatewayRequest(new ListGatewaysRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGatewaysRequest object.
 */
ListGatewaysRequest::ListGatewaysRequest()
    : StorageGatewayRequest(new ListGatewaysRequestPrivate(StorageGatewayRequest::ListGatewaysAction, this))
{

}

bool ListGatewaysRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGatewaysResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGatewaysResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * ListGatewaysRequest::response(QNetworkReply * const reply) const
{
    return new ListGatewaysResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGatewaysRequestPrivate
 *
 * @brief  Private implementation for ListGatewaysRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGatewaysRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ListGatewaysRequest instance.
 */
ListGatewaysRequestPrivate::ListGatewaysRequestPrivate(
    const StorageGatewayRequest::Action action, ListGatewaysRequest * const q)
    : ListGatewaysPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGatewaysRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGatewaysRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGatewaysRequest instance.
 */
ListGatewaysRequestPrivate::ListGatewaysRequestPrivate(
    const ListGatewaysRequestPrivate &other, ListGatewaysRequest * const q)
    : ListGatewaysPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
