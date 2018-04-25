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

#include "deleteapnsvoipsandboxchannelrequest.h"
#include "deleteapnsvoipsandboxchannelrequest_p.h"
#include "deleteapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipSandboxChannelRequest
 * \brief The DeleteApnsVoipSandboxChannelRequest class provides an interface for Pinpoint DeleteApnsVoipSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteApnsVoipSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApnsVoipSandboxChannelRequest::DeleteApnsVoipSandboxChannelRequest(const DeleteApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new DeleteApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApnsVoipSandboxChannelRequest object.
 */
DeleteApnsVoipSandboxChannelRequest::DeleteApnsVoipSandboxChannelRequest()
    : PinpointRequest(new DeleteApnsVoipSandboxChannelRequestPrivate(PinpointRequest::DeleteApnsVoipSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApnsVoipSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsVoipSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipSandboxChannelRequestPrivate
 * \brief The DeleteApnsVoipSandboxChannelRequestPrivate class provides private implementation for DeleteApnsVoipSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsVoipSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteApnsVoipSandboxChannelRequestPrivate::DeleteApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsVoipSandboxChannelRequest
 * class' copy constructor.
 */
DeleteApnsVoipSandboxChannelRequestPrivate::DeleteApnsVoipSandboxChannelRequestPrivate(
    const DeleteApnsVoipSandboxChannelRequestPrivate &other, DeleteApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
