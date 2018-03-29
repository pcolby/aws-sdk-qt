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

#include "startmatchbackfillrequest.h"
#include "startmatchbackfillrequest_p.h"
#include "startmatchbackfillresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  StartMatchBackfillRequest
 *
 * @brief  Implements GameLift StartMatchBackfill requests.
 *
 * @see    GameLiftClient::startMatchBackfill
 */

/**
 * @brief  Constructs a new StartMatchBackfillRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
StartMatchBackfillRequest::StartMatchBackfillRequest(const StartMatchBackfillRequest &other)
    : GameLiftRequest(new StartMatchBackfillRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new StartMatchBackfillRequest object.
 */
StartMatchBackfillRequest::StartMatchBackfillRequest()
    : GameLiftRequest(new StartMatchBackfillRequestPrivate(GameLiftRequest::StartMatchBackfillAction, this))
{

}

bool StartMatchBackfillRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an StartMatchBackfillResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An StartMatchBackfillResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * StartMatchBackfillRequest::response(QNetworkReply * const reply) const
{
    return new StartMatchBackfillResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  StartMatchBackfillRequestPrivate
 *
 * @brief  Private implementation for StartMatchBackfillRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartMatchBackfillRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public StartMatchBackfillRequest instance.
 */
StartMatchBackfillRequestPrivate::StartMatchBackfillRequestPrivate(
    const GameLiftRequest::Action action, StartMatchBackfillRequest * const q)
    : StartMatchBackfillPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new StartMatchBackfillRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the StartMatchBackfillRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public StartMatchBackfillRequest instance.
 */
StartMatchBackfillRequestPrivate::StartMatchBackfillRequestPrivate(
    const StartMatchBackfillRequestPrivate &other, StartMatchBackfillRequest * const q)
    : StartMatchBackfillPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
