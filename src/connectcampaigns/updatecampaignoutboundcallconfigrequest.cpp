// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
