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

#include "getbotrequest.h"
#include "getbotrequest_p.h"
#include "getbotresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetBotRequest
 *
 * @brief  Implements LexModelBuildingService GetBot requests.
 *
 * @see    LexModelBuildingServiceClient::getBot
 */

/**
 * @brief  Constructs a new GetBotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBotRequest::GetBotRequest(const GetBotRequest &other)
    : LexModelBuildingServiceRequest(new GetBotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBotRequest object.
 */
GetBotRequest::GetBotRequest()
    : LexModelBuildingServiceRequest(new GetBotRequestPrivate(LexModelBuildingServiceRequest::GetBotAction, this))
{

}

bool GetBotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBotResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetBotRequest::response(QNetworkReply * const reply) const
{
    return new GetBotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBotRequestPrivate
 *
 * @brief  Private implementation for GetBotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBotRequest instance.
 */
GetBotRequestPrivate::GetBotRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotRequest * const q)
    : GetBotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBotRequest instance.
 */
GetBotRequestPrivate::GetBotRequestPrivate(
    const GetBotRequestPrivate &other, GetBotRequest * const q)
    : GetBotPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace AWS
