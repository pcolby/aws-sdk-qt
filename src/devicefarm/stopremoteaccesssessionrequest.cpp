/*
    Copyright 2013-2018 Paul Colby

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

#include "stopremoteaccesssessionrequest.h"
#include "stopremoteaccesssessionrequest_p.h"
#include "stopremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopRemoteAccessSessionRequest
 * \brief The StopRemoteAccessSessionRequest class provides an interface for DeviceFarm StopRemoteAccessSession requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::stopRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
StopRemoteAccessSessionRequest::StopRemoteAccessSessionRequest(const StopRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new StopRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopRemoteAccessSessionRequest object.
 */
StopRemoteAccessSessionRequest::StopRemoteAccessSessionRequest()
    : DeviceFarmRequest(new StopRemoteAccessSessionRequestPrivate(DeviceFarmRequest::StopRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool StopRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new StopRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::StopRemoteAccessSessionRequestPrivate
 * \brief The StopRemoteAccessSessionRequestPrivate class provides private implementation for StopRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
StopRemoteAccessSessionRequestPrivate::StopRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, StopRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopRemoteAccessSessionRequest
 * class' copy constructor.
 */
StopRemoteAccessSessionRequestPrivate::StopRemoteAccessSessionRequestPrivate(
    const StopRemoteAccessSessionRequestPrivate &other, StopRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
