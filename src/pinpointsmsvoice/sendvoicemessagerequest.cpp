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

#include "sendvoicemessagerequest.h"
#include "sendvoicemessagerequest_p.h"
#include "sendvoicemessageresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::SendVoiceMessageRequest
 * \brief The SendVoiceMessageRequest class provides an interface for PinpointSMSVoice SendVoiceMessage requests.
 *
 * \inmodule QtAwsPinpointSMSVoice
 *
 *
 * \sa PinpointSMSVoiceClient::sendVoiceMessage
 */

/*!
 * Constructs a copy of \a other.
 */
SendVoiceMessageRequest::SendVoiceMessageRequest(const SendVoiceMessageRequest &other)
    : PinpointSMSVoiceRequest(new SendVoiceMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendVoiceMessageRequest object.
 */
SendVoiceMessageRequest::SendVoiceMessageRequest()
    : PinpointSMSVoiceRequest(new SendVoiceMessageRequestPrivate(PinpointSMSVoiceRequest::SendVoiceMessageAction, this))
{

}

/*!
 * \reimp
 */
bool SendVoiceMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendVoiceMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendVoiceMessageRequest::response(QNetworkReply * const reply) const
{
    return new SendVoiceMessageResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSMSVoice::SendVoiceMessageRequestPrivate
 * \brief The SendVoiceMessageRequestPrivate class provides private implementation for SendVoiceMessageRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a SendVoiceMessageRequestPrivate object for PinpointSMSVoice \a action,
 * with public implementation \a q.
 */
SendVoiceMessageRequestPrivate::SendVoiceMessageRequestPrivate(
    const PinpointSMSVoiceRequest::Action action, SendVoiceMessageRequest * const q)
    : PinpointSMSVoiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendVoiceMessageRequest
 * class' copy constructor.
 */
SendVoiceMessageRequestPrivate::SendVoiceMessageRequestPrivate(
    const SendVoiceMessageRequestPrivate &other, SendVoiceMessageRequest * const q)
    : PinpointSMSVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSMSVoice
} // namespace QtAws
