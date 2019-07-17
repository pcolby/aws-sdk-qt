/*
    Copyright 2013-2019 Paul Colby

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

#include "batchupdateschedulerequest.h"
#include "batchupdateschedulerequest_p.h"
#include "batchupdatescheduleresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::BatchUpdateScheduleRequest
 * \brief The BatchUpdateScheduleRequest class provides an interface for MediaLive BatchUpdateSchedule requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::batchUpdateSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdateScheduleRequest::BatchUpdateScheduleRequest(const BatchUpdateScheduleRequest &other)
    : MediaLiveRequest(new BatchUpdateScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdateScheduleRequest object.
 */
BatchUpdateScheduleRequest::BatchUpdateScheduleRequest()
    : MediaLiveRequest(new BatchUpdateScheduleRequestPrivate(MediaLiveRequest::BatchUpdateScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdateScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdateScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdateScheduleRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdateScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::BatchUpdateScheduleRequestPrivate
 * \brief The BatchUpdateScheduleRequestPrivate class provides private implementation for BatchUpdateScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a BatchUpdateScheduleRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
BatchUpdateScheduleRequestPrivate::BatchUpdateScheduleRequestPrivate(
    const MediaLiveRequest::Action action, BatchUpdateScheduleRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdateScheduleRequest
 * class' copy constructor.
 */
BatchUpdateScheduleRequestPrivate::BatchUpdateScheduleRequestPrivate(
    const BatchUpdateScheduleRequestPrivate &other, BatchUpdateScheduleRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
