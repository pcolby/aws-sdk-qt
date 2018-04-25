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

#include "deleteapnschannelrequest.h"
#include "deleteapnschannelrequest_p.h"
#include "deleteapnschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelRequest
 * \brief The DeleteApnsChannelRequest class provides an interface for Pinpoint DeleteApnsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteApnsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteApnsChannelRequest::DeleteApnsChannelRequest(const DeleteApnsChannelRequest &other)
    : PinpointRequest(new DeleteApnsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteApnsChannelRequest object.
 */
DeleteApnsChannelRequest::DeleteApnsChannelRequest()
    : PinpointRequest(new DeleteApnsChannelRequestPrivate(PinpointRequest::DeleteApnsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteApnsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteApnsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteApnsChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteApnsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteApnsChannelRequestPrivate
 * \brief The DeleteApnsChannelRequestPrivate class provides private implementation for DeleteApnsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a DeleteApnsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
DeleteApnsChannelRequestPrivate::DeleteApnsChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteApnsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteApnsChannelRequest
 * class' copy constructor.
 */
DeleteApnsChannelRequestPrivate::DeleteApnsChannelRequestPrivate(
    const DeleteApnsChannelRequestPrivate &other, DeleteApnsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
