// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmessagingsessionendpointrequest.h"
#include "getmessagingsessionendpointrequest_p.h"
#include "getmessagingsessionendpointresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::GetMessagingSessionEndpointRequest
 * \brief The GetMessagingSessionEndpointRequest class provides an interface for ChimeSdkMessaging GetMessagingSessionEndpoint requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::getMessagingSessionEndpoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetMessagingSessionEndpointRequest::GetMessagingSessionEndpointRequest(const GetMessagingSessionEndpointRequest &other)
    : ChimeSdkMessagingRequest(new GetMessagingSessionEndpointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMessagingSessionEndpointRequest object.
 */
GetMessagingSessionEndpointRequest::GetMessagingSessionEndpointRequest()
    : ChimeSdkMessagingRequest(new GetMessagingSessionEndpointRequestPrivate(ChimeSdkMessagingRequest::GetMessagingSessionEndpointAction, this))
{

}

/*!
 * \reimp
 */
bool GetMessagingSessionEndpointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMessagingSessionEndpointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMessagingSessionEndpointRequest::response(QNetworkReply * const reply) const
{
    return new GetMessagingSessionEndpointResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::GetMessagingSessionEndpointRequestPrivate
 * \brief The GetMessagingSessionEndpointRequestPrivate class provides private implementation for GetMessagingSessionEndpointRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a GetMessagingSessionEndpointRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
GetMessagingSessionEndpointRequestPrivate::GetMessagingSessionEndpointRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, GetMessagingSessionEndpointRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMessagingSessionEndpointRequest
 * class' copy constructor.
 */
GetMessagingSessionEndpointRequestPrivate::GetMessagingSessionEndpointRequestPrivate(
    const GetMessagingSessionEndpointRequestPrivate &other, GetMessagingSessionEndpointRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
