// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getchannelmembershippreferencesrequest.h"
#include "getchannelmembershippreferencesrequest_p.h"
#include "getchannelmembershippreferencesresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMembershipPreferencesRequest
 * \brief The GetChannelMembershipPreferencesRequest class provides an interface for ChimeSdkMessaging GetChannelMembershipPreferences requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::getChannelMembershipPreferences
 */

/*!
 * Constructs a copy of \a other.
 */
GetChannelMembershipPreferencesRequest::GetChannelMembershipPreferencesRequest(const GetChannelMembershipPreferencesRequest &other)
    : ChimeSdkMessagingRequest(new GetChannelMembershipPreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetChannelMembershipPreferencesRequest object.
 */
GetChannelMembershipPreferencesRequest::GetChannelMembershipPreferencesRequest()
    : ChimeSdkMessagingRequest(new GetChannelMembershipPreferencesRequestPrivate(ChimeSdkMessagingRequest::GetChannelMembershipPreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool GetChannelMembershipPreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetChannelMembershipPreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetChannelMembershipPreferencesRequest::response(QNetworkReply * const reply) const
{
    return new GetChannelMembershipPreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::GetChannelMembershipPreferencesRequestPrivate
 * \brief The GetChannelMembershipPreferencesRequestPrivate class provides private implementation for GetChannelMembershipPreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a GetChannelMembershipPreferencesRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
GetChannelMembershipPreferencesRequestPrivate::GetChannelMembershipPreferencesRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, GetChannelMembershipPreferencesRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetChannelMembershipPreferencesRequest
 * class' copy constructor.
 */
GetChannelMembershipPreferencesRequestPrivate::GetChannelMembershipPreferencesRequestPrivate(
    const GetChannelMembershipPreferencesRequestPrivate &other, GetChannelMembershipPreferencesRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
