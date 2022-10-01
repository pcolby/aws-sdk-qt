// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listchannelsrequest.h"
#include "listchannelsrequest_p.h"
#include "listchannelsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListChannelsRequest
 * \brief The ListChannelsRequest class provides an interface for MediaLive ListChannels requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listChannels
 */

/*!
 * Constructs a copy of \a other.
 */
ListChannelsRequest::ListChannelsRequest(const ListChannelsRequest &other)
    : MediaLiveRequest(new ListChannelsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListChannelsRequest object.
 */
ListChannelsRequest::ListChannelsRequest()
    : MediaLiveRequest(new ListChannelsRequestPrivate(MediaLiveRequest::ListChannelsAction, this))
{

}

/*!
 * \reimp
 */
bool ListChannelsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListChannelsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListChannelsRequest::response(QNetworkReply * const reply) const
{
    return new ListChannelsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListChannelsRequestPrivate
 * \brief The ListChannelsRequestPrivate class provides private implementation for ListChannelsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListChannelsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const MediaLiveRequest::Action action, ListChannelsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListChannelsRequest
 * class' copy constructor.
 */
ListChannelsRequestPrivate::ListChannelsRequestPrivate(
    const ListChannelsRequestPrivate &other, ListChannelsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
