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

#include "validatematchmakingrulesetrequest.h"
#include "validatematchmakingrulesetrequest_p.h"
#include "validatematchmakingrulesetresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  ValidateMatchmakingRuleSetRequest
 *
 * @brief  Implements GameLift ValidateMatchmakingRuleSet requests.
 *
 * @see    GameLiftClient::validateMatchmakingRuleSet
 */

/**
 * @brief  Constructs a new ValidateMatchmakingRuleSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ValidateMatchmakingRuleSetResponse::ValidateMatchmakingRuleSetResponse(

/**
 * @brief  Constructs a new ValidateMatchmakingRuleSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ValidateMatchmakingRuleSetRequest::ValidateMatchmakingRuleSetRequest(const ValidateMatchmakingRuleSetRequest &other)
    : GameLiftRequest(new ValidateMatchmakingRuleSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ValidateMatchmakingRuleSetRequest object.
 */
ValidateMatchmakingRuleSetRequest::ValidateMatchmakingRuleSetRequest()
    : GameLiftRequest(new ValidateMatchmakingRuleSetRequestPrivate(GameLiftRequest::ValidateMatchmakingRuleSetAction, this))
{

}

bool ValidateMatchmakingRuleSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ValidateMatchmakingRuleSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ValidateMatchmakingRuleSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * ValidateMatchmakingRuleSetRequest::response(QNetworkReply * const reply) const
{
    return new ValidateMatchmakingRuleSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ValidateMatchmakingRuleSetRequestPrivate
 *
 * @brief  Private implementation for ValidateMatchmakingRuleSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ValidateMatchmakingRuleSetRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public ValidateMatchmakingRuleSetRequest instance.
 */
ValidateMatchmakingRuleSetRequestPrivate::ValidateMatchmakingRuleSetRequestPrivate(
    const GameLiftRequest::Action action, ValidateMatchmakingRuleSetRequest * const q)
    : ValidateMatchmakingRuleSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ValidateMatchmakingRuleSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ValidateMatchmakingRuleSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ValidateMatchmakingRuleSetRequest instance.
 */
ValidateMatchmakingRuleSetRequestPrivate::ValidateMatchmakingRuleSetRequestPrivate(
    const ValidateMatchmakingRuleSetRequestPrivate &other, ValidateMatchmakingRuleSetRequest * const q)
    : ValidateMatchmakingRuleSetPrivate(other, q)
{

}
