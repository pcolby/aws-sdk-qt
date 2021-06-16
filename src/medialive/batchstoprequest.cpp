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

#include "batchstoprequest.h"
#include "batchstoprequest_p.h"
#include "batchstopresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchStopRequest
 * \brief The BatchStopRequest class provides an interface for MediaLive BatchStop requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchStop
 */

/*!
 * Constructs a copy of \a other.
 */
BatchStopRequest::BatchStopRequest(const BatchStopRequest &other)
    : MediaLiveRequest(new BatchStopRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchStopRequest object.
 */
BatchStopRequest::BatchStopRequest()
    : MediaLiveRequest(new BatchStopRequestPrivate(MediaLiveRequest::BatchStopAction, this))
{

}

/*!
 * \reimp
 */
bool BatchStopRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchStopResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchStopRequest::response(QNetworkReply * const reply) const
{
    return new BatchStopResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::BatchStopRequestPrivate
 * \brief The BatchStopRequestPrivate class provides private implementation for BatchStopRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchStopRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
BatchStopRequestPrivate::BatchStopRequestPrivate(
    const MediaLiveRequest::Action action, BatchStopRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchStopRequest
 * class' copy constructor.
 */
BatchStopRequestPrivate::BatchStopRequestPrivate(
    const BatchStopRequestPrivate &other, BatchStopRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
