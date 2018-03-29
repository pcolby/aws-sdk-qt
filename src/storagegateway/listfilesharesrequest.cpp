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

#include "listfilesharesrequest.h"
#include "listfilesharesrequest_p.h"
#include "listfilesharesresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  ListFileSharesRequest
 *
 * @brief  Implements StorageGateway ListFileShares requests.
 *
 * @see    StorageGatewayClient::listFileShares
 */

/**
 * @brief  Constructs a new ListFileSharesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFileSharesRequest::ListFileSharesRequest(const ListFileSharesRequest &other)
    : StorageGatewayRequest(new ListFileSharesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFileSharesRequest object.
 */
ListFileSharesRequest::ListFileSharesRequest()
    : StorageGatewayRequest(new ListFileSharesRequestPrivate(StorageGatewayRequest::ListFileSharesAction, this))
{

}

bool ListFileSharesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFileSharesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFileSharesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * ListFileSharesRequest::response(QNetworkReply * const reply) const
{
    return new ListFileSharesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFileSharesRequestPrivate
 *
 * @brief  Private implementation for ListFileSharesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFileSharesRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ListFileSharesRequest instance.
 */
ListFileSharesRequestPrivate::ListFileSharesRequestPrivate(
    const StorageGatewayRequest::Action action, ListFileSharesRequest * const q)
    : ListFileSharesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFileSharesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFileSharesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFileSharesRequest instance.
 */
ListFileSharesRequestPrivate::ListFileSharesRequestPrivate(
    const ListFileSharesRequestPrivate &other, ListFileSharesRequest * const q)
    : ListFileSharesPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
