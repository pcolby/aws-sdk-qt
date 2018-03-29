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

#include "listlocaldisksrequest.h"
#include "listlocaldisksrequest_p.h"
#include "listlocaldisksresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  ListLocalDisksRequest
 *
 * @brief  Implements StorageGateway ListLocalDisks requests.
 *
 * @see    StorageGatewayClient::listLocalDisks
 */

/**
 * @brief  Constructs a new ListLocalDisksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListLocalDisksRequest::ListLocalDisksRequest(const ListLocalDisksRequest &other)
    : StorageGatewayRequest(new ListLocalDisksRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListLocalDisksRequest object.
 */
ListLocalDisksRequest::ListLocalDisksRequest()
    : StorageGatewayRequest(new ListLocalDisksRequestPrivate(StorageGatewayRequest::ListLocalDisksAction, this))
{

}

bool ListLocalDisksRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListLocalDisksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListLocalDisksResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * ListLocalDisksRequest::response(QNetworkReply * const reply) const
{
    return new ListLocalDisksResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListLocalDisksRequestPrivate
 *
 * @brief  Private implementation for ListLocalDisksRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListLocalDisksRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ListLocalDisksRequest instance.
 */
ListLocalDisksRequestPrivate::ListLocalDisksRequestPrivate(
    const StorageGatewayRequest::Action action, ListLocalDisksRequest * const q)
    : ListLocalDisksPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListLocalDisksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListLocalDisksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListLocalDisksRequest instance.
 */
ListLocalDisksRequestPrivate::ListLocalDisksRequestPrivate(
    const ListLocalDisksRequestPrivate &other, ListLocalDisksRequest * const q)
    : ListLocalDisksPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
