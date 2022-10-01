// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
