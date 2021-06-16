/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchstartrequest.h"
#include "batchstartrequest_p.h"
#include "batchstartresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchStartRequest
 * \brief The BatchStartRequest class provides an interface for MediaLive BatchStart requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchStart
 */

/*!
 * Constructs a copy of \a other.
 */
BatchStartRequest::BatchStartRequest(const BatchStartRequest &other)
    : MediaLiveRequest(new BatchStartRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchStartRequest object.
 */
BatchStartRequest::BatchStartRequest()
    : MediaLiveRequest(new BatchStartRequestPrivate(MediaLiveRequest::BatchStartAction, this))
{

}

/*!
 * \reimp
 */
bool BatchStartRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchStartResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchStartRequest::response(QNetworkReply * const reply) const
{
    return new BatchStartResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::BatchStartRequestPrivate
 * \brief The BatchStartRequestPrivate class provides private implementation for BatchStartRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchStartRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
BatchStartRequestPrivate::BatchStartRequestPrivate(
    const MediaLiveRequest::Action action, BatchStartRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchStartRequest
 * class' copy constructor.
 */
BatchStartRequestPrivate::BatchStartRequestPrivate(
    const BatchStartRequestPrivate &other, BatchStartRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
