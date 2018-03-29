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

#include "getbotchannelassociationrequest.h"
#include "getbotchannelassociationrequest_p.h"
#include "getbotchannelassociationresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetBotChannelAssociationRequest
 *
 * @brief  Implements LexModelBuildingService GetBotChannelAssociation requests.
 *
 * @see    LexModelBuildingServiceClient::getBotChannelAssociation
 */

/**
 * @brief  Constructs a new GetBotChannelAssociationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetBotChannelAssociationRequest::GetBotChannelAssociationRequest(const GetBotChannelAssociationRequest &other)
    : LexModelBuildingServiceRequest(new GetBotChannelAssociationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetBotChannelAssociationRequest object.
 */
GetBotChannelAssociationRequest::GetBotChannelAssociationRequest()
    : LexModelBuildingServiceRequest(new GetBotChannelAssociationRequestPrivate(LexModelBuildingServiceRequest::GetBotChannelAssociationAction, this))
{

}

bool GetBotChannelAssociationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetBotChannelAssociationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetBotChannelAssociationResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBotChannelAssociationRequest::response(QNetworkReply * const reply) const
{
    return new GetBotChannelAssociationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetBotChannelAssociationRequestPrivate
 *
 * @brief  Private implementation for GetBotChannelAssociationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBotChannelAssociationRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetBotChannelAssociationRequest instance.
 */
GetBotChannelAssociationRequestPrivate::GetBotChannelAssociationRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetBotChannelAssociationRequest * const q)
    : LexModelBuildingServiceRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetBotChannelAssociationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetBotChannelAssociationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetBotChannelAssociationRequest instance.
 */
GetBotChannelAssociationRequestPrivate::GetBotChannelAssociationRequestPrivate(
    const GetBotChannelAssociationRequestPrivate &other, GetBotChannelAssociationRequest * const q)
    : LexModelBuildingServiceRequestPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
