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

#include "deletefleetrequest.h"
#include "deletefleetrequest_p.h"
#include "deletefleetresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  DeleteFleetRequest
 *
 * @brief  Implements GameLift DeleteFleet requests.
 *
 * @see    GameLiftClient::deleteFleet
 */

/**
 * @brief  Constructs a new DeleteFleetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteFleetRequest::DeleteFleetRequest(const DeleteFleetRequest &other)
    : GameLiftRequest(new DeleteFleetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteFleetRequest object.
 */
DeleteFleetRequest::DeleteFleetRequest()
    : GameLiftRequest(new DeleteFleetRequestPrivate(GameLiftRequest::DeleteFleetAction, this))
{

}

bool DeleteFleetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteFleetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteFleetResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFleetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFleetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteFleetRequestPrivate
 *
 * @brief  Private implementation for DeleteFleetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFleetRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public DeleteFleetRequest instance.
 */
DeleteFleetRequestPrivate::DeleteFleetRequestPrivate(
    const GameLiftRequest::Action action, DeleteFleetRequest * const q)
    : GameLiftRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFleetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteFleetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteFleetRequest instance.
 */
DeleteFleetRequestPrivate::DeleteFleetRequestPrivate(
    const DeleteFleetRequestPrivate &other, DeleteFleetRequest * const q)
    : GameLiftRequestPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
