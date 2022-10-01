// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelmessagestatusrequest.h"
#include "getchannelmessagestatusrequest_p.h"
#include "getchannelmessagestatusresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMessageStatusRequest
 * \brief The GetChannelMessageStatusRequest class provides an interface for ChimeSdkMessaging GetChannelMessageStatus requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::getChannelMessageStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetChannelMessageStatusRequest::GetChannelMessageStatusRequest(const GetChannelMessageStatusRequest &other)
    : ChimeSdkMessagingRequest(new GetChannelMessageStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChannelMessageStatusRequest object.
 */
GetChannelMessageStatusRequest::GetChannelMessageStatusRequest()
    : ChimeSdkMessagingRequest(new GetChannelMessageStatusRequestPrivate(ChimeSdkMessagingRequest::GetChannelMessageStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetChannelMessageStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChannelMessageStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChannelMessageStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetChannelMessageStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMessageStatusRequestPrivate
 * \brief The GetChannelMessageStatusRequestPrivate class provides private implementation for GetChannelMessageStatusRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a GetChannelMessageStatusRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
GetChannelMessageStatusRequestPrivate::GetChannelMessageStatusRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, GetChannelMessageStatusRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChannelMessageStatusRequest
 * class' copy constructor.
 */
GetChannelMessageStatusRequestPrivate::GetChannelMessageStatusRequestPrivate(
    const GetChannelMessageStatusRequestPrivate &other, GetChannelMessageStatusRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
