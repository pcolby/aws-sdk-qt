/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "stoprunrequest.h"
#include "stoprunrequest_p.h"
#include "stoprunresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopRunRequest
 * \brief The StopRunRequest class provides an interface for DeviceFarm StopRun requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::stopRun
 */

/*!
 * Constructs a copy of \a other.
 */
StopRunRequest::StopRunRequest(const StopRunRequest &other)
    : DeviceFarmRequest(new StopRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopRunRequest object.
 */
StopRunRequest::StopRunRequest()
    : DeviceFarmRequest(new StopRunRequestPrivate(DeviceFarmRequest::StopRunAction, this))
{

}

/*!
 * \reimp
 */
bool StopRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopRunRequest::response(QNetworkReply * const reply) const
{
    return new StopRunResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::StopRunRequestPrivate
 * \brief The StopRunRequestPrivate class provides private implementation for StopRunRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopRunRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
StopRunRequestPrivate::StopRunRequestPrivate(
    const DeviceFarmRequest::Action action, StopRunRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopRunRequest
 * class' copy constructor.
 */
StopRunRequestPrivate::StopRunRequestPrivate(
    const StopRunRequestPrivate &other, StopRunRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
