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

#include "getbotchannelassociationsrequest.h"
#include "getbotchannelassociationsrequest_p.h"
#include "getbotchannelassociationsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetBotChannelAssociationsRequest
 *
 * @brief  Implements LexModelBuildingService GetBotChannelAssociations requests.
 *
 * @see    LexModelBuildingServiceClient::getBotChannelAssociations
 */

/**
 * @brief  Constructs a new GetBotChannelAssociationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBotChannelAssociationsRequest::GetBotChannelAssociationsRequest(const GetBotChannelAssociationsRequest &other)
    : LexModelBuildingServiceRequest(new GetBotChannelAssociationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBotChannelAssociationsRequest object.
 */
GetBotChannelAssociationsRequest::GetBotChannelAssociationsRequest()
    : LexModelBuildingServiceRequest(new GetBotChannelAssociationsRequestPrivate(LexModelBuildingServiceRequest::GetBotChannelAssociationsAction, this))
{

}

bool GetBotChannelAssociationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBotChannelAssociationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBotChannelAssociationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetBotChannelAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new GetBotChannelAssociationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBotChannelAssociationsRequestPrivate
 *
 * @brief  Private implementation for GetBotChannelAssociationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotChannelAssociationsRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBotChannelAssociationsRequest instance.
 */
GetBotChannelAssociationsRequestPrivate::GetBotChannelAssociationsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotChannelAssociationsRequest * const q)
    : GetBotChannelAssociationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBotChannelAssociationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBotChannelAssociationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBotChannelAssociationsRequest instance.
 */
GetBotChannelAssociationsRequestPrivate::GetBotChannelAssociationsRequestPrivate(
    const GetBotChannelAssociationsRequestPrivate &other, GetBotChannelAssociationsRequest * const q)
    : GetBotChannelAssociationsPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
