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

#include "stopjobrequest.h"
#include "stopjobrequest_p.h"
#include "stopjobresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopJobRequest
 * \brief The StopJobRequest class provides an interface for DeviceFarm StopJob requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::stopJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopJobRequest::StopJobRequest(const StopJobRequest &other)
    : DeviceFarmRequest(new StopJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopJobRequest object.
 */
StopJobRequest::StopJobRequest()
    : DeviceFarmRequest(new StopJobRequestPrivate(DeviceFarmRequest::StopJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopJobRequest::response(QNetworkReply * const reply) const
{
    return new StopJobResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::StopJobRequestPrivate
 * \brief The StopJobRequestPrivate class provides private implementation for StopJobRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopJobRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
StopJobRequestPrivate::StopJobRequestPrivate(
    const DeviceFarmRequest::Action action, StopJobRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopJobRequest
 * class' copy constructor.
 */
StopJobRequestPrivate::StopJobRequestPrivate(
    const StopJobRequestPrivate &other, StopJobRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
