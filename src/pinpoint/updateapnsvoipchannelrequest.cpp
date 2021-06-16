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

#include "updateapnsvoipchannelrequest.h"
#include "updateapnsvoipchannelrequest_p.h"
#include "updateapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipChannelRequest
 * \brief The UpdateApnsVoipChannelRequest class provides an interface for Pinpoint UpdateApnsVoipChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateApnsVoipChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApnsVoipChannelRequest::UpdateApnsVoipChannelRequest(const UpdateApnsVoipChannelRequest &other)
    : PinpointRequest(new UpdateApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApnsVoipChannelRequest object.
 */
UpdateApnsVoipChannelRequest::UpdateApnsVoipChannelRequest()
    : PinpointRequest(new UpdateApnsVoipChannelRequestPrivate(PinpointRequest::UpdateApnsVoipChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsVoipChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApnsVoipChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsVoipChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsVoipChannelRequestPrivate
 * \brief The UpdateApnsVoipChannelRequestPrivate class provides private implementation for UpdateApnsVoipChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsVoipChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApnsVoipChannelRequestPrivate::UpdateApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsVoipChannelRequest
 * class' copy constructor.
 */
UpdateApnsVoipChannelRequestPrivate::UpdateApnsVoipChannelRequestPrivate(
    const UpdateApnsVoipChannelRequestPrivate &other, UpdateApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
