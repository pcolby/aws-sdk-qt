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

#include "createvpcpeeringconnectionrequest.h"
#include "createvpcpeeringconnectionrequest_p.h"
#include "createvpcpeeringconnectionresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  CreateVpcPeeringConnectionRequest
 *
 * @brief  Implements GameLift CreateVpcPeeringConnection requests.
 *
 * @see    GameLiftClient::createVpcPeeringConnection
 */

/**
 * @brief  Constructs a new CreateVpcPeeringConnectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateVpcPeeringConnectionResponse::CreateVpcPeeringConnectionResponse(

/**
 * @brief  Constructs a new CreateVpcPeeringConnectionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpcPeeringConnectionRequest::CreateVpcPeeringConnectionRequest(const CreateVpcPeeringConnectionRequest &other)
    : GameLiftRequest(new CreateVpcPeeringConnectionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpcPeeringConnectionRequest object.
 */
CreateVpcPeeringConnectionRequest::CreateVpcPeeringConnectionRequest()
    : GameLiftRequest(new CreateVpcPeeringConnectionRequestPrivate(GameLiftRequest::CreateVpcPeeringConnectionAction, this))
{

}

bool CreateVpcPeeringConnectionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpcPeeringConnectionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpcPeeringConnectionResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * CreateVpcPeeringConnectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcPeeringConnectionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpcPeeringConnectionRequestPrivate
 *
 * @brief  Private implementation for CreateVpcPeeringConnectionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcPeeringConnectionRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreateVpcPeeringConnectionRequest instance.
 */
CreateVpcPeeringConnectionRequestPrivate::CreateVpcPeeringConnectionRequestPrivate(
    const GameLiftRequest::Action action, CreateVpcPeeringConnectionRequest * const q)
    : CreateVpcPeeringConnectionPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcPeeringConnectionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcPeeringConnectionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpcPeeringConnectionRequest instance.
 */
CreateVpcPeeringConnectionRequestPrivate::CreateVpcPeeringConnectionRequestPrivate(
    const CreateVpcPeeringConnectionRequestPrivate &other, CreateVpcPeeringConnectionRequest * const q)
    : CreateVpcPeeringConnectionPrivate(other, q)
{

}
