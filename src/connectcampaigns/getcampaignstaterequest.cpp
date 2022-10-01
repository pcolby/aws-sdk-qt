// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignstaterequest.h"
#include "getcampaignstaterequest_p.h"
#include "getcampaignstateresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateRequest
 * \brief The GetCampaignStateRequest class provides an interface for ConnectCampaigns GetCampaignState requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getCampaignState
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignStateRequest::GetCampaignStateRequest(const GetCampaignStateRequest &other)
    : ConnectCampaignsRequest(new GetCampaignStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignStateRequest object.
 */
GetCampaignStateRequest::GetCampaignStateRequest()
    : ConnectCampaignsRequest(new GetCampaignStateRequestPrivate(ConnectCampaignsRequest::GetCampaignStateAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignStateRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignStateResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateRequestPrivate
 * \brief The GetCampaignStateRequestPrivate class provides private implementation for GetCampaignStateRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetCampaignStateRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
GetCampaignStateRequestPrivate::GetCampaignStateRequestPrivate(
    const ConnectCampaignsRequest::Action action, GetCampaignStateRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignStateRequest
 * class' copy constructor.
 */
GetCampaignStateRequestPrivate::GetCampaignStateRequestPrivate(
    const GetCampaignStateRequestPrivate &other, GetCampaignStateRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
