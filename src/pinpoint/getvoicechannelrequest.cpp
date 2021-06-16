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

#include "getvoicechannelrequest.h"
#include "getvoicechannelrequest_p.h"
#include "getvoicechannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetVoiceChannelRequest
 * \brief The GetVoiceChannelRequest class provides an interface for Pinpoint GetVoiceChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::getVoiceChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetVoiceChannelRequest::GetVoiceChannelRequest(const GetVoiceChannelRequest &other)
    : PinpointRequest(new GetVoiceChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVoiceChannelRequest object.
 */
GetVoiceChannelRequest::GetVoiceChannelRequest()
    : PinpointRequest(new GetVoiceChannelRequestPrivate(PinpointRequest::GetVoiceChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetVoiceChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVoiceChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVoiceChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetVoiceChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetVoiceChannelRequestPrivate
 * \brief The GetVoiceChannelRequestPrivate class provides private implementation for GetVoiceChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a GetVoiceChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
GetVoiceChannelRequestPrivate::GetVoiceChannelRequestPrivate(
    const PinpointRequest::Action action, GetVoiceChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVoiceChannelRequest
 * class' copy constructor.
 */
GetVoiceChannelRequestPrivate::GetVoiceChannelRequestPrivate(
    const GetVoiceChannelRequestPrivate &other, GetVoiceChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
