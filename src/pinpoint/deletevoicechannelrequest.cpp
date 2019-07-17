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

#include "deletevoicechannelrequest.h"
#include "deletevoicechannelrequest_p.h"
#include "deletevoicechannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteVoiceChannelRequest
 * \brief The DeleteVoiceChannelRequest class provides an interface for Pinpoint DeleteVoiceChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteVoiceChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVoiceChannelRequest::DeleteVoiceChannelRequest(const DeleteVoiceChannelRequest &other)
    : PinpointRequest(new DeleteVoiceChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVoiceChannelRequest object.
 */
DeleteVoiceChannelRequest::DeleteVoiceChannelRequest()
    : PinpointRequest(new DeleteVoiceChannelRequestPrivate(PinpointRequest::DeleteVoiceChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVoiceChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVoiceChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVoiceChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVoiceChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteVoiceChannelRequestPrivate
 * \brief The DeleteVoiceChannelRequestPrivate class provides private implementation for DeleteVoiceChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteVoiceChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteVoiceChannelRequestPrivate::DeleteVoiceChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteVoiceChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVoiceChannelRequest
 * class' copy constructor.
 */
DeleteVoiceChannelRequestPrivate::DeleteVoiceChannelRequestPrivate(
    const DeleteVoiceChannelRequestPrivate &other, DeleteVoiceChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
