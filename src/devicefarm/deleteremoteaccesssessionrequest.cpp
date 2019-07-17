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

#include "deleteremoteaccesssessionrequest.h"
#include "deleteremoteaccesssessionrequest_p.h"
#include "deleteremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteRemoteAccessSessionRequest
 * \brief The DeleteRemoteAccessSessionRequest class provides an interface for DeviceFarm DeleteRemoteAccessSession requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRemoteAccessSessionRequest::DeleteRemoteAccessSessionRequest(const DeleteRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new DeleteRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRemoteAccessSessionRequest object.
 */
DeleteRemoteAccessSessionRequest::DeleteRemoteAccessSessionRequest()
    : DeviceFarmRequest(new DeleteRemoteAccessSessionRequestPrivate(DeviceFarmRequest::DeleteRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteRemoteAccessSessionRequestPrivate
 * \brief The DeleteRemoteAccessSessionRequestPrivate class provides private implementation for DeleteRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteRemoteAccessSessionRequestPrivate::DeleteRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRemoteAccessSessionRequest
 * class' copy constructor.
 */
DeleteRemoteAccessSessionRequestPrivate::DeleteRemoteAccessSessionRequestPrivate(
    const DeleteRemoteAccessSessionRequestPrivate &other, DeleteRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
