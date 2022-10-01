// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendvoicemessagerequest.h"
#include "sendvoicemessagerequest_p.h"
#include "sendvoicemessageresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::SendVoiceMessageRequest
 * \brief The SendVoiceMessageRequest class provides an interface for PinpointSmsVoice SendVoiceMessage requests.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::sendVoiceMessage
 */

/*!
 * Constructs a copy of \a other.
 */
SendVoiceMessageRequest::SendVoiceMessageRequest(const SendVoiceMessageRequest &other)
    : PinpointSmsVoiceRequest(new SendVoiceMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendVoiceMessageRequest object.
 */
SendVoiceMessageRequest::SendVoiceMessageRequest()
    : PinpointSmsVoiceRequest(new SendVoiceMessageRequestPrivate(PinpointSmsVoiceRequest::SendVoiceMessageAction, this))
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
 * \class QtAws::PinpointSmsVoice::SendVoiceMessageRequestPrivate
 * \brief The SendVoiceMessageRequestPrivate class provides private implementation for SendVoiceMessageRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a SendVoiceMessageRequestPrivate object for PinpointSmsVoice \a action,
 * with public implementation \a q.
 */
SendVoiceMessageRequestPrivate::SendVoiceMessageRequestPrivate(
    const PinpointSmsVoiceRequest::Action action, SendVoiceMessageRequest * const q)
    : PinpointSmsVoiceRequestPrivate(action, q)
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
    : PinpointSmsVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoice
} // namespace QtAws
