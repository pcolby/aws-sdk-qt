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

#include "getbotaliasrequest.h"
#include "getbotaliasrequest_p.h"
#include "getbotaliasresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetBotAliasRequest
 *
 * @brief  Implements LexModelBuildingService GetBotAlias requests.
 *
 * @see    LexModelBuildingServiceClient::getBotAlias
 */

/**
 * @brief  Constructs a new GetBotAliasRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBotAliasRequest::GetBotAliasRequest(const GetBotAliasRequest &other)
    : LexModelBuildingServiceRequest(new GetBotAliasRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBotAliasRequest object.
 */
GetBotAliasRequest::GetBotAliasRequest()
    : LexModelBuildingServiceRequest(new GetBotAliasRequestPrivate(LexModelBuildingServiceRequest::GetBotAliasAction, this))
{

}

bool GetBotAliasRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBotAliasResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBotAliasResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetBotAliasRequest::response(QNetworkReply * const reply) const
{
    return new GetBotAliasResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBotAliasRequestPrivate
 *
 * @brief  Private implementation for GetBotAliasRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotAliasRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBotAliasRequest instance.
 */
GetBotAliasRequestPrivate::GetBotAliasRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotAliasRequest * const q)
    : GetBotAliasPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBotAliasRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBotAliasRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBotAliasRequest instance.
 */
GetBotAliasRequestPrivate::GetBotAliasRequestPrivate(
    const GetBotAliasRequestPrivate &other, GetBotAliasRequest * const q)
    : GetBotAliasPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
