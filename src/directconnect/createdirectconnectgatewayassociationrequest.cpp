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

#include "createdirectconnectgatewayassociationrequest.h"
#include "createdirectconnectgatewayassociationrequest_p.h"
#include "createdirectconnectgatewayassociationresponse.h"
#include "directconnectrequest_p.h"

namespace AWS {
namespace DirectConnect {

/**
 * @class  CreateDirectConnectGatewayAssociationRequest
 *
 * @brief  Implements DirectConnect CreateDirectConnectGatewayAssociation requests.
 *
 * @see    DirectConnectClient::createDirectConnectGatewayAssociation
 */

/**
 * @brief  Constructs a new CreateDirectConnectGatewayAssociationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDirectConnectGatewayAssociationResponse::CreateDirectConnectGatewayAssociationResponse(

/**
 * @brief  Constructs a new CreateDirectConnectGatewayAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDirectConnectGatewayAssociationRequest::CreateDirectConnectGatewayAssociationRequest(const CreateDirectConnectGatewayAssociationRequest &other)
    : DirectConnectRequest(new CreateDirectConnectGatewayAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDirectConnectGatewayAssociationRequest object.
 */
CreateDirectConnectGatewayAssociationRequest::CreateDirectConnectGatewayAssociationRequest()
    : DirectConnectRequest(new CreateDirectConnectGatewayAssociationRequestPrivate(DirectConnectRequest::CreateDirectConnectGatewayAssociationAction, this))
{

}

bool CreateDirectConnectGatewayAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDirectConnectGatewayAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDirectConnectGatewayAssociationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectConnectClient::send
 */
AwsAbstractResponse * CreateDirectConnectGatewayAssociationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDirectConnectGatewayAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDirectConnectGatewayAssociationRequestPrivate
 *
 * @brief  Private implementation for CreateDirectConnectGatewayAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectConnectGatewayAssociationRequestPrivate object.
 *
 * @param  action  DirectConnect action being performed.
 * @param  q       Pointer to this object's public CreateDirectConnectGatewayAssociationRequest instance.
 */
CreateDirectConnectGatewayAssociationRequestPrivate::CreateDirectConnectGatewayAssociationRequestPrivate(
    const DirectConnectRequest::Action action, CreateDirectConnectGatewayAssociationRequest * const q)
    : CreateDirectConnectGatewayAssociationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDirectConnectGatewayAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDirectConnectGatewayAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDirectConnectGatewayAssociationRequest instance.
 */
CreateDirectConnectGatewayAssociationRequestPrivate::CreateDirectConnectGatewayAssociationRequestPrivate(
    const CreateDirectConnectGatewayAssociationRequestPrivate &other, CreateDirectConnectGatewayAssociationRequest * const q)
    : CreateDirectConnectGatewayAssociationPrivate(other, q)
{

}

} // namespace DirectConnect
} // namespace AWS
