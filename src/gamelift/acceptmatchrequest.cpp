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

#include "acceptmatchrequest.h"
#include "acceptmatchrequest_p.h"
#include "acceptmatchresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  AcceptMatchRequest
 *
 * @brief  Implements GameLift AcceptMatch requests.
 *
 * @see    GameLiftClient::acceptMatch
 */

/**
 * @brief  Constructs a new AcceptMatchRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcceptMatchRequest::AcceptMatchRequest(const AcceptMatchRequest &other)
    : GameLiftRequest(new AcceptMatchRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcceptMatchRequest object.
 */
AcceptMatchRequest::AcceptMatchRequest()
    : GameLiftRequest(new AcceptMatchRequestPrivate(GameLiftRequest::AcceptMatchAction, this))
{

}

bool AcceptMatchRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcceptMatchResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcceptMatchResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * AcceptMatchRequest::response(QNetworkReply * const reply) const
{
    return new AcceptMatchResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcceptMatchRequestPrivate
 *
 * @brief  Private implementation for AcceptMatchRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptMatchRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public AcceptMatchRequest instance.
 */
AcceptMatchRequestPrivate::AcceptMatchRequestPrivate(
    const GameLiftRequest::Action action, AcceptMatchRequest * const q)
    : AcceptMatchPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcceptMatchRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcceptMatchRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcceptMatchRequest instance.
 */
AcceptMatchRequestPrivate::AcceptMatchRequestPrivate(
    const AcceptMatchRequestPrivate &other, AcceptMatchRequest * const q)
    : AcceptMatchPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
