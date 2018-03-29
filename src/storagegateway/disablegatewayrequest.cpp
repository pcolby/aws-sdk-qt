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

#include "disablegatewayrequest.h"
#include "disablegatewayrequest_p.h"
#include "disablegatewayresponse.h"
#include "storagegatewayrequest_p.h"

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DisableGatewayRequest
 *
 * @brief  Implements StorageGateway DisableGateway requests.
 *
 * @see    StorageGatewayClient::disableGateway
 */

/**
 * @brief  Constructs a new DisableGatewayRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisableGatewayRequest::DisableGatewayRequest(const DisableGatewayRequest &other)
    : StorageGatewayRequest(new DisableGatewayRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisableGatewayRequest object.
 */
DisableGatewayRequest::DisableGatewayRequest()
    : StorageGatewayRequest(new DisableGatewayRequestPrivate(StorageGatewayRequest::DisableGatewayAction, this))
{

}

bool DisableGatewayRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisableGatewayResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisableGatewayResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableGatewayRequest::response(QNetworkReply * const reply) const
{
    return new DisableGatewayResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisableGatewayRequestPrivate
 *
 * @brief  Private implementation for DisableGatewayRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisableGatewayRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public DisableGatewayRequest instance.
 */
DisableGatewayRequestPrivate::DisableGatewayRequestPrivate(
    const StorageGatewayRequest::Action action, DisableGatewayRequest * const q)
    : StorageGatewayRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisableGatewayRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisableGatewayRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisableGatewayRequest instance.
 */
DisableGatewayRequestPrivate::DisableGatewayRequestPrivate(
    const DisableGatewayRequestPrivate &other, DisableGatewayRequest * const q)
    : StorageGatewayRequestPrivate(other, q)
{

}

} // namespace StorageGateway
} // namespace QtAws
