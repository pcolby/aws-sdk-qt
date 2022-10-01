// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelmoderatorsrequest.h"
#include "listchannelmoderatorsrequest_p.h"
#include "listchannelmoderatorsresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelModeratorsRequest
 * \brief The ListChannelModeratorsRequest class provides an interface for ChimeSdkMessaging ListChannelModerators requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelModerators
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelModeratorsRequest::ListChannelModeratorsRequest(const ListChannelModeratorsRequest &other)
    : ChimeSdkMessagingRequest(new ListChannelModeratorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelModeratorsRequest object.
 */
ListChannelModeratorsRequest::ListChannelModeratorsRequest()
    : ChimeSdkMessagingRequest(new ListChannelModeratorsRequestPrivate(ChimeSdkMessagingRequest::ListChannelModeratorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelModeratorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelModeratorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelModeratorsRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelModeratorsResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelModeratorsRequestPrivate
 * \brief The ListChannelModeratorsRequestPrivate class provides private implementation for ListChannelModeratorsRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelModeratorsRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
ListChannelModeratorsRequestPrivate::ListChannelModeratorsRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, ListChannelModeratorsRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelModeratorsRequest
 * class' copy constructor.
 */
ListChannelModeratorsRequestPrivate::ListChannelModeratorsRequestPrivate(
    const ListChannelModeratorsRequestPrivate &other, ListChannelModeratorsRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
