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

#include "describecampaignrequest.h"
#include "describecampaignrequest_p.h"
#include "describecampaignresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::DescribeCampaignRequest
 * \brief The DescribeCampaignRequest class provides an interface for ConnectCampaigns DescribeCampaign requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::describeCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCampaignRequest::DescribeCampaignRequest(const DescribeCampaignRequest &other)
    : ConnectCampaignsRequest(new DescribeCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCampaignRequest object.
 */
DescribeCampaignRequest::DescribeCampaignRequest()
    : ConnectCampaignsRequest(new DescribeCampaignRequestPrivate(ConnectCampaignsRequest::DescribeCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCampaignRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::DescribeCampaignRequestPrivate
 * \brief The DescribeCampaignRequestPrivate class provides private implementation for DescribeCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a DescribeCampaignRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
DescribeCampaignRequestPrivate::DescribeCampaignRequestPrivate(
    const ConnectCampaignsRequest::Action action, DescribeCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCampaignRequest
 * class' copy constructor.
 */
DescribeCampaignRequestPrivate::DescribeCampaignRequestPrivate(
    const DescribeCampaignRequestPrivate &other, DescribeCampaignRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
