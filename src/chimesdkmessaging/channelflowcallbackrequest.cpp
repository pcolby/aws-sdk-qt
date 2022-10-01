// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "channelflowcallbackrequest.h"
#include "channelflowcallbackrequest_p.h"
#include "channelflowcallbackresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ChannelFlowCallbackRequest
 * \brief The ChannelFlowCallbackRequest class provides an interface for ChimeSdkMessaging ChannelFlowCallback requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::channelFlowCallback
 */

/*!
 * Constructs a copy of \a other.
 */
ChannelFlowCallbackRequest::ChannelFlowCallbackRequest(const ChannelFlowCallbackRequest &other)
    : ChimeSdkMessagingRequest(new ChannelFlowCallbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChannelFlowCallbackRequest object.
 */
ChannelFlowCallbackRequest::ChannelFlowCallbackRequest()
    : ChimeSdkMessagingRequest(new ChannelFlowCallbackRequestPrivate(ChimeSdkMessagingRequest::ChannelFlowCallbackAction, this))
{

}

/*!
 * \reimp
 */
bool ChannelFlowCallbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ChannelFlowCallbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ChannelFlowCallbackRequest::response(QNetworkReply * const reply) const
{
    return new ChannelFlowCallbackResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::ChannelFlowCallbackRequestPrivate
 * \brief The ChannelFlowCallbackRequestPrivate class provides private implementation for ChannelFlowCallbackRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ChannelFlowCallbackRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
ChannelFlowCallbackRequestPrivate::ChannelFlowCallbackRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, ChannelFlowCallbackRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ChannelFlowCallbackRequest
 * class' copy constructor.
 */
ChannelFlowCallbackRequestPrivate::ChannelFlowCallbackRequestPrivate(
    const ChannelFlowCallbackRequestPrivate &other, ChannelFlowCallbackRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
