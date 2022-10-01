/*
    Copyright 2013-2021 Paul Colby

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

#include "getcampaignstaterequest.h"
#include "getcampaignstaterequest_p.h"
#include "getcampaignstateresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateRequest
 * \brief The GetCampaignStateRequest class provides an interface for ConnectCampaigns GetCampaignState requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getCampaignState
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignStateRequest::GetCampaignStateRequest(const GetCampaignStateRequest &other)
    : ConnectCampaignsRequest(new GetCampaignStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignStateRequest object.
 */
GetCampaignStateRequest::GetCampaignStateRequest()
    : ConnectCampaignsRequest(new GetCampaignStateRequestPrivate(ConnectCampaignsRequest::GetCampaignStateAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignStateRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignStateResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateRequestPrivate
 * \brief The GetCampaignStateRequestPrivate class provides private implementation for GetCampaignStateRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetCampaignStateRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
GetCampaignStateRequestPrivate::GetCampaignStateRequestPrivate(
    const ConnectCampaignsRequest::Action action, GetCampaignStateRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignStateRequest
 * class' copy constructor.
 */
GetCampaignStateRequestPrivate::GetCampaignStateRequestPrivate(
    const GetCampaignStateRequestPrivate &other, GetCampaignStateRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
