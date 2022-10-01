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

#include "updatecampaignoutboundcallconfigrequest.h"
#include "updatecampaignoutboundcallconfigrequest_p.h"
#include "updatecampaignoutboundcallconfigresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignOutboundCallConfigRequest
 * \brief The UpdateCampaignOutboundCallConfigRequest class provides an interface for ConnectCampaigns UpdateCampaignOutboundCallConfig requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::updateCampaignOutboundCallConfig
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCampaignOutboundCallConfigRequest::UpdateCampaignOutboundCallConfigRequest(const UpdateCampaignOutboundCallConfigRequest &other)
    : ConnectCampaignsRequest(new UpdateCampaignOutboundCallConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCampaignOutboundCallConfigRequest object.
 */
UpdateCampaignOutboundCallConfigRequest::UpdateCampaignOutboundCallConfigRequest()
    : ConnectCampaignsRequest(new UpdateCampaignOutboundCallConfigRequestPrivate(ConnectCampaignsRequest::UpdateCampaignOutboundCallConfigAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCampaignOutboundCallConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCampaignOutboundCallConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCampaignOutboundCallConfigRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCampaignOutboundCallConfigResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignOutboundCallConfigRequestPrivate
 * \brief The UpdateCampaignOutboundCallConfigRequestPrivate class provides private implementation for UpdateCampaignOutboundCallConfigRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a UpdateCampaignOutboundCallConfigRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
UpdateCampaignOutboundCallConfigRequestPrivate::UpdateCampaignOutboundCallConfigRequestPrivate(
    const ConnectCampaignsRequest::Action action, UpdateCampaignOutboundCallConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCampaignOutboundCallConfigRequest
 * class' copy constructor.
 */
UpdateCampaignOutboundCallConfigRequestPrivate::UpdateCampaignOutboundCallConfigRequestPrivate(
    const UpdateCampaignOutboundCallConfigRequestPrivate &other, UpdateCampaignOutboundCallConfigRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
