// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletechannelmessagerequest.h"
#include "deletechannelmessagerequest_p.h"
#include "deletechannelmessageresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelMessageRequest
 * \brief The DeleteChannelMessageRequest class provides an interface for ChimeSdkMessaging DeleteChannelMessage requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::deleteChannelMessage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteChannelMessageRequest::DeleteChannelMessageRequest(const DeleteChannelMessageRequest &other)
    : ChimeSdkMessagingRequest(new DeleteChannelMessageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteChannelMessageRequest object.
 */
DeleteChannelMessageRequest::DeleteChannelMessageRequest()
    : ChimeSdkMessagingRequest(new DeleteChannelMessageRequestPrivate(ChimeSdkMessagingRequest::DeleteChannelMessageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteChannelMessageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteChannelMessageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteChannelMessageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteChannelMessageResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::DeleteChannelMessageRequestPrivate
 * \brief The DeleteChannelMessageRequestPrivate class provides private implementation for DeleteChannelMessageRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a DeleteChannelMessageRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
DeleteChannelMessageRequestPrivate::DeleteChannelMessageRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, DeleteChannelMessageRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteChannelMessageRequest
 * class' copy constructor.
 */
DeleteChannelMessageRequestPrivate::DeleteChannelMessageRequestPrivate(
    const DeleteChannelMessageRequestPrivate &other, DeleteChannelMessageRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
