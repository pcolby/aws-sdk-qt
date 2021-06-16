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

#include "getchannelsrequest.h"
#include "getchannelsrequest_p.h"
#include "getchannelsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetChannelsRequest
 * \brief The GetChannelsRequest class provides an interface for Pinpoint GetChannels requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getChannels
 */

/*!
 * Constructs a copy of \a other.
 */
GetChannelsRequest::GetChannelsRequest(const GetChannelsRequest &other)
    : PinpointRequest(new GetChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChannelsRequest object.
 */
GetChannelsRequest::GetChannelsRequest()
    : PinpointRequest(new GetChannelsRequestPrivate(PinpointRequest::GetChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool GetChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChannelsRequest::response(QNetworkReply * const reply) const
{
    return new GetChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetChannelsRequestPrivate
 * \brief The GetChannelsRequestPrivate class provides private implementation for GetChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetChannelsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetChannelsRequestPrivate::GetChannelsRequestPrivate(
    const PinpointRequest::Action action, GetChannelsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChannelsRequest
 * class' copy constructor.
 */
GetChannelsRequestPrivate::GetChannelsRequestPrivate(
    const GetChannelsRequestPrivate &other, GetChannelsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
