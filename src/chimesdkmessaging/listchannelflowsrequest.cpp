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
