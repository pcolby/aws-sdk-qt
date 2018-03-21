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

#include "deletedirectconnectgatewayassociationrequest.h"
#include "deletedirectconnectgatewayassociationrequest_p.h"
#include "deletedirectconnectgatewayassociationresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  DeleteDirectConnectGatewayAssociationRequest
 *
 * @brief  Implements DirectConnect DeleteDirectConnectGatewayAssociation requests.
 *
 * @see    DirectConnectClient::deleteDirectConnectGatewayAssociation
 */

/**
 * @brief  Constructs a new DeleteDirectConnectGatewayAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDirectConnectGatewayAssociationResponse::DeleteDirectConnectGatewayAssociationResponse(

/**
 * @brief  Constructs a new DeleteDirectConnectGatewayAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDirectConnectGatewayAssociationRequest::DeleteDirectConnectGatewayAssociationRequest(const DeleteDirectConnectGatewayAssociationRequest &other)
    : DirectConnectRequest(new DeleteDirectConnectGatewayAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDirectConnectGatewayAssociationRequest object.
 */
DeleteDirectConnectGatewayAssociationRequest::DeleteDirectConnectGatewayAssociationRequest()
    : DirectConnectRequest(new DeleteDirectConnectGatewayAssociationRequestPrivate(DirectConnectRequest::DeleteDirectConnectGatewayAssociationAction, this))
{

}

bool DeleteDirectConnectGatewayAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDirectConnectGatewayAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDirectConnectGatewayAssociationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * DeleteDirectConnectGatewayAssociationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDirectConnectGatewayAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDirectConnectGatewayAssociationRequestPrivate
 *
 * @brief  Private implementation for DeleteDirectConnectGatewayAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectConnectGatewayAssociationRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public DeleteDirectConnectGatewayAssociationRequest instance.
 */
DeleteDirectConnectGatewayAssociationRequestPrivate::DeleteDirectConnectGatewayAssociationRequestPrivate(
    const DirectConnectRequest::Action action, DeleteDirectConnectGatewayAssociationRequest * const q)
    : DeleteDirectConnectGatewayAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDirectConnectGatewayAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDirectConnectGatewayAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDirectConnectGatewayAssociationRequest instance.
 */
DeleteDirectConnectGatewayAssociationRequestPrivate::DeleteDirectConnectGatewayAssociationRequestPrivate(
    const DeleteDirectConnectGatewayAssociationRequestPrivate &other, DeleteDirectConnectGatewayAssociationRequest * const q)
    : DeleteDirectConnectGatewayAssociationPrivate(other, q)
{

}
