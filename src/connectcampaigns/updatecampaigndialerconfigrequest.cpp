// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
