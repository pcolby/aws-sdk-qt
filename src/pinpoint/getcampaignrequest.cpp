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

#include "getcampaignrequest.h"
#include "getcampaignrequest_p.h"
#include "getcampaignresponse.h"
#include "pinpointrequest_p.h"

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetCampaignRequest
 *
 * @brief  Implements Pinpoint GetCampaign requests.
 *
 * @see    PinpointClient::getCampaign
 */

/**
 * @brief  Constructs a new GetCampaignRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCampaignRequest::GetCampaignRequest(const GetCampaignRequest &other)
    : PinpointRequest(new GetCampaignRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetCampaignRequest object.
 */
GetCampaignRequest::GetCampaignRequest()
    : PinpointRequest(new GetCampaignRequestPrivate(PinpointRequest::GetCampaignAction, this))
{

}

bool GetCampaignRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetCampaignResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCampaignResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * GetCampaignRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetCampaignRequestPrivate
 *
 * @brief  Private implementation for GetCampaignRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetCampaignRequest instance.
 */
GetCampaignRequestPrivate::GetCampaignRequestPrivate(
    const PinpointRequest::Action action, GetCampaignRequest * const q)
    : GetCampaignPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetCampaignRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCampaignRequest instance.
 */
GetCampaignRequestPrivate::GetCampaignRequestPrivate(
    const GetCampaignRequestPrivate &other, GetCampaignRequest * const q)
    : GetCampaignPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace AWS
