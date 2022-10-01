// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelsmoderatedbyappinstanceuserrequest.h"
#include "listchannelsmoderatedbyappinstanceuserrequest_p.h"
#include "listchannelsmoderatedbyappinstanceuserresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelsModeratedByAppInstanceUserRequest
 * \brief The ListChannelsModeratedByAppInstanceUserRequest class provides an interface for ChimeSdkMessaging ListChannelsModeratedByAppInstanceUser requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelsModeratedByAppInstanceUser
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelsModeratedByAppInstanceUserRequest::ListChannelsModeratedByAppInstanceUserRequest(const ListChannelsModeratedByAppInstanceUserRequest &other)
    : ChimeSdkMessagingRequest(new ListChannelsModeratedByAppInstanceUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelsModeratedByAppInstanceUserRequest object.
 */
ListChannelsModeratedByAppInstanceUserRequest::ListChannelsModeratedByAppInstanceUserRequest()
    : ChimeSdkMessagingRequest(new ListChannelsModeratedByAppInstanceUserRequestPrivate(ChimeSdkMessagingRequest::ListChannelsModeratedByAppInstanceUserAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelsModeratedByAppInstanceUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelsModeratedByAppInstanceUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelsModeratedByAppInstanceUserRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelsModeratedByAppInstanceUserResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelsModeratedByAppInstanceUserRequestPrivate
 * \brief The ListChannelsModeratedByAppInstanceUserRequestPrivate class provides private implementation for ListChannelsModeratedByAppInstanceUserRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelsModeratedByAppInstanceUserRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
ListChannelsModeratedByAppInstanceUserRequestPrivate::ListChannelsModeratedByAppInstanceUserRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, ListChannelsModeratedByAppInstanceUserRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelsModeratedByAppInstanceUserRequest
 * class' copy constructor.
 */
ListChannelsModeratedByAppInstanceUserRequestPrivate::ListChannelsModeratedByAppInstanceUserRequestPrivate(
    const ListChannelsModeratedByAppInstanceUserRequestPrivate &other, ListChannelsModeratedByAppInstanceUserRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
