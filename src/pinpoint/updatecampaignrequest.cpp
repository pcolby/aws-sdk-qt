/*
    Copyright 2013-2018 Paul Colby

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

#include "updatecampaignrequest.h"
#include "updatecampaignrequest_p.h"
#include "updatecampaignresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateCampaignRequest
 * \brief The UpdateCampaignRequest class provides an interface for Pinpoint UpdateCampaign requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCampaignRequest::UpdateCampaignRequest(const UpdateCampaignRequest &other)
    : PinpointRequest(new UpdateCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCampaignRequest object.
 */
UpdateCampaignRequest::UpdateCampaignRequest()
    : PinpointRequest(new UpdateCampaignRequestPrivate(PinpointRequest::UpdateCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCampaignRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateCampaignRequestPrivate
 * \brief The UpdateCampaignRequestPrivate class provides private implementation for UpdateCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateCampaignRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateCampaignRequestPrivate::UpdateCampaignRequestPrivate(
    const PinpointRequest::Action action, UpdateCampaignRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCampaignRequest
 * class' copy constructor.
 */
UpdateCampaignRequestPrivate::UpdateCampaignRequestPrivate(
    const UpdateCampaignRequestPrivate &other, UpdateCampaignRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
