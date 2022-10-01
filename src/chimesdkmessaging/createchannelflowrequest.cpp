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

#include "createchannelflowrequest.h"
#include "createchannelflowrequest_p.h"
#include "createchannelflowresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelFlowRequest
 * \brief The CreateChannelFlowRequest class provides an interface for ChimeSdkMessaging CreateChannelFlow requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::createChannelFlow
 */

/*!
 * Constructs a copy of \a other.
 */
CreateChannelFlowRequest::CreateChannelFlowRequest(const CreateChannelFlowRequest &other)
    : ChimeSdkMessagingRequest(new CreateChannelFlowRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateChannelFlowRequest object.
 */
CreateChannelFlowRequest::CreateChannelFlowRequest()
    : ChimeSdkMessagingRequest(new CreateChannelFlowRequestPrivate(ChimeSdkMessagingRequest::CreateChannelFlowAction, this))
{

}

/*!
 * \reimp
 */
bool CreateChannelFlowRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateChannelFlowResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateChannelFlowRequest::response(QNetworkReply * const reply) const
{
    return new CreateChannelFlowResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::CreateChannelFlowRequestPrivate
 * \brief The CreateChannelFlowRequestPrivate class provides private implementation for CreateChannelFlowRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a CreateChannelFlowRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
CreateChannelFlowRequestPrivate::CreateChannelFlowRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, CreateChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateChannelFlowRequest
 * class' copy constructor.
 */
CreateChannelFlowRequestPrivate::CreateChannelFlowRequestPrivate(
    const CreateChannelFlowRequestPrivate &other, CreateChannelFlowRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
