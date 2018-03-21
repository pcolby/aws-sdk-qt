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

#include "deletegatewayrequest.h"
#include "deletegatewayrequest_p.h"
#include "deletegatewayresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  DeleteGatewayRequest
 *
 * @brief  Implements StorageGateway DeleteGateway requests.
 *
 * @see    StorageGatewayClient::deleteGateway
 */

/**
 * @brief  Constructs a new DeleteGatewayResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteGatewayResponse::DeleteGatewayResponse(

/**
 * @brief  Constructs a new DeleteGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteGatewayRequest::DeleteGatewayRequest(const DeleteGatewayRequest &other)
    : StorageGatewayRequest(new DeleteGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteGatewayRequest object.
 */
DeleteGatewayRequest::DeleteGatewayRequest()
    : StorageGatewayRequest(new DeleteGatewayRequestPrivate(StorageGatewayRequest::DeleteGatewayAction, this))
{

}

bool DeleteGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * DeleteGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DeleteGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteGatewayRequestPrivate
 *
 * @brief  Private implementation for DeleteGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGatewayRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DeleteGatewayRequest instance.
 */
DeleteGatewayRequestPrivate::DeleteGatewayRequestPrivate(
    const StorageGatewayRequest::Action action, DeleteGatewayRequest * const q)
    : DeleteGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteGatewayRequest instance.
 */
DeleteGatewayRequestPrivate::DeleteGatewayRequestPrivate(
    const DeleteGatewayRequestPrivate &other, DeleteGatewayRequest * const q)
    : DeleteGatewayPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
