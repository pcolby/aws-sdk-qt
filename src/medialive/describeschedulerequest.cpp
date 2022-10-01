// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeschedulerequest.h"
#include "describeschedulerequest_p.h"
#include "describescheduleresponse.h"
#include "medialiverequest_p.h"

namespace QtAws {
namespace MediaLive {

/*!
 * \class QtAws::MediaLive::DescribeScheduleRequest
 * \brief The DescribeScheduleRequest class provides an interface for MediaLive DescribeSchedule requests.
 *
 * \inmodule QtAwsMediaLive
 *
 *
 * \sa MediaLiveClient::describeSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeScheduleRequest::DescribeScheduleRequest(const DescribeScheduleRequest &other)
    : MediaLiveRequest(new DescribeScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeScheduleRequest object.
 */
DescribeScheduleRequest::DescribeScheduleRequest()
    : MediaLiveRequest(new DescribeScheduleRequestPrivate(MediaLiveRequest::DescribeScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeScheduleRequest::response(QNetworkReply * const reply) const
{
    return new DescribeScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::MediaLive::DescribeScheduleRequestPrivate
 * \brief The DescribeScheduleRequestPrivate class provides private implementation for DescribeScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsMediaLive
 */

/*!
 * Constructs a DescribeScheduleRequestPrivate object for MediaLive \a action,
 * with public implementation \a q.
 */
DescribeScheduleRequestPrivate::DescribeScheduleRequestPrivate(
    const MediaLiveRequest::Action action, DescribeScheduleRequest * const q)
    : MediaLiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeScheduleRequest
 * class' copy constructor.
 */
DescribeScheduleRequestPrivate::DescribeScheduleRequestPrivate(
    const DescribeScheduleRequestPrivate &other, DescribeScheduleRequest * const q)
    : MediaLiveRequestPrivate(other, q)
{

}

} // namespace MediaLive
} // namespace QtAws
