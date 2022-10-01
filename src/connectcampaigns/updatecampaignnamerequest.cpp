// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecampaignnamerequest.h"
#include "updatecampaignnamerequest_p.h"
#include "updatecampaignnameresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignNameRequest
 * \brief The UpdateCampaignNameRequest class provides an interface for ConnectCampaigns UpdateCampaignName requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::updateCampaignName
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCampaignNameRequest::UpdateCampaignNameRequest(const UpdateCampaignNameRequest &other)
    : ConnectCampaignsRequest(new UpdateCampaignNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCampaignNameRequest object.
 */
UpdateCampaignNameRequest::UpdateCampaignNameRequest()
    : ConnectCampaignsRequest(new UpdateCampaignNameRequestPrivate(ConnectCampaignsRequest::UpdateCampaignNameAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCampaignNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCampaignNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCampaignNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCampaignNameResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignNameRequestPrivate
 * \brief The UpdateCampaignNameRequestPrivate class provides private implementation for UpdateCampaignNameRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a UpdateCampaignNameRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
UpdateCampaignNameRequestPrivate::UpdateCampaignNameRequestPrivate(
    const ConnectCampaignsRequest::Action action, UpdateCampaignNameRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCampaignNameRequest
 * class' copy constructor.
 */
UpdateCampaignNameRequestPrivate::UpdateCampaignNameRequestPrivate(
    const UpdateCampaignNameRequestPrivate &other, UpdateCampaignNameRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
