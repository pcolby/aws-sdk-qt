/*
    Copyright 2013-2020 Paul Colby

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

#include "getcampaignversionsrequest.h"
#include "getcampaignversionsrequest_p.h"
#include "getcampaignversionsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsRequest
 * \brief The GetCampaignVersionsRequest class provides an interface for Pinpoint GetCampaignVersions requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaignVersions
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignVersionsRequest::GetCampaignVersionsRequest(const GetCampaignVersionsRequest &other)
    : PinpointRequest(new GetCampaignVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignVersionsRequest object.
 */
GetCampaignVersionsRequest::GetCampaignVersionsRequest()
    : PinpointRequest(new GetCampaignVersionsRequestPrivate(PinpointRequest::GetCampaignVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignVersionsRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignVersionsRequestPrivate
 * \brief The GetCampaignVersionsRequestPrivate class provides private implementation for GetCampaignVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignVersionsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignVersionsRequestPrivate::GetCampaignVersionsRequestPrivate(
    const PinpointRequest::Action action, GetCampaignVersionsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignVersionsRequest
 * class' copy constructor.
 */
GetCampaignVersionsRequestPrivate::GetCampaignVersionsRequestPrivate(
    const GetCampaignVersionsRequestPrivate &other, GetCampaignVersionsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
