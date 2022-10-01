// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
