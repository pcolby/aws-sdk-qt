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

#include "getconnectinstanceconfigrequest.h"
#include "getconnectinstanceconfigrequest_p.h"
#include "getconnectinstanceconfigresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetConnectInstanceConfigRequest
 * \brief The GetConnectInstanceConfigRequest class provides an interface for ConnectCampaigns GetConnectInstanceConfig requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getConnectInstanceConfig
 */

/*!
 * Constructs a copy of \a other.
 */
GetConnectInstanceConfigRequest::GetConnectInstanceConfigRequest(const GetConnectInstanceConfigRequest &other)
    : ConnectCampaignsRequest(new GetConnectInstanceConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetConnectInstanceConfigRequest object.
 */
GetConnectInstanceConfigRequest::GetConnectInstanceConfigRequest()
    : ConnectCampaignsRequest(new GetConnectInstanceConfigRequestPrivate(ConnectCampaignsRequest::GetConnectInstanceConfigAction, this))
{

}

/*!
 * \reimp
 */
bool GetConnectInstanceConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetConnectInstanceConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectInstanceConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectInstanceConfigResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::GetConnectInstanceConfigRequestPrivate
 * \brief The GetConnectInstanceConfigRequestPrivate class provides private implementation for GetConnectInstanceConfigRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetConnectInstanceConfigRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
GetConnectInstanceConfigRequestPrivate::GetConnectInstanceConfigRequestPrivate(
    const ConnectCampaignsRequest::Action action, GetConnectInstanceConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetConnectInstanceConfigRequest
 * class' copy constructor.
 */
GetConnectInstanceConfigRequestPrivate::GetConnectInstanceConfigRequestPrivate(
    const GetConnectInstanceConfigRequestPrivate &other, GetConnectInstanceConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
