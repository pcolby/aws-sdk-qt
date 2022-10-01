// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopcampaignrequest.h"
#include "stopcampaignrequest_p.h"
#include "stopcampaignresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::StopCampaignRequest
 * \brief The StopCampaignRequest class provides an interface for ConnectCampaigns StopCampaign requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::stopCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
StopCampaignRequest::StopCampaignRequest(const StopCampaignRequest &other)
    : ConnectCampaignsRequest(new StopCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopCampaignRequest object.
 */
StopCampaignRequest::StopCampaignRequest()
    : ConnectCampaignsRequest(new StopCampaignRequestPrivate(ConnectCampaignsRequest::StopCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool StopCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopCampaignRequest::response(QNetworkReply * const reply) const
{
    return new StopCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::StopCampaignRequestPrivate
 * \brief The StopCampaignRequestPrivate class provides private implementation for StopCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a StopCampaignRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
StopCampaignRequestPrivate::StopCampaignRequestPrivate(
    const ConnectCampaignsRequest::Action action, StopCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopCampaignRequest
 * class' copy constructor.
 */
StopCampaignRequestPrivate::StopCampaignRequestPrivate(
    const StopCampaignRequestPrivate &other, StopCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
