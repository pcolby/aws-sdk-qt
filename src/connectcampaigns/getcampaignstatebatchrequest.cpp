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
