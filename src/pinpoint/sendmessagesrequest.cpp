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

#include "sendmessagesrequest.h"
#include "sendmessagesrequest_p.h"
#include "sendmessagesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendMessagesRequest
 * \brief The SendMessagesRequest class provides an interface for Pinpoint SendMessages requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::sendMessages
 */

/*!
 * Constructs a copy of \a other.
 */
SendMessagesRequest::SendMessagesRequest(const SendMessagesRequest &other)
    : PinpointRequest(new SendMessagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendMessagesRequest object.
 */
SendMessagesRequest::SendMessagesRequest()
    : PinpointRequest(new SendMessagesRequestPrivate(PinpointRequest::SendMessagesAction, this))
{

}

/*!
 * \reimp
 */
bool SendMessagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendMessagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendMessagesRequest::response(QNetworkReply * const reply) const
{
    return new SendMessagesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::SendMessagesRequestPrivate
 * \brief The SendMessagesRequestPrivate class provides private implementation for SendMessagesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendMessagesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
SendMessagesRequestPrivate::SendMessagesRequestPrivate(
    const PinpointRequest::Action action, SendMessagesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendMessagesRequest
 * class' copy constructor.
 */
SendMessagesRequestPrivate::SendMessagesRequestPrivate(
    const SendMessagesRequestPrivate &other, SendMessagesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
