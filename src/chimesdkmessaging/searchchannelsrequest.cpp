// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchchannelsrequest.h"
#include "searchchannelsrequest_p.h"
#include "searchchannelsresponse.h"
#include "chimesdkmessagingrequest_p.h"

namespace QtAws {
namespace ChimeSdkMessaging {

/*!
 * \class QtAws::ChimeSdkMessaging::SearchChannelsRequest
 * \brief The SearchChannelsRequest class provides an interface for ChimeSdkMessaging SearchChannels requests.
 *
 * \inmodule QtAwsChimeSdkMessaging
 *
 *  The Amazon Chime SDK Messaging APIs in this section allow software developers to send and receive messages in custom
 *  messaging applications. These APIs depend on the frameworks provided by the Amazon Chime SDK Identity APIs. For more
 *  information about the messaging APIs, see <a
 *  href="https://docs.aws.amazon.com/chime/latest/APIReference/API_Operations_Amazon_Chime_SDK_Messaging.html">Amazon Chime
 *  SDK
 *
 * \sa ChimeSdkMessagingClient::searchChannels
 */

/*!
 * Constructs a copy of \a other.
 */
SearchChannelsRequest::SearchChannelsRequest(const SearchChannelsRequest &other)
    : ChimeSdkMessagingRequest(new SearchChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchChannelsRequest object.
 */
SearchChannelsRequest::SearchChannelsRequest()
    : ChimeSdkMessagingRequest(new SearchChannelsRequestPrivate(ChimeSdkMessagingRequest::SearchChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool SearchChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchChannelsRequest::response(QNetworkReply * const reply) const
{
    return new SearchChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::ChimeSdkMessaging::SearchChannelsRequestPrivate
 * \brief The SearchChannelsRequestPrivate class provides private implementation for SearchChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsChimeSdkMessaging
 */

/*!
 * Constructs a SearchChannelsRequestPrivate object for ChimeSdkMessaging \a action,
 * with public implementation \a q.
 */
SearchChannelsRequestPrivate::SearchChannelsRequestPrivate(
    const ChimeSdkMessagingRequest::Action action, SearchChannelsRequest * const q)
    : ChimeSdkMessagingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchChannelsRequest
 * class' copy constructor.
 */
SearchChannelsRequestPrivate::SearchChannelsRequestPrivate(
    const SearchChannelsRequestPrivate &other, SearchChannelsRequest * const q)
    : ChimeSdkMessagingRequestPrivate(other, q)
{

}

} // namespace ChimeSdkMessaging
} // namespace QtAws
