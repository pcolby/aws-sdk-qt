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

#include "creatematchmakingrulesetrequest.h"
#include "creatematchmakingrulesetrequest_p.h"
#include "creatematchmakingrulesetresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  CreateMatchmakingRuleSetRequest
 *
 * @brief  Implements GameLift CreateMatchmakingRuleSet requests.
 *
 * @see    GameLiftClient::createMatchmakingRuleSet
 */

/**
 * @brief  Constructs a new CreateMatchmakingRuleSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateMatchmakingRuleSetRequest::CreateMatchmakingRuleSetRequest(const CreateMatchmakingRuleSetRequest &other)
    : GameLiftRequest(new CreateMatchmakingRuleSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateMatchmakingRuleSetRequest object.
 */
CreateMatchmakingRuleSetRequest::CreateMatchmakingRuleSetRequest()
    : GameLiftRequest(new CreateMatchmakingRuleSetRequestPrivate(GameLiftRequest::CreateMatchmakingRuleSetAction, this))
{

}

bool CreateMatchmakingRuleSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateMatchmakingRuleSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateMatchmakingRuleSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * CreateMatchmakingRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateMatchmakingRuleSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateMatchmakingRuleSetRequestPrivate
 *
 * @brief  Private implementation for CreateMatchmakingRuleSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMatchmakingRuleSetRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public CreateMatchmakingRuleSetRequest instance.
 */
CreateMatchmakingRuleSetRequestPrivate::CreateMatchmakingRuleSetRequestPrivate(
    const GameLiftRequest::Action action, CreateMatchmakingRuleSetRequest * const q)
    : CreateMatchmakingRuleSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateMatchmakingRuleSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateMatchmakingRuleSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateMatchmakingRuleSetRequest instance.
 */
CreateMatchmakingRuleSetRequestPrivate::CreateMatchmakingRuleSetRequestPrivate(
    const CreateMatchmakingRuleSetRequestPrivate &other, CreateMatchmakingRuleSetRequest * const q)
    : CreateMatchmakingRuleSetPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
