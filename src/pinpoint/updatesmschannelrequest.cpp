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

#include "updatesmschannelrequest.h"
#include "updatesmschannelrequest_p.h"
#include "updatesmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::UpdateSmsChannelRequest
 * \brief The UpdateSmsChannelRequest class provides an interface for Pinpoint UpdateSmsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::updateSmsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSmsChannelRequest::UpdateSmsChannelRequest(const UpdateSmsChannelRequest &other)
    : PinpointRequest(new UpdateSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSmsChannelRequest object.
 */
UpdateSmsChannelRequest::UpdateSmsChannelRequest()
    : PinpointRequest(new UpdateSmsChannelRequestPrivate(PinpointRequest::UpdateSmsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSmsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSmsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSmsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::UpdateSmsChannelRequestPrivate
 * \brief The UpdateSmsChannelRequestPrivate class provides private implementation for UpdateSmsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a UpdateSmsChannelRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
UpdateSmsChannelRequestPrivate::UpdateSmsChannelRequestPrivate(
    const PinpointRequest::Action action, UpdateSmsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSmsChannelRequest
 * class' copy constructor.
 */
UpdateSmsChannelRequestPrivate::UpdateSmsChannelRequestPrivate(
    const UpdateSmsChannelRequestPrivate &other, UpdateSmsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
