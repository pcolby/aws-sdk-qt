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

#include "getcampaignactivitiesrequest.h"
#include "getcampaignactivitiesrequest_p.h"
#include "getcampaignactivitiesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesRequest
 *
 * \brief The GetCampaignActivitiesRequest class provides an interface for Pinpoint GetCampaignActivities requests.
 *
 * \ingroup Pinpoint
 *
 *
 * \sa PinpointClient::getCampaignActivities
 */

/*!
 * @brief  Constructs a new GetCampaignActivitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetCampaignActivitiesRequest::GetCampaignActivitiesRequest(const GetCampaignActivitiesRequest &other)
    : PinpointRequest(new GetCampaignActivitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetCampaignActivitiesRequest object.
 */
GetCampaignActivitiesRequest::GetCampaignActivitiesRequest()
    : PinpointRequest(new GetCampaignActivitiesRequestPrivate(PinpointRequest::GetCampaignActivitiesAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignActivitiesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetCampaignActivitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetCampaignActivitiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PinpointClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignActivitiesRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignActivitiesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetCampaignActivitiesRequestPrivate
 *
 * @brief  Private implementation for GetCampaignActivitiesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetCampaignActivitiesRequestPrivate object.
 *
 * @param  action  Pinpoint action being performed.
 * @param  q       Pointer to this object's public GetCampaignActivitiesRequest instance.
 */
GetCampaignActivitiesRequestPrivate::GetCampaignActivitiesRequestPrivate(
    const PinpointRequest::Action action, GetCampaignActivitiesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetCampaignActivitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignActivitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetCampaignActivitiesRequest instance.
 */
GetCampaignActivitiesRequestPrivate::GetCampaignActivitiesRequestPrivate(
    const GetCampaignActivitiesRequestPrivate &other, GetCampaignActivitiesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
