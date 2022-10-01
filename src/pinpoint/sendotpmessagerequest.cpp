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

#include "sendotpmessagerequest.h"
#include "sendotpmessagerequest_p.h"
#include "sendotpmessageresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::SendOTPMessageRequest
 * \brief The SendOTPMessageRequest class provides an interface for Pinpoint SendOTPMessage requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::sendOTPMessage
 */

/*!
 * Constructs a copy of \a other.
 */
SendOTPMessageRequest::SendOTPMessageRequest(const SendOTPMessageRequest &other)
    : PinpointRequest(new SendOTPMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendOTPMessageRequest object.
 */
SendOTPMessageRequest::SendOTPMessageRequest()
    : PinpointRequest(new SendOTPMessageRequestPrivate(PinpointRequest::SendOTPMessageAction, this))
{

}

/*!
 * \reimp
 */
bool SendOTPMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendOTPMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendOTPMessageRequest::response(QNetworkReply * const reply) const
{
    return new SendOTPMessageResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::SendOTPMessageRequestPrivate
 * \brief The SendOTPMessageRequestPrivate class provides private implementation for SendOTPMessageRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a SendOTPMessageRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
SendOTPMessageRequestPrivate::SendOTPMessageRequestPrivate(
    const PinpointRequest::Action action, SendOTPMessageRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendOTPMessageRequest
 * class' copy constructor.
 */
SendOTPMessageRequestPrivate::SendOTPMessageRequestPrivate(
    const SendOTPMessageRequestPrivate &other, SendOTPMessageRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
