// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendchannelmessagerequest.h"
#include "sendchannelmessagerequest_p.h"
#include "sendchannelmessageresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::SendChannelMessageRequest
 * \brief The SendChannelMessageRequest class provides an interface for ChimeSdkMessaging SendChannelMessage requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::sendChannelMessage
 */

/*!
 * Constructs a copy of \a other.
 */
SendChannelMessageRequest::SendChannelMessageRequest(const SendChannelMessageRequest &other)
    : ChimeSdkMessagingRequest(new SendChannelMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendChannelMessageRequest object.
 */
SendChannelMessageRequest::SendChannelMessageRequest()
    : ChimeSdkMessagingRequest(new SendChannelMessageRequestPrivate(ChimeSdkMessagingRequest::SendChannelMessageAction, this))
{

}

/*!
 * \reimp
 */
bool SendChannelMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendChannelMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendChannelMessageRequest::response(QNetworkReply * const reply) const
{
    return new SendChannelMessageResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::SendChannelMessageRequestPrivate
 * \brief The SendChannelMessageRequestPrivate class provides private implementation for SendChannelMessageRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a SendChannelMessageRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
SendChannelMessageRequestPrivate::SendChannelMessageRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, SendChannelMessageRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendChannelMessageRequest
 * class' copy constructor.
 */
SendChannelMessageRequestPrivate::SendChannelMessageRequestPrivate(
    const SendChannelMessageRequestPrivate &other, SendChannelMessageRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
