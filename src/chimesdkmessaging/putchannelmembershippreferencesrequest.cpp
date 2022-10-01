// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putchannelmembershippreferencesrequest.h"
#include "putchannelmembershippreferencesrequest_p.h"
#include "putchannelmembershippreferencesresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::PutChannelMembershipPreferencesRequest
 * \brief The PutChannelMembershipPreferencesRequest class provides an interface for ChimeSdkMessaging PutChannelMembershipPreferences requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::putChannelMembershipPreferences
 */

/*!
 * Constructs a copy of \a other.
 */
PutChannelMembershipPreferencesRequest::PutChannelMembershipPreferencesRequest(const PutChannelMembershipPreferencesRequest &other)
    : ChimeSdkMessagingRequest(new PutChannelMembershipPreferencesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutChannelMembershipPreferencesRequest object.
 */
PutChannelMembershipPreferencesRequest::PutChannelMembershipPreferencesRequest()
    : ChimeSdkMessagingRequest(new PutChannelMembershipPreferencesRequestPrivate(ChimeSdkMessagingRequest::PutChannelMembershipPreferencesAction, this))
{

}

/*!
 * \reimp
 */
bool PutChannelMembershipPreferencesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutChannelMembershipPreferencesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutChannelMembershipPreferencesRequest::response(QNetworkReply * const reply) const
{
    return new PutChannelMembershipPreferencesResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::PutChannelMembershipPreferencesRequestPrivate
 * \brief The PutChannelMembershipPreferencesRequestPrivate class provides private implementation for PutChannelMembershipPreferencesRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a PutChannelMembershipPreferencesRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
PutChannelMembershipPreferencesRequestPrivate::PutChannelMembershipPreferencesRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, PutChannelMembershipPreferencesRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutChannelMembershipPreferencesRequest
 * class' copy constructor.
 */
PutChannelMembershipPreferencesRequestPrivate::PutChannelMembershipPreferencesRequestPrivate(
    const PutChannelMembershipPreferencesRequestPrivate &other, PutChannelMembershipPreferencesRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
