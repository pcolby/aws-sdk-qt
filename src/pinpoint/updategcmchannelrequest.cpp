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

#include "updategcmchannelrequest.h"
#include "updategcmchannelrequest_p.h"
#include "updategcmchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateGcmChannelRequest
 * \brief The UpdateGcmChannelRequest class provides an interface for Pinpoint UpdateGcmChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateGcmChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateGcmChannelRequest::UpdateGcmChannelRequest(const UpdateGcmChannelRequest &other)
    : PinpointRequest(new UpdateGcmChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateGcmChannelRequest object.
 */
UpdateGcmChannelRequest::UpdateGcmChannelRequest()
    : PinpointRequest(new UpdateGcmChannelRequestPrivate(PinpointRequest::UpdateGcmChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateGcmChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateGcmChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateGcmChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateGcmChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateGcmChannelRequestPrivate
 * \brief The UpdateGcmChannelRequestPrivate class provides private implementation for UpdateGcmChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a UpdateGcmChannelRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
UpdateGcmChannelRequestPrivate::UpdateGcmChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateGcmChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateGcmChannelRequest
 * class' copy constructor.
 */
UpdateGcmChannelRequestPrivate::UpdateGcmChannelRequestPrivate(
    const UpdateGcmChannelRequestPrivate &other, UpdateGcmChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
