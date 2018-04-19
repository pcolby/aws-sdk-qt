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

#include "updateapnsvoipsandboxchannelrequest.h"
#include "updateapnsvoipsandboxchannelrequest_p.h"
#include "updateapnsvoipsandboxchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelRequest
 * \brief The UpdateApnsVoipSandboxChannelRequest class provides an interface for Pinpoint UpdateApnsVoipSandboxChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateApnsVoipSandboxChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApnsVoipSandboxChannelRequest::UpdateApnsVoipSandboxChannelRequest(const UpdateApnsVoipSandboxChannelRequest &other)
    : PinpointRequest(new UpdateApnsVoipSandboxChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApnsVoipSandboxChannelRequest object.
 */
UpdateApnsVoipSandboxChannelRequest::UpdateApnsVoipSandboxChannelRequest()
    : PinpointRequest(new UpdateApnsVoipSandboxChannelRequestPrivate(PinpointRequest::UpdateApnsVoipSandboxChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsVoipSandboxChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApnsVoipSandboxChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsVoipSandboxChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsVoipSandboxChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipSandboxChannelRequestPrivate
 * \brief The UpdateApnsVoipSandboxChannelRequestPrivate class provides private implementation for UpdateApnsVoipSandboxChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsVoipSandboxChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApnsVoipSandboxChannelRequestPrivate::UpdateApnsVoipSandboxChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsVoipSandboxChannelRequest
 * class' copy constructor.
 */
UpdateApnsVoipSandboxChannelRequestPrivate::UpdateApnsVoipSandboxChannelRequestPrivate(
    const UpdateApnsVoipSandboxChannelRequestPrivate &other, UpdateApnsVoipSandboxChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
