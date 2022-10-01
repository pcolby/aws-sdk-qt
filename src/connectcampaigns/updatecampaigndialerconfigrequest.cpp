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

#include "updatecampaigndialerconfigrequest.h"
#include "updatecampaigndialerconfigrequest_p.h"
#include "updatecampaigndialerconfigresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignDialerConfigRequest
 * \brief The UpdateCampaignDialerConfigRequest class provides an interface for ConnectCampaigns UpdateCampaignDialerConfig requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::updateCampaignDialerConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCampaignDialerConfigRequest::UpdateCampaignDialerConfigRequest(const UpdateCampaignDialerConfigRequest &other)
    : ConnectCampaignsRequest(new UpdateCampaignDialerConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCampaignDialerConfigRequest object.
 */
UpdateCampaignDialerConfigRequest::UpdateCampaignDialerConfigRequest()
    : ConnectCampaignsRequest(new UpdateCampaignDialerConfigRequestPrivate(ConnectCampaignsRequest::UpdateCampaignDialerConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCampaignDialerConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCampaignDialerConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCampaignDialerConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCampaignDialerConfigResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignDialerConfigRequestPrivate
 * \brief The UpdateCampaignDialerConfigRequestPrivate class provides private implementation for UpdateCampaignDialerConfigRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a UpdateCampaignDialerConfigRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
UpdateCampaignDialerConfigRequestPrivate::UpdateCampaignDialerConfigRequestPrivate(
    const ConnectCampaignsRequest::Action action, UpdateCampaignDialerConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCampaignDialerConfigRequest
 * class' copy constructor.
 */
UpdateCampaignDialerConfigRequestPrivate::UpdateCampaignDialerConfigRequestPrivate(
    const UpdateCampaignDialerConfigRequestPrivate &other, UpdateCampaignDialerConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
