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
