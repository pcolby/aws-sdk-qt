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

#include "deleteapnsvoipchannelrequest.h"
#include "deleteapnsvoipchannelrequest_p.h"
#include "deleteapnsvoipchannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelRequest
 * \brief The DeleteApnsVoipChannelRequest class provides an interface for Pinpoint DeleteApnsVoipChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteApnsVoipChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApnsVoipChannelRequest::DeleteApnsVoipChannelRequest(const DeleteApnsVoipChannelRequest &other)
    : PinpointRequest(new DeleteApnsVoipChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApnsVoipChannelRequest object.
 */
DeleteApnsVoipChannelRequest::DeleteApnsVoipChannelRequest()
    : PinpointRequest(new DeleteApnsVoipChannelRequestPrivate(PinpointRequest::DeleteApnsVoipChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsVoipChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApnsVoipChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsVoipChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsVoipChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsVoipChannelRequestPrivate
 * \brief The DeleteApnsVoipChannelRequestPrivate class provides private implementation for DeleteApnsVoipChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a DeleteApnsVoipChannelRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
DeleteApnsVoipChannelRequestPrivate::DeleteApnsVoipChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsVoipChannelRequest
 * class' copy constructor.
 */
DeleteApnsVoipChannelRequestPrivate::DeleteApnsVoipChannelRequestPrivate(
    const DeleteApnsVoipChannelRequestPrivate &other, DeleteApnsVoipChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
