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

#include "listfleetsrequest.h"
#include "listfleetsrequest_p.h"
#include "listfleetsresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  ListFleetsRequest
 *
 * @brief  Implements GameLift ListFleets requests.
 *
 * @see    GameLiftClient::listFleets
 */

/**
 * @brief  Constructs a new ListFleetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFleetsResponse::ListFleetsResponse(

/**
 * @brief  Constructs a new ListFleetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListFleetsRequest::ListFleetsRequest(const ListFleetsRequest &other)
    : GameLiftRequest(new ListFleetsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListFleetsRequest object.
 */
ListFleetsRequest::ListFleetsRequest()
    : GameLiftRequest(new ListFleetsRequestPrivate(GameLiftRequest::ListFleetsAction, this))
{

}

bool ListFleetsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListFleetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListFleetsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * ListFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListFleetsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListFleetsRequestPrivate
 *
 * @brief  Private implementation for ListFleetsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFleetsRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public ListFleetsRequest instance.
 */
ListFleetsRequestPrivate::ListFleetsRequestPrivate(
    const GameLiftRequest::Action action, ListFleetsRequest * const q)
    : ListFleetsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListFleetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListFleetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListFleetsRequest instance.
 */
ListFleetsRequestPrivate::ListFleetsRequestPrivate(
    const ListFleetsRequestPrivate &other, ListFleetsRequest * const q)
    : ListFleetsPrivate(other, q)
{

}
