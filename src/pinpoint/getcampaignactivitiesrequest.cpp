/*
    Copyright 2013-2019 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getcampaignactivitiesrequest.h"
#include "getcampaignactivitiesrequest_p.h"
#include "getcampaignactivitiesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesRequest
 * \brief The GetCampaignActivitiesRequest class provides an interface for Pinpoint GetCampaignActivities requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignActivities
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignActivitiesRequest::GetCampaignActivitiesRequest(const GetCampaignActivitiesRequest &other)
    : PinpointRequest(new GetCampaignActivitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignActivitiesRequest object.
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
 * Returns a GetCampaignActivitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignActivitiesRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignActivitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignActivitiesRequestPrivate
 * \brief The GetCampaignActivitiesRequestPrivate class provides private implementation for GetCampaignActivitiesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignActivitiesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignActivitiesRequestPrivate::GetCampaignActivitiesRequestPrivate(
    const PinpointRequest::Action action, GetCampaignActivitiesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignActivitiesRequest
 * class' copy constructor.
 */
GetCampaignActivitiesRequestPrivate::GetCampaignActivitiesRequestPrivate(
    const GetCampaignActivitiesRequestPrivate &other, GetCampaignActivitiesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
