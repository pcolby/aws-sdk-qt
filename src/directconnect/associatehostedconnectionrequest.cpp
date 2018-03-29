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

#include "associatehostedconnectionrequest.h"
#include "associatehostedconnectionrequest_p.h"
#include "associatehostedconnectionresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  AssociateHostedConnectionRequest
 *
 * @brief  Implements DirectConnect AssociateHostedConnection requests.
 *
 * @see    DirectConnectClient::associateHostedConnection
 */

/**
 * @brief  Constructs a new AssociateHostedConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateHostedConnectionRequest::AssociateHostedConnectionRequest(const AssociateHostedConnectionRequest &other)
    : DirectConnectRequest(new AssociateHostedConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateHostedConnectionRequest object.
 */
AssociateHostedConnectionRequest::AssociateHostedConnectionRequest()
    : DirectConnectRequest(new AssociateHostedConnectionRequestPrivate(DirectConnectRequest::AssociateHostedConnectionAction, this))
{

}

bool AssociateHostedConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateHostedConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateHostedConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * AssociateHostedConnectionRequest::response(QNetworkReply * const reply) const
{
    return new AssociateHostedConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateHostedConnectionRequestPrivate
 *
 * @brief  Private implementation for AssociateHostedConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateHostedConnectionRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public AssociateHostedConnectionRequest instance.
 */
AssociateHostedConnectionRequestPrivate::AssociateHostedConnectionRequestPrivate(
    const DirectConnectRequest::Action action, AssociateHostedConnectionRequest * const q)
    : AssociateHostedConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateHostedConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateHostedConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateHostedConnectionRequest instance.
 */
AssociateHostedConnectionRequestPrivate::AssociateHostedConnectionRequestPrivate(
    const AssociateHostedConnectionRequestPrivate &other, AssociateHostedConnectionRequest * const q)
    : AssociateHostedConnectionPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
