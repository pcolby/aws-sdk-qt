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

#include "createvpcpeeringauthorizationrequest.h"
#include "createvpcpeeringauthorizationrequest_p.h"
#include "createvpcpeeringauthorizationresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  CreateVpcPeeringAuthorizationRequest
 *
 * @brief  Implements GameLift CreateVpcPeeringAuthorization requests.
 *
 * @see    GameLiftClient::createVpcPeeringAuthorization
 */

/**
 * @brief  Constructs a new CreateVpcPeeringAuthorizationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateVpcPeeringAuthorizationRequest::CreateVpcPeeringAuthorizationRequest(const CreateVpcPeeringAuthorizationRequest &other)
    : GameLiftRequest(new CreateVpcPeeringAuthorizationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateVpcPeeringAuthorizationRequest object.
 */
CreateVpcPeeringAuthorizationRequest::CreateVpcPeeringAuthorizationRequest()
    : GameLiftRequest(new CreateVpcPeeringAuthorizationRequestPrivate(GameLiftRequest::CreateVpcPeeringAuthorizationAction, this))
{

}

bool CreateVpcPeeringAuthorizationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateVpcPeeringAuthorizationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateVpcPeeringAuthorizationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVpcPeeringAuthorizationRequest::response(QNetworkReply * const reply) const
{
    return new CreateVpcPeeringAuthorizationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateVpcPeeringAuthorizationRequestPrivate
 *
 * @brief  Private implementation for CreateVpcPeeringAuthorizationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcPeeringAuthorizationRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreateVpcPeeringAuthorizationRequest instance.
 */
CreateVpcPeeringAuthorizationRequestPrivate::CreateVpcPeeringAuthorizationRequestPrivate(
    const GameLiftRequest::Action action, CreateVpcPeeringAuthorizationRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateVpcPeeringAuthorizationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateVpcPeeringAuthorizationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateVpcPeeringAuthorizationRequest instance.
 */
CreateVpcPeeringAuthorizationRequestPrivate::CreateVpcPeeringAuthorizationRequestPrivate(
    const CreateVpcPeeringAuthorizationRequestPrivate &other, CreateVpcPeeringAuthorizationRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
