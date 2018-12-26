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

#include "updatevoicechannelrequest.h"
#include "updatevoicechannelrequest_p.h"
#include "updatevoicechannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateVoiceChannelRequest
 * \brief The UpdateVoiceChannelRequest class provides an interface for Pinpoint UpdateVoiceChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateVoiceChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVoiceChannelRequest::UpdateVoiceChannelRequest(const UpdateVoiceChannelRequest &other)
    : PinpointRequest(new UpdateVoiceChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVoiceChannelRequest object.
 */
UpdateVoiceChannelRequest::UpdateVoiceChannelRequest()
    : PinpointRequest(new UpdateVoiceChannelRequestPrivate(PinpointRequest::UpdateVoiceChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVoiceChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVoiceChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVoiceChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVoiceChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateVoiceChannelRequestPrivate
 * \brief The UpdateVoiceChannelRequestPrivate class provides private implementation for UpdateVoiceChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateVoiceChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateVoiceChannelRequestPrivate::UpdateVoiceChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateVoiceChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVoiceChannelRequest
 * class' copy constructor.
 */
UpdateVoiceChannelRequestPrivate::UpdateVoiceChannelRequestPrivate(
    const UpdateVoiceChannelRequestPrivate &other, UpdateVoiceChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
