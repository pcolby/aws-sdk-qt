// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcampaignstatebatchrequest.h"
#include "getcampaignstatebatchrequest_p.h"
#include "getcampaignstatebatchresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateBatchRequest
 * \brief The GetCampaignStateBatchRequest class provides an interface for ConnectCampaigns GetCampaignStateBatch requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::getCampaignStateBatch
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignStateBatchRequest::GetCampaignStateBatchRequest(const GetCampaignStateBatchRequest &other)
    : ConnectCampaignsRequest(new GetCampaignStateBatchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignStateBatchRequest object.
 */
GetCampaignStateBatchRequest::GetCampaignStateBatchRequest()
    : ConnectCampaignsRequest(new GetCampaignStateBatchRequestPrivate(ConnectCampaignsRequest::GetCampaignStateBatchAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignStateBatchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignStateBatchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignStateBatchRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignStateBatchResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::GetCampaignStateBatchRequestPrivate
 * \brief The GetCampaignStateBatchRequestPrivate class provides private implementation for GetCampaignStateBatchRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a GetCampaignStateBatchRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
GetCampaignStateBatchRequestPrivate::GetCampaignStateBatchRequestPrivate(
    const ConnectCampaignsRequest::Action action, GetCampaignStateBatchRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignStateBatchRequest
 * class' copy constructor.
 */
GetCampaignStateBatchRequestPrivate::GetCampaignStateBatchRequestPrivate(
    const GetCampaignStateBatchRequestPrivate &other, GetCampaignStateBatchRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
