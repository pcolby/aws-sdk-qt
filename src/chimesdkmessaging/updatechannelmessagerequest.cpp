// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatechannelmessagerequest.h"
#include "updatechannelmessagerequest_p.h"
#include "updatechannelmessageresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelMessageRequest
 * \brief The UpdateChannelMessageRequest class provides an interface for ChimeSdkMessaging UpdateChannelMessage requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::updateChannelMessage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateChannelMessageRequest::UpdateChannelMessageRequest(const UpdateChannelMessageRequest &other)
    : ChimeSdkMessagingRequest(new UpdateChannelMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateChannelMessageRequest object.
 */
UpdateChannelMessageRequest::UpdateChannelMessageRequest()
    : ChimeSdkMessagingRequest(new UpdateChannelMessageRequestPrivate(ChimeSdkMessagingRequest::UpdateChannelMessageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateChannelMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateChannelMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateChannelMessageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateChannelMessageResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::UpdateChannelMessageRequestPrivate
 * \brief The UpdateChannelMessageRequestPrivate class provides private implementation for UpdateChannelMessageRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a UpdateChannelMessageRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
UpdateChannelMessageRequestPrivate::UpdateChannelMessageRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, UpdateChannelMessageRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateChannelMessageRequest
 * class' copy constructor.
 */
UpdateChannelMessageRequestPrivate::UpdateChannelMessageRequestPrivate(
    const UpdateChannelMessageRequestPrivate &other, UpdateChannelMessageRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
