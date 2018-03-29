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

#include "activategatewayrequest.h"
#include "activategatewayrequest_p.h"
#include "activategatewayresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  ActivateGatewayRequest
 *
 * @brief  Implements StorageGateway ActivateGateway requests.
 *
 * @see    StorageGatewayClient::activateGateway
 */

/**
 * @brief  Constructs a new ActivateGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ActivateGatewayRequest::ActivateGatewayRequest(const ActivateGatewayRequest &other)
    : StorageGatewayRequest(new ActivateGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ActivateGatewayRequest object.
 */
ActivateGatewayRequest::ActivateGatewayRequest()
    : StorageGatewayRequest(new ActivateGatewayRequestPrivate(StorageGatewayRequest::ActivateGatewayAction, this))
{

}

bool ActivateGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ActivateGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ActivateGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * ActivateGatewayRequest::response(QNetworkReply * const reply) const
{
    return new ActivateGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ActivateGatewayRequestPrivate
 *
 * @brief  Private implementation for ActivateGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ActivateGatewayRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public ActivateGatewayRequest instance.
 */
ActivateGatewayRequestPrivate::ActivateGatewayRequestPrivate(
    const StorageGatewayRequest::Action action, ActivateGatewayRequest * const q)
    : ActivateGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ActivateGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ActivateGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ActivateGatewayRequest instance.
 */
ActivateGatewayRequestPrivate::ActivateGatewayRequestPrivate(
    const ActivateGatewayRequestPrivate &other, ActivateGatewayRequest * const q)
    : ActivateGatewayPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
