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

#include "disassociateconnectionfromlagrequest.h"
#include "disassociateconnectionfromlagrequest_p.h"
#include "disassociateconnectionfromlagresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DisassociateConnectionFromLagRequest
 *
 * @brief  Implements DirectConnect DisassociateConnectionFromLag requests.
 *
 * @see    DirectConnectClient::disassociateConnectionFromLag
 */

/**
 * @brief  Constructs a new DisassociateConnectionFromLagResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateConnectionFromLagResponse::DisassociateConnectionFromLagResponse(

/**
 * @brief  Constructs a new DisassociateConnectionFromLagRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateConnectionFromLagRequest::DisassociateConnectionFromLagRequest(const DisassociateConnectionFromLagRequest &other)
    : DirectConnectRequest(new DisassociateConnectionFromLagRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateConnectionFromLagRequest object.
 */
DisassociateConnectionFromLagRequest::DisassociateConnectionFromLagRequest()
    : DirectConnectRequest(new DisassociateConnectionFromLagRequestPrivate(DirectConnectRequest::DisassociateConnectionFromLagAction, this))
{

}

bool DisassociateConnectionFromLagRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateConnectionFromLagResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateConnectionFromLagResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DisassociateConnectionFromLagRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateConnectionFromLagResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateConnectionFromLagRequestPrivate
 *
 * @brief  Private implementation for DisassociateConnectionFromLagRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConnectionFromLagRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DisassociateConnectionFromLagRequest instance.
 */
DisassociateConnectionFromLagRequestPrivate::DisassociateConnectionFromLagRequestPrivate(
    const DirectConnectRequest::Action action, DisassociateConnectionFromLagRequest * const q)
    : DisassociateConnectionFromLagPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConnectionFromLagRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateConnectionFromLagRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateConnectionFromLagRequest instance.
 */
DisassociateConnectionFromLagRequestPrivate::DisassociateConnectionFromLagRequestPrivate(
    const DisassociateConnectionFromLagRequestPrivate &other, DisassociateConnectionFromLagRequest * const q)
    : DisassociateConnectionFromLagPrivate(other, q)
{

}
