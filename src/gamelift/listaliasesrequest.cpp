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

#include "listaliasesrequest.h"
#include "listaliasesrequest_p.h"
#include "listaliasesresponse.h"
#include "gameliftrequest_p.h"

namespace AWS {
namespace GameLift {

/**
 * @class  ListAliasesRequest
 *
 * @brief  Implements GameLift ListAliases requests.
 *
 * @see    GameLiftClient::listAliases
 */

/**
 * @brief  Constructs a new ListAliasesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAliasesResponse::ListAliasesResponse(

/**
 * @brief  Constructs a new ListAliasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAliasesRequest::ListAliasesRequest(const ListAliasesRequest &other)
    : GameLiftRequest(new ListAliasesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAliasesRequest object.
 */
ListAliasesRequest::ListAliasesRequest()
    : GameLiftRequest(new ListAliasesRequestPrivate(GameLiftRequest::ListAliasesAction, this))
{

}

bool ListAliasesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAliasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAliasesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
AwsAbstractResponse * ListAliasesRequest::response(QNetworkReply * const reply) const
{
    return new ListAliasesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAliasesRequestPrivate
 *
 * @brief  Private implementation for ListAliasesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAliasesRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public ListAliasesRequest instance.
 */
ListAliasesRequestPrivate::ListAliasesRequestPrivate(
    const GameLiftRequest::Action action, ListAliasesRequest * const q)
    : ListAliasesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAliasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAliasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAliasesRequest instance.
 */
ListAliasesRequestPrivate::ListAliasesRequestPrivate(
    const ListAliasesRequestPrivate &other, ListAliasesRequest * const q)
    : ListAliasesPrivate(other, q)
{

}
