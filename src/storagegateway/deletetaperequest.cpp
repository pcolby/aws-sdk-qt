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

#include "deletetaperequest.h"
#include "deletetaperequest_p.h"
#include "deletetaperesponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DeleteTapeRequest
 *
 * @brief  Implements StorageGateway DeleteTape requests.
 *
 * @see    StorageGatewayClient::deleteTape
 */

/**
 * @brief  Constructs a new DeleteTapeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteTapeRequest::DeleteTapeRequest(const DeleteTapeRequest &other)
    : StorageGatewayRequest(new DeleteTapeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteTapeRequest object.
 */
DeleteTapeRequest::DeleteTapeRequest()
    : StorageGatewayRequest(new DeleteTapeRequestPrivate(StorageGatewayRequest::DeleteTapeAction, this))
{

}

bool DeleteTapeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteTapeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteTapeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DeleteTapeRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTapeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteTapeRequestPrivate
 *
 * @brief  Private implementation for DeleteTapeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTapeRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DeleteTapeRequest instance.
 */
DeleteTapeRequestPrivate::DeleteTapeRequestPrivate(
    const StorageGatewayRequest::Action action, DeleteTapeRequest * const q)
    : DeleteTapePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTapeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteTapeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteTapeRequest instance.
 */
DeleteTapeRequestPrivate::DeleteTapeRequestPrivate(
    const DeleteTapeRequestPrivate &other, DeleteTapeRequest * const q)
    : DeleteTapePrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
