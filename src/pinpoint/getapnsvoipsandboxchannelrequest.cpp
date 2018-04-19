/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getapnsvoipsandboxchannelrequest.h"
#include "getapnsvoipsandboxchannelrequest_p.h"
#include "getapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::GetApnsVoipSandboxChannelRequest
 * \brief The GetApnsVoipSandboxChannelRequest class provides an interface for Pinpoint GetApnsVoipSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::getApnsVoipSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
GetApnsVoipSandboxChannelRequest::GetApnsVoipSandboxChannelRequest(const GetApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new GetApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetApnsVoipSandboxChannelRequest object.
 */
GetApnsVoipSandboxChannelRequest::GetApnsVoipSandboxChannelRequest()
    : PinpointRequest(new GetApnsVoipSandboxChannelRequestPrivate(PinpointRequest::GetApnsVoipSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool GetApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetApnsVoipSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new GetApnsVoipSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::GetApnsVoipSandboxChannelRequestPrivate
 * \brief The GetApnsVoipSandboxChannelRequestPrivate class provides private implementation for GetApnsVoipSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a GetApnsVoipSandboxChannelRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
GetApnsVoipSandboxChannelRequestPrivate::GetApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, GetApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetApnsVoipSandboxChannelRequest
 * class' copy constructor.
 */
GetApnsVoipSandboxChannelRequestPrivate::GetApnsVoipSandboxChannelRequestPrivate(
    const GetApnsVoipSandboxChannelRequestPrivate &other, GetApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
