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

#include "resolvealiasrequest.h"
#include "resolvealiasrequest_p.h"
#include "resolvealiasresponse.h"
#include "gameliftrequest_p.h"

namespace QtAws {
namespace GameLift {

/**
 * @class  ResolveAliasRequest
 *
 * @brief  Implements GameLift ResolveAlias requests.
 *
 * @see    GameLiftClient::resolveAlias
 */

/**
 * @brief  Constructs a new ResolveAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResolveAliasRequest::ResolveAliasRequest(const ResolveAliasRequest &other)
    : GameLiftRequest(new ResolveAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResolveAliasRequest object.
 */
ResolveAliasRequest::ResolveAliasRequest()
    : GameLiftRequest(new ResolveAliasRequestPrivate(GameLiftRequest::ResolveAliasAction, this))
{

}

bool ResolveAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResolveAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResolveAliasResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GameLiftClient::send
 */
QtAws::Core::AwsAbstractResponse * ResolveAliasRequest::response(QNetworkReply * const reply) const
{
    return new ResolveAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResolveAliasRequestPrivate
 *
 * @brief  Private implementation for ResolveAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResolveAliasRequestPrivate object.
 *
 * @param  action  GameLift action being performed.
 * @param  q       Pointer to this object's public ResolveAliasRequest instance.
 */
ResolveAliasRequestPrivate::ResolveAliasRequestPrivate(
    const GameLiftRequest::Action action, ResolveAliasRequest * const q)
    : ResolveAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResolveAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResolveAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResolveAliasRequest instance.
 */
ResolveAliasRequestPrivate::ResolveAliasRequestPrivate(
    const ResolveAliasRequestPrivate &other, ResolveAliasRequest * const q)
    : ResolveAliasPrivate(other, q)
{

}

} // namespace GameLift
} // namespace QtAws
