/*
    Copyright 2013-2019 Paul Colby

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

#include "getcampaignrequest.h"
#include "getcampaignrequest_p.h"
#include "getcampaignresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignRequest
 * \brief The GetCampaignRequest class provides an interface for Pinpoint GetCampaign requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getCampaign
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignRequest::GetCampaignRequest(const GetCampaignRequest &other)
    : PinpointRequest(new GetCampaignRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignRequest object.
 */
GetCampaignRequest::GetCampaignRequest()
    : PinpointRequest(new GetCampaignRequestPrivate(PinpointRequest::GetCampaignAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignRequestPrivate
 * \brief The GetCampaignRequestPrivate class provides private implementation for GetCampaignRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignRequestPrivate::GetCampaignRequestPrivate(
    const PinpointRequest::Action action, GetCampaignRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignRequest
 * class' copy constructor.
 */
GetCampaignRequestPrivate::GetCampaignRequestPrivate(
    const GetCampaignRequestPrivate &other, GetCampaignRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
