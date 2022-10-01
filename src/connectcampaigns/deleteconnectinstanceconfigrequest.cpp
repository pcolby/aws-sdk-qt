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

#include "deleteconnectinstanceconfigrequest.h"
#include "deleteconnectinstanceconfigrequest_p.h"
#include "deleteconnectinstanceconfigresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DeleteConnectInstanceConfigRequest
 * \brief The DeleteConnectInstanceConfigRequest class provides an interface for ConnectCampaigns DeleteConnectInstanceConfig requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::deleteConnectInstanceConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConnectInstanceConfigRequest::DeleteConnectInstanceConfigRequest(const DeleteConnectInstanceConfigRequest &other)
    : ConnectCampaignsRequest(new DeleteConnectInstanceConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConnectInstanceConfigRequest object.
 */
DeleteConnectInstanceConfigRequest::DeleteConnectInstanceConfigRequest()
    : ConnectCampaignsRequest(new DeleteConnectInstanceConfigRequestPrivate(ConnectCampaignsRequest::DeleteConnectInstanceConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConnectInstanceConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConnectInstanceConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConnectInstanceConfigRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConnectInstanceConfigResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::DeleteConnectInstanceConfigRequestPrivate
 * \brief The DeleteConnectInstanceConfigRequestPrivate class provides private implementation for DeleteConnectInstanceConfigRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DeleteConnectInstanceConfigRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
DeleteConnectInstanceConfigRequestPrivate::DeleteConnectInstanceConfigRequestPrivate(
    const ConnectCampaignsRequest::Action action, DeleteConnectInstanceConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConnectInstanceConfigRequest
 * class' copy constructor.
 */
DeleteConnectInstanceConfigRequestPrivate::DeleteConnectInstanceConfigRequestPrivate(
    const DeleteConnectInstanceConfigRequestPrivate &other, DeleteConnectInstanceConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
