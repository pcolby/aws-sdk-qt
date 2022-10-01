// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelsassociatedwithchannelflowrequest.h"
#include "listchannelsassociatedwithchannelflowrequest_p.h"
#include "listchannelsassociatedwithchannelflowresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelsAssociatedWithChannelFlowRequest
 * \brief The ListChannelsAssociatedWithChannelFlowRequest class provides an interface for ChimeSdkMessaging ListChannelsAssociatedWithChannelFlow requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelsAssociatedWithChannelFlow
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelsAssociatedWithChannelFlowRequest::ListChannelsAssociatedWithChannelFlowRequest(const ListChannelsAssociatedWithChannelFlowRequest &other)
    : ChimeSdkMessagingRequest(new ListChannelsAssociatedWithChannelFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelsAssociatedWithChannelFlowRequest object.
 */
ListChannelsAssociatedWithChannelFlowRequest::ListChannelsAssociatedWithChannelFlowRequest()
    : ChimeSdkMessagingRequest(new ListChannelsAssociatedWithChannelFlowRequestPrivate(ChimeSdkMessagingRequest::ListChannelsAssociatedWithChannelFlowAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelsAssociatedWithChannelFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelsAssociatedWithChannelFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelsAssociatedWithChannelFlowRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelsAssociatedWithChannelFlowResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelsAssociatedWithChannelFlowRequestPrivate
 * \brief The ListChannelsAssociatedWithChannelFlowRequestPrivate class provides private implementation for ListChannelsAssociatedWithChannelFlowRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelsAssociatedWithChannelFlowRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
ListChannelsAssociatedWithChannelFlowRequestPrivate::ListChannelsAssociatedWithChannelFlowRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, ListChannelsAssociatedWithChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelsAssociatedWithChannelFlowRequest
 * class' copy constructor.
 */
ListChannelsAssociatedWithChannelFlowRequestPrivate::ListChannelsAssociatedWithChannelFlowRequestPrivate(
    const ListChannelsAssociatedWithChannelFlowRequestPrivate &other, ListChannelsAssociatedWithChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
