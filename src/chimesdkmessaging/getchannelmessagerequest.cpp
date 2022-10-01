// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelmessagerequest.h"
#include "getchannelmessagerequest_p.h"
#include "getchannelmessageresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMessageRequest
 * \brief The GetChannelMessageRequest class provides an interface for ChimeSdkMessaging GetChannelMessage requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::getChannelMessage
 */

/*!
 * Constructs a copy of \a other.
 */
GetChannelMessageRequest::GetChannelMessageRequest(const GetChannelMessageRequest &other)
    : ChimeSdkMessagingRequest(new GetChannelMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChannelMessageRequest object.
 */
GetChannelMessageRequest::GetChannelMessageRequest()
    : ChimeSdkMessagingRequest(new GetChannelMessageRequestPrivate(ChimeSdkMessagingRequest::GetChannelMessageAction, this))
{

}

/*!
 * \reimp
 */
bool GetChannelMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChannelMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChannelMessageRequest::response(QNetworkReply * const reply) const
{
    return new GetChannelMessageResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMessageRequestPrivate
 * \brief The GetChannelMessageRequestPrivate class provides private implementation for GetChannelMessageRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a GetChannelMessageRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
GetChannelMessageRequestPrivate::GetChannelMessageRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, GetChannelMessageRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChannelMessageRequest
 * class' copy constructor.
 */
GetChannelMessageRequestPrivate::GetChannelMessageRequestPrivate(
    const GetChannelMessageRequestPrivate &other, GetChannelMessageRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
