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

#include "associateconnectionwithlagrequest.h"
#include "associateconnectionwithlagrequest_p.h"
#include "associateconnectionwithlagresponse.h"
#include "directconnectrequest_p.h"

namespace QtAws {
namespace DirectConnect {

/**
 * @class  AssociateConnectionWithLagRequest
 *
 * @brief  Implements DirectConnect AssociateConnectionWithLag requests.
 *
 * @see    DirectConnectClient::associateConnectionWithLag
 */

/**
 * @brief  Constructs a new AssociateConnectionWithLagRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateConnectionWithLagRequest::AssociateConnectionWithLagRequest(const AssociateConnectionWithLagRequest &other)
    : DirectConnectRequest(new AssociateConnectionWithLagRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateConnectionWithLagRequest object.
 */
AssociateConnectionWithLagRequest::AssociateConnectionWithLagRequest()
    : DirectConnectRequest(new AssociateConnectionWithLagRequestPrivate(DirectConnectRequest::AssociateConnectionWithLagAction, this))
{

}

bool AssociateConnectionWithLagRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateConnectionWithLagResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateConnectionWithLagResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * AssociateConnectionWithLagRequest::response(QNetworkReply * const reply) const
{
    return new AssociateConnectionWithLagResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateConnectionWithLagRequestPrivate
 *
 * @brief  Private implementation for AssociateConnectionWithLagRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateConnectionWithLagRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public AssociateConnectionWithLagRequest instance.
 */
AssociateConnectionWithLagRequestPrivate::AssociateConnectionWithLagRequestPrivate(
    const DirectConnectRequest::Action action, AssociateConnectionWithLagRequest * const q)
    : AssociateConnectionWithLagPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateConnectionWithLagRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateConnectionWithLagRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateConnectionWithLagRequest instance.
 */
AssociateConnectionWithLagRequestPrivate::AssociateConnectionWithLagRequestPrivate(
    const AssociateConnectionWithLagRequestPrivate &other, AssociateConnectionWithLagRequest * const q)
    : AssociateConnectionWithLagPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace QtAws
