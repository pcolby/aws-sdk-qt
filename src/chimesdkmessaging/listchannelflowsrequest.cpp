// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelflowsrequest.h"
#include "listchannelflowsrequest_p.h"
#include "listchannelflowsresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelFlowsRequest
 * \brief The ListChannelFlowsRequest class provides an interface for ChimeSdkMessaging ListChannelFlows requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelFlows
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelFlowsRequest::ListChannelFlowsRequest(const ListChannelFlowsRequest &other)
    : ChimeSdkMessagingRequest(new ListChannelFlowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelFlowsRequest object.
 */
ListChannelFlowsRequest::ListChannelFlowsRequest()
    : ChimeSdkMessagingRequest(new ListChannelFlowsRequestPrivate(ChimeSdkMessagingRequest::ListChannelFlowsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelFlowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelFlowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelFlowsRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelFlowsResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelFlowsRequestPrivate
 * \brief The ListChannelFlowsRequestPrivate class provides private implementation for ListChannelFlowsRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelFlowsRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
ListChannelFlowsRequestPrivate::ListChannelFlowsRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, ListChannelFlowsRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelFlowsRequest
 * class' copy constructor.
 */
ListChannelFlowsRequestPrivate::ListChannelFlowsRequestPrivate(
    const ListChannelFlowsRequestPrivate &other, ListChannelFlowsRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
