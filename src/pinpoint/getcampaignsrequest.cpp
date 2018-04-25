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

#include "getcampaignsrequest.h"
#include "getcampaignsrequest_p.h"
#include "getcampaignsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetCampaignsRequest
 * \brief The GetCampaignsRequest class provides an interface for Pinpoint GetCampaigns requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getCampaigns
 */

/*!
 * Constructs a copy of \a other.
 */
GetCampaignsRequest::GetCampaignsRequest(const GetCampaignsRequest &other)
    : PinpointRequest(new GetCampaignsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCampaignsRequest object.
 */
GetCampaignsRequest::GetCampaignsRequest()
    : PinpointRequest(new GetCampaignsRequestPrivate(PinpointRequest::GetCampaignsAction, this))
{

}

/*!
 * \reimp
 */
bool GetCampaignsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCampaignsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCampaignsRequest::response(QNetworkReply * const reply) const
{
    return new GetCampaignsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetCampaignsRequestPrivate
 * \brief The GetCampaignsRequestPrivate class provides private implementation for GetCampaignsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetCampaignsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetCampaignsRequestPrivate::GetCampaignsRequestPrivate(
    const PinpointRequest::Action action, GetCampaignsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCampaignsRequest
 * class' copy constructor.
 */
GetCampaignsRequestPrivate::GetCampaignsRequestPrivate(
    const GetCampaignsRequestPrivate &other, GetCampaignsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
