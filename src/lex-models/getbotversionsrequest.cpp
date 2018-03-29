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

#include "getbotversionsrequest.h"
#include "getbotversionsrequest_p.h"
#include "getbotversionsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetBotVersionsRequest
 *
 * @brief  Implements LexModelBuildingService GetBotVersions requests.
 *
 * @see    LexModelBuildingServiceClient::getBotVersions
 */

/**
 * @brief  Constructs a new GetBotVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBotVersionsRequest::GetBotVersionsRequest(const GetBotVersionsRequest &other)
    : LexModelBuildingServiceRequest(new GetBotVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBotVersionsRequest object.
 */
GetBotVersionsRequest::GetBotVersionsRequest()
    : LexModelBuildingServiceRequest(new GetBotVersionsRequestPrivate(LexModelBuildingServiceRequest::GetBotVersionsAction, this))
{

}

bool GetBotVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBotVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBotVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetBotVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBotVersionsRequestPrivate
 *
 * @brief  Private implementation for GetBotVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotVersionsRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBotVersionsRequest instance.
 */
GetBotVersionsRequestPrivate::GetBotVersionsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotVersionsRequest * const q)
    : GetBotVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBotVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBotVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBotVersionsRequest instance.
 */
GetBotVersionsRequestPrivate::GetBotVersionsRequestPrivate(
    const GetBotVersionsRequestPrivate &other, GetBotVersionsRequest * const q)
    : GetBotVersionsPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
