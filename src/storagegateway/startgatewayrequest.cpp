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

#include "startgatewayrequest.h"
#include "startgatewayrequest_p.h"
#include "startgatewayresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  StartGatewayRequest
 *
 * @brief  Implements StorageGateway StartGateway requests.
 *
 * @see    StorageGatewayClient::startGateway
 */

/**
 * @brief  Constructs a new StartGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartGatewayRequest::StartGatewayRequest(const StartGatewayRequest &other)
    : StorageGatewayRequest(new StartGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartGatewayRequest object.
 */
StartGatewayRequest::StartGatewayRequest()
    : StorageGatewayRequest(new StartGatewayRequestPrivate(StorageGatewayRequest::StartGatewayAction, this))
{

}

bool StartGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartGatewayResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * StartGatewayRequest::response(QNetworkReply * const reply) const
{
    return new StartGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartGatewayRequestPrivate
 *
 * @brief  Private implementation for StartGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartGatewayRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public StartGatewayRequest instance.
 */
StartGatewayRequestPrivate::StartGatewayRequestPrivate(
    const StorageGatewayRequest::Action action, StartGatewayRequest * const q)
    : StartGatewayPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartGatewayRequest instance.
 */
StartGatewayRequestPrivate::StartGatewayRequestPrivate(
    const StartGatewayRequestPrivate &other, StartGatewayRequest * const q)
    : StartGatewayPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace AWS
