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

#include "getapnssandboxchannelrequest.h"
#include "getapnssandboxchannelrequest_p.h"
#include "getapnssandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelRequest
 * \brief The GetApnsSandboxChannelRequest class provides an interface for Pinpoint GetApnsSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getApnsSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetApnsSandboxChannelRequest::GetApnsSandboxChannelRequest(const GetApnsSandboxChannelRequest &other)
    : PinpointRequest(new GetApnsSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApnsSandboxChannelRequest object.
 */
GetApnsSandboxChannelRequest::GetApnsSandboxChannelRequest()
    : PinpointRequest(new GetApnsSandboxChannelRequestPrivate(PinpointRequest::GetApnsSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetApnsSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApnsSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApnsSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApnsSandboxChannelRequestPrivate
 * \brief The GetApnsSandboxChannelRequestPrivate class provides private implementation for GetApnsSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetApnsSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetApnsSandboxChannelRequestPrivate::GetApnsSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApnsSandboxChannelRequest
 * class' copy constructor.
 */
GetApnsSandboxChannelRequestPrivate::GetApnsSandboxChannelRequestPrivate(
    const GetApnsSandboxChannelRequestPrivate &other, GetApnsSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
