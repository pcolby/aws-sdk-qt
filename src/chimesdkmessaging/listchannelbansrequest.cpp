// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelbansrequest.h"
#include "listchannelbansrequest_p.h"
#include "listchannelbansresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelBansRequest
 * \brief The ListChannelBansRequest class provides an interface for ChimeSdkMessaging ListChannelBans requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::listChannelBans
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelBansRequest::ListChannelBansRequest(const ListChannelBansRequest &other)
    : ChimeSdkMessagingRequest(new ListChannelBansRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelBansRequest object.
 */
ListChannelBansRequest::ListChannelBansRequest()
    : ChimeSdkMessagingRequest(new ListChannelBansRequestPrivate(ChimeSdkMessagingRequest::ListChannelBansAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelBansRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelBansResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelBansRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelBansResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::ListChannelBansRequestPrivate
 * \brief The ListChannelBansRequestPrivate class provides private implementation for ListChannelBansRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a ListChannelBansRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
ListChannelBansRequestPrivate::ListChannelBansRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, ListChannelBansRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelBansRequest
 * class' copy constructor.
 */
ListChannelBansRequestPrivate::ListChannelBansRequestPrivate(
    const ListChannelBansRequestPrivate &other, ListChannelBansRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
