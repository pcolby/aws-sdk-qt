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

#include "pausecampaignrequest.h"
#include "pausecampaignrequest_p.h"
#include "pausecampaignresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::PauseCampaignRequest
 * \brief The PauseCampaignRequest class provides an interface for ConnectCampaigns PauseCampaign requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::pauseCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
PauseCampaignRequest::PauseCampaignRequest(const PauseCampaignRequest &other)
    : ConnectCampaignsRequest(new PauseCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PauseCampaignRequest object.
 */
PauseCampaignRequest::PauseCampaignRequest()
    : ConnectCampaignsRequest(new PauseCampaignRequestPrivate(ConnectCampaignsRequest::PauseCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool PauseCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PauseCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PauseCampaignRequest::response(QNetworkReply * const reply) const
{
    return new PauseCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::PauseCampaignRequestPrivate
 * \brief The PauseCampaignRequestPrivate class provides private implementation for PauseCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a PauseCampaignRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
PauseCampaignRequestPrivate::PauseCampaignRequestPrivate(
    const ConnectCampaignsRequest::Action action, PauseCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PauseCampaignRequest
 * class' copy constructor.
 */
PauseCampaignRequestPrivate::PauseCampaignRequestPrivate(
    const PauseCampaignRequestPrivate &other, PauseCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
