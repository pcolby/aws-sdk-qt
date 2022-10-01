// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmultiplexprogramsrequest.h"
#include "listmultiplexprogramsrequest_p.h"
#include "listmultiplexprogramsresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::ListMultiplexProgramsRequest
 * \brief The ListMultiplexProgramsRequest class provides an interface for MediaLive ListMultiplexPrograms requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::listMultiplexPrograms
 */

/*!
 * Constructs a copy of \a other.
 */
ListMultiplexProgramsRequest::ListMultiplexProgramsRequest(const ListMultiplexProgramsRequest &other)
    : MediaLiveRequest(new ListMultiplexProgramsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMultiplexProgramsRequest object.
 */
ListMultiplexProgramsRequest::ListMultiplexProgramsRequest()
    : MediaLiveRequest(new ListMultiplexProgramsRequestPrivate(MediaLiveRequest::ListMultiplexProgramsAction, this))
{

}

/*!
 * \reimp
 */
bool ListMultiplexProgramsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMultiplexProgramsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMultiplexProgramsRequest::response(QNetworkReply * const reply) const
{
    return new ListMultiplexProgramsResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::ListMultiplexProgramsRequestPrivate
 * \brief The ListMultiplexProgramsRequestPrivate class provides private implementation for ListMultiplexProgramsRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a ListMultiplexProgramsRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
ListMultiplexProgramsRequestPrivate::ListMultiplexProgramsRequestPrivate(
    const MediaLiveRequest::Action action, ListMultiplexProgramsRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMultiplexProgramsRequest
 * class' copy constructor.
 */
ListMultiplexProgramsRequestPrivate::ListMultiplexProgramsRequestPrivate(
    const ListMultiplexProgramsRequestPrivate &other, ListMultiplexProgramsRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
