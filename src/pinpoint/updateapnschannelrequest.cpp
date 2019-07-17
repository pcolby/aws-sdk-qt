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

#include "updateapnschannelrequest.h"
#include "updateapnschannelrequest_p.h"
#include "updateapnschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateApnsChannelRequest
 * \brief The UpdateApnsChannelRequest class provides an interface for Pinpoint UpdateApnsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::updateApnsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateApnsChannelRequest::UpdateApnsChannelRequest(const UpdateApnsChannelRequest &other)
    : PinpointRequest(new UpdateApnsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateApnsChannelRequest object.
 */
UpdateApnsChannelRequest::UpdateApnsChannelRequest()
    : PinpointRequest(new UpdateApnsChannelRequestPrivate(PinpointRequest::UpdateApnsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateApnsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateApnsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateApnsChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateApnsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateApnsChannelRequestPrivate
 * \brief The UpdateApnsChannelRequestPrivate class provides private implementation for UpdateApnsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateApnsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateApnsChannelRequestPrivate::UpdateApnsChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateApnsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateApnsChannelRequest
 * class' copy constructor.
 */
UpdateApnsChannelRequestPrivate::UpdateApnsChannelRequestPrivate(
    const UpdateApnsChannelRequestPrivate &other, UpdateApnsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
