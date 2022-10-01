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

#include "updatecampaignnamerequest.h"
#include "updatecampaignnamerequest_p.h"
#include "updatecampaignnameresponse.h"
#include "connectcampaignsrequest_p.h"

namespace QtAws {
namespace ConnectCampaigns {

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignNameRequest
 * \brief The UpdateCampaignNameRequest class provides an interface for ConnectCampaigns UpdateCampaignName requests.
 *
 * \inmodule QtAwsConnectCampaigns
 *
 *
 * \sa ConnectCampaignsClient::updateCampaignName
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCampaignNameRequest::UpdateCampaignNameRequest(const UpdateCampaignNameRequest &other)
    : ConnectCampaignsRequest(new UpdateCampaignNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCampaignNameRequest object.
 */
UpdateCampaignNameRequest::UpdateCampaignNameRequest()
    : ConnectCampaignsRequest(new UpdateCampaignNameRequestPrivate(ConnectCampaignsRequest::UpdateCampaignNameAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCampaignNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCampaignNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCampaignNameRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCampaignNameResponse(*this, reply);
}

/*!
 * \class QtAws::ConnectCampaigns::UpdateCampaignNameRequestPrivate
 * \brief The UpdateCampaignNameRequestPrivate class provides private implementation for UpdateCampaignNameRequest.
 * \internal
 *
 * \inmodule QtAwsConnectCampaigns
 */

/*!
 * Constructs a UpdateCampaignNameRequestPrivate object for ConnectCampaigns \a action,
 * with public implementation \a q.
 */
UpdateCampaignNameRequestPrivate::UpdateCampaignNameRequestPrivate(
    const ConnectCampaignsRequest::Action action, UpdateCampaignNameRequest * const q)
    : ConnectCampaignsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCampaignNameRequest
 * class' copy constructor.
 */
UpdateCampaignNameRequestPrivate::UpdateCampaignNameRequestPrivate(
    const UpdateCampaignNameRequestPrivate &other, UpdateCampaignNameRequest * const q)
    : ConnectCampaignsRequestPrivate(other, q)
{

}

} // namespace ConnectCampaigns
} // namespace QtAws
