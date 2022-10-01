// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmultiplexesrequest.h"
#include "listmultiplexesrequest_p.h"
#include "listmultiplexesresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListMultiplexesRequest
 * \brief The ListMultiplexesRequest class provides an interface for MediaLive ListMultiplexes requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listMultiplexes
 */

/*!
 * Constructs a copy of \a other.
 */
ListMultiplexesRequest::ListMultiplexesRequest(const ListMultiplexesRequest &other)
    : MediaLiveRequest(new ListMultiplexesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMultiplexesRequest object.
 */
ListMultiplexesRequest::ListMultiplexesRequest()
    : MediaLiveRequest(new ListMultiplexesRequestPrivate(MediaLiveRequest::ListMultiplexesAction, this))
{

}

/*!
 * \reimp
 */
bool ListMultiplexesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMultiplexesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMultiplexesRequest::response(QNetworkReply * const reply) const
{
    return new ListMultiplexesResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListMultiplexesRequestPrivate
 * \brief The ListMultiplexesRequestPrivate class provides private implementation for ListMultiplexesRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListMultiplexesRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListMultiplexesRequestPrivate::ListMultiplexesRequestPrivate(
    const MediaLiveRequest::Action action, ListMultiplexesRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMultiplexesRequest
 * class' copy constructor.
 */
ListMultiplexesRequestPrivate::ListMultiplexesRequestPrivate(
    const ListMultiplexesRequestPrivate &other, ListMultiplexesRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
