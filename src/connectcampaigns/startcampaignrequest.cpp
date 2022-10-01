// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startcampaignrequest.h"
#include "startcampaignrequest_p.h"
#include "startcampaignresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::StartCampaignRequest
 * \brief The StartCampaignRequest class provides an interface for ConnectCampaigns StartCampaign requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::startCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
StartCampaignRequest::StartCampaignRequest(const StartCampaignRequest &other)
    : ConnectCampaignsRequest(new StartCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartCampaignRequest object.
 */
StartCampaignRequest::StartCampaignRequest()
    : ConnectCampaignsRequest(new StartCampaignRequestPrivate(ConnectCampaignsRequest::StartCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool StartCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartCampaignRequest::response(QNetworkReply * const reply) const
{
    return new StartCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::StartCampaignRequestPrivate
 * \brief The StartCampaignRequestPrivate class provides private implementation for StartCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a StartCampaignRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
StartCampaignRequestPrivate::StartCampaignRequestPrivate(
    const ConnectCampaignsRequest::Action action, StartCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartCampaignRequest
 * class' copy constructor.
 */
StartCampaignRequestPrivate::StartCampaignRequestPrivate(
    const StartCampaignRequestPrivate &other, StartCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
