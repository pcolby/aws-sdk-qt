/*
    Copyright 2013-2020 Paul Colby

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

#include "schedulerunrequest.h"
#include "schedulerunrequest_p.h"
#include "schedulerunresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ScheduleRunRequest
 * \brief The ScheduleRunRequest class provides an interface for DeviceFarm ScheduleRun requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::scheduleRun
 */

/*!
 * Constructs a copy of \a other.
 */
ScheduleRunRequest::ScheduleRunRequest(const ScheduleRunRequest &other)
    : DeviceFarmRequest(new ScheduleRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ScheduleRunRequest object.
 */
ScheduleRunRequest::ScheduleRunRequest()
    : DeviceFarmRequest(new ScheduleRunRequestPrivate(DeviceFarmRequest::ScheduleRunAction, this))
{

}

/*!
 * \reimp
 */
bool ScheduleRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ScheduleRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ScheduleRunRequest::response(QNetworkReply * const reply) const
{
    return new ScheduleRunResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ScheduleRunRequestPrivate
 * \brief The ScheduleRunRequestPrivate class provides private implementation for ScheduleRunRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ScheduleRunRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ScheduleRunRequestPrivate::ScheduleRunRequestPrivate(
    const DeviceFarmRequest::Action action, ScheduleRunRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ScheduleRunRequest
 * class' copy constructor.
 */
ScheduleRunRequestPrivate::ScheduleRunRequestPrivate(
    const ScheduleRunRequestPrivate &other, ScheduleRunRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
