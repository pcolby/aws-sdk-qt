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
