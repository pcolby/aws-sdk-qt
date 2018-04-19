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

#include "deletesmschannelrequest.h"
#include "deletesmschannelrequest_p.h"
#include "deletesmschannelresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::DeleteSmsChannelRequest
 * \brief The DeleteSmsChannelRequest class provides an interface for Pinpoint DeleteSmsChannel requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::deleteSmsChannel
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSmsChannelRequest::DeleteSmsChannelRequest(const DeleteSmsChannelRequest &other)
    : PinpointRequest(new DeleteSmsChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSmsChannelRequest object.
 */
DeleteSmsChannelRequest::DeleteSmsChannelRequest()
    : PinpointRequest(new DeleteSmsChannelRequestPrivate(PinpointRequest::DeleteSmsChannelAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSmsChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSmsChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSmsChannelRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSmsChannelResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::DeleteSmsChannelRequestPrivate
 * \brief The DeleteSmsChannelRequestPrivate class provides private implementation for DeleteSmsChannelRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 *
 * Constructs a DeleteSmsChannelRequestPrivate object for Pinpoint \a action with,
 * public implementation \a q.
 */
DeleteSmsChannelRequestPrivate::DeleteSmsChannelRequestPrivate(
    const PinpointRequest::Action action, DeleteSmsChannelRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSmsChannelRequest
 * class' copy constructor.
 */
DeleteSmsChannelRequestPrivate::DeleteSmsChannelRequestPrivate(
    const DeleteSmsChannelRequestPrivate &other, DeleteSmsChannelRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
