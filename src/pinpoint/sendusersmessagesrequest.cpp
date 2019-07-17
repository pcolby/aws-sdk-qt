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

#include "sendusersmessagesrequest.h"
#include "sendusersmessagesrequest_p.h"
#include "sendusersmessagesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesRequest
 * \brief The SendUsersMessagesRequest class provides an interface for Pinpoint SendUsersMessages requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *
 * \sa PinpointClient::sendUsersMessages
 */

/*!
 * Constructs a copy of \a other.
 */
SendUsersMessagesRequest::SendUsersMessagesRequest(const SendUsersMessagesRequest &other)
    : PinpointRequest(new SendUsersMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendUsersMessagesRequest object.
 */
SendUsersMessagesRequest::SendUsersMessagesRequest()
    : PinpointRequest(new SendUsersMessagesRequestPrivate(PinpointRequest::SendUsersMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool SendUsersMessagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendUsersMessagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendUsersMessagesRequest::response(QNetworkReply * const reply) const
{
    return new SendUsersMessagesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::SendUsersMessagesRequestPrivate
 * \brief The SendUsersMessagesRequestPrivate class provides private implementation for SendUsersMessagesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendUsersMessagesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
SendUsersMessagesRequestPrivate::SendUsersMessagesRequestPrivate(
    const PinpointRequest::Action action, SendUsersMessagesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendUsersMessagesRequest
 * class' copy constructor.
 */
SendUsersMessagesRequestPrivate::SendUsersMessagesRequestPrivate(
    const SendUsersMessagesRequestPrivate &other, SendUsersMessagesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
