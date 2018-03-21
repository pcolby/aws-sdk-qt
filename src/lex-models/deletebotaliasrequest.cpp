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

#include "deletebotaliasrequest.h"
#include "deletebotaliasrequest_p.h"
#include "deletebotaliasresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  DeleteBotAliasRequest
 *
 * @brief  Implements LexModelBuildingService DeleteBotAlias requests.
 *
 * @see    LexModelBuildingServiceClient::deleteBotAlias
 */

/**
 * @brief  Constructs a new DeleteBotAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteBotAliasRequest::DeleteBotAliasRequest(const DeleteBotAliasRequest &other)
    : LexModelBuildingServiceRequest(new DeleteBotAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteBotAliasRequest object.
 */
DeleteBotAliasRequest::DeleteBotAliasRequest()
    : LexModelBuildingServiceRequest(new DeleteBotAliasRequestPrivate(LexModelBuildingServiceRequest::DeleteBotAliasAction, this))
{

}

bool DeleteBotAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteBotAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteBotAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * DeleteBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBotAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteBotAliasRequestPrivate
 *
 * @brief  Private implementation for DeleteBotAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotAliasRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public DeleteBotAliasRequest instance.
 */
DeleteBotAliasRequestPrivate::DeleteBotAliasRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, DeleteBotAliasRequest * const q)
    : DeleteBotAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBotAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteBotAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteBotAliasRequest instance.
 */
DeleteBotAliasRequestPrivate::DeleteBotAliasRequestPrivate(
    const DeleteBotAliasRequestPrivate &other, DeleteBotAliasRequest * const q)
    : DeleteBotAliasPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
