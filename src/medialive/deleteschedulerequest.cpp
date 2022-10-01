// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteschedulerequest.h"
#include "deleteschedulerequest_p.h"
#include "deletescheduleresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DeleteScheduleRequest
 * \brief The DeleteScheduleRequest class provides an interface for MediaLive DeleteSchedule requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::deleteSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteScheduleRequest::DeleteScheduleRequest(const DeleteScheduleRequest &other)
    : MediaLiveRequest(new DeleteScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteScheduleRequest object.
 */
DeleteScheduleRequest::DeleteScheduleRequest()
    : MediaLiveRequest(new DeleteScheduleRequestPrivate(MediaLiveRequest::DeleteScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteScheduleRequest::response(QNetworkReply * const reply) const
{
    return new DeleteScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DeleteScheduleRequestPrivate
 * \brief The DeleteScheduleRequestPrivate class provides private implementation for DeleteScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DeleteScheduleRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DeleteScheduleRequestPrivate::DeleteScheduleRequestPrivate(
    const MediaLiveRequest::Action action, DeleteScheduleRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteScheduleRequest
 * class' copy constructor.
 */
DeleteScheduleRequestPrivate::DeleteScheduleRequestPrivate(
    const DeleteScheduleRequestPrivate &other, DeleteScheduleRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
