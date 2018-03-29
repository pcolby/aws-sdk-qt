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

#include "getbotaliasesrequest.h"
#include "getbotaliasesrequest_p.h"
#include "getbotaliasesresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetBotAliasesRequest
 *
 * @brief  Implements LexModelBuildingService GetBotAliases requests.
 *
 * @see    LexModelBuildingServiceClient::getBotAliases
 */

/**
 * @brief  Constructs a new GetBotAliasesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBotAliasesRequest::GetBotAliasesRequest(const GetBotAliasesRequest &other)
    : LexModelBuildingServiceRequest(new GetBotAliasesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBotAliasesRequest object.
 */
GetBotAliasesRequest::GetBotAliasesRequest()
    : LexModelBuildingServiceRequest(new GetBotAliasesRequestPrivate(LexModelBuildingServiceRequest::GetBotAliasesAction, this))
{

}

bool GetBotAliasesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBotAliasesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBotAliasesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetBotAliasesRequest::response(QNetworkReply * const reply) const
{
    return new GetBotAliasesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBotAliasesRequestPrivate
 *
 * @brief  Private implementation for GetBotAliasesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotAliasesRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBotAliasesRequest instance.
 */
GetBotAliasesRequestPrivate::GetBotAliasesRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotAliasesRequest * const q)
    : GetBotAliasesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBotAliasesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBotAliasesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBotAliasesRequest instance.
 */
GetBotAliasesRequestPrivate::GetBotAliasesRequestPrivate(
    const GetBotAliasesRequestPrivate &other, GetBotAliasesRequest * const q)
    : GetBotAliasesPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
