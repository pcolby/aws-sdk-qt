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

#include "createcampaignrequest.h"
#include "createcampaignrequest_p.h"
#include "createcampaignresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/**
 * @class  CreateCampaignRequest
 *
 * @brief  Implements Pinpoint CreateCampaign requests.
 *
 * @see    PinpointClient::createCampaign
 */

/**
 * @brief  Constructs a new CreateCampaignRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateCampaignRequest::CreateCampaignRequest(const CreateCampaignRequest &other)
    : PinpointRequest(new CreateCampaignRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateCampaignRequest object.
 */
CreateCampaignRequest::CreateCampaignRequest()
    : PinpointRequest(new CreateCampaignRequestPrivate(PinpointRequest::CreateCampaignAction, this))
{

}

bool CreateCampaignRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateCampaignResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateCampaignResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  PinpointClient::send
 */
AwsAbstractResponse * CreateCampaignRequest::response(QNetworkReply * const reply) const
{
    return new CreateCampaignResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateCampaignRequestPrivate
 *
 * @brief  Private implementation for CreateCampaignRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCampaignRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public CreateCampaignRequest instance.
 */
CreateCampaignRequestPrivate::CreateCampaignRequestPrivate(
    const PinpointRequest::Action action, CreateCampaignRequest * const q)
    : CreateCampaignPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateCampaignRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateCampaignRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateCampaignRequest instance.
 */
CreateCampaignRequestPrivate::CreateCampaignRequestPrivate(
    const CreateCampaignRequestPrivate &other, CreateCampaignRequest * const q)
    : CreateCampaignPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
