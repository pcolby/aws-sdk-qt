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

#include "verifyotpmessagerequest.h"
#include "verifyotpmessagerequest_p.h"
#include "verifyotpmessageresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::VerifyOTPMessageRequest
 * \brief The VerifyOTPMessageRequest class provides an interface for Pinpoint VerifyOTPMessage requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::verifyOTPMessage
 */

/*!
 * Constructs a copy of \a other.
 */
VerifyOTPMessageRequest::VerifyOTPMessageRequest(const VerifyOTPMessageRequest &other)
    : PinpointRequest(new VerifyOTPMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a VerifyOTPMessageRequest object.
 */
VerifyOTPMessageRequest::VerifyOTPMessageRequest()
    : PinpointRequest(new VerifyOTPMessageRequestPrivate(PinpointRequest::VerifyOTPMessageAction, this))
{

}

/*!
 * \reimp
 */
bool VerifyOTPMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a VerifyOTPMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * VerifyOTPMessageRequest::response(QNetworkReply * const reply) const
{
    return new VerifyOTPMessageResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::VerifyOTPMessageRequestPrivate
 * \brief The VerifyOTPMessageRequestPrivate class provides private implementation for VerifyOTPMessageRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a VerifyOTPMessageRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
VerifyOTPMessageRequestPrivate::VerifyOTPMessageRequestPrivate(
    const PinpointRequest::Action action, VerifyOTPMessageRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the VerifyOTPMessageRequest
 * class' copy constructor.
 */
VerifyOTPMessageRequestPrivate::VerifyOTPMessageRequestPrivate(
    const VerifyOTPMessageRequestPrivate &other, VerifyOTPMessageRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
