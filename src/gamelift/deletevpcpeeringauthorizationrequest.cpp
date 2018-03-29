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

#include "deletevpcpeeringauthorizationrequest.h"
#include "deletevpcpeeringauthorizationrequest_p.h"
#include "deletevpcpeeringauthorizationresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  DeleteVpcPeeringAuthorizationRequest
 *
 * @brief  Implements GameLift DeleteVpcPeeringAuthorization requests.
 *
 * @see    GameLiftClient::deleteVpcPeeringAuthorization
 */

/**
 * @brief  Constructs a new DeleteVpcPeeringAuthorizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteVpcPeeringAuthorizationRequest::DeleteVpcPeeringAuthorizationRequest(const DeleteVpcPeeringAuthorizationRequest &other)
    : GameLiftRequest(new DeleteVpcPeeringAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteVpcPeeringAuthorizationRequest object.
 */
DeleteVpcPeeringAuthorizationRequest::DeleteVpcPeeringAuthorizationRequest()
    : GameLiftRequest(new DeleteVpcPeeringAuthorizationRequestPrivate(GameLiftRequest::DeleteVpcPeeringAuthorizationAction, this))
{

}

bool DeleteVpcPeeringAuthorizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteVpcPeeringAuthorizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteVpcPeeringAuthorizationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * DeleteVpcPeeringAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVpcPeeringAuthorizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteVpcPeeringAuthorizationRequestPrivate
 *
 * @brief  Private implementation for DeleteVpcPeeringAuthorizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcPeeringAuthorizationRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DeleteVpcPeeringAuthorizationRequest instance.
 */
DeleteVpcPeeringAuthorizationRequestPrivate::DeleteVpcPeeringAuthorizationRequestPrivate(
    const GameLiftRequest::Action action, DeleteVpcPeeringAuthorizationRequest * const q)
    : DeleteVpcPeeringAuthorizationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVpcPeeringAuthorizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteVpcPeeringAuthorizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteVpcPeeringAuthorizationRequest instance.
 */
DeleteVpcPeeringAuthorizationRequestPrivate::DeleteVpcPeeringAuthorizationRequestPrivate(
    const DeleteVpcPeeringAuthorizationRequestPrivate &other, DeleteVpcPeeringAuthorizationRequest * const q)
    : DeleteVpcPeeringAuthorizationPrivate(other, q)
{

}

} // namespace GameLift
} // namespace AWS
