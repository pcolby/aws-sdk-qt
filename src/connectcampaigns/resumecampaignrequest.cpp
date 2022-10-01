// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "resumecampaignrequest.h"
#include "resumecampaignrequest_p.h"
#include "resumecampaignresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::ResumeCampaignRequest
 * \brief The ResumeCampaignRequest class provides an interface for ConnectCampaigns ResumeCampaign requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::resumeCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
ResumeCampaignRequest::ResumeCampaignRequest(const ResumeCampaignRequest &other)
    : ConnectCampaignsRequest(new ResumeCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResumeCampaignRequest object.
 */
ResumeCampaignRequest::ResumeCampaignRequest()
    : ConnectCampaignsRequest(new ResumeCampaignRequestPrivate(ConnectCampaignsRequest::ResumeCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool ResumeCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResumeCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResumeCampaignRequest::response(QNetworkReply * const reply) const
{
    return new ResumeCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::ResumeCampaignRequestPrivate
 * \brief The ResumeCampaignRequestPrivate class provides private implementation for ResumeCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a ResumeCampaignRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
ResumeCampaignRequestPrivate::ResumeCampaignRequestPrivate(
    const ConnectCampaignsRequest::Action action, ResumeCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResumeCampaignRequest
 * class' copy constructor.
 */
ResumeCampaignRequestPrivate::ResumeCampaignRequestPrivate(
    const ResumeCampaignRequestPrivate &other, ResumeCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
