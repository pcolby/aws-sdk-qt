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

#include "installtoremoteaccesssessionrequest.h"
#include "installtoremoteaccesssessionrequest_p.h"
#include "installtoremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::InstallToRemoteAccessSessionRequest
 * \brief The InstallToRemoteAccessSessionRequest class provides an interface for DeviceFarm InstallToRemoteAccessSession requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::installToRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
InstallToRemoteAccessSessionRequest::InstallToRemoteAccessSessionRequest(const InstallToRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new InstallToRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InstallToRemoteAccessSessionRequest object.
 */
InstallToRemoteAccessSessionRequest::InstallToRemoteAccessSessionRequest()
    : DeviceFarmRequest(new InstallToRemoteAccessSessionRequestPrivate(DeviceFarmRequest::InstallToRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool InstallToRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InstallToRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InstallToRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new InstallToRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::InstallToRemoteAccessSessionRequestPrivate
 * \brief The InstallToRemoteAccessSessionRequestPrivate class provides private implementation for InstallToRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a InstallToRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
InstallToRemoteAccessSessionRequestPrivate::InstallToRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, InstallToRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InstallToRemoteAccessSessionRequest
 * class' copy constructor.
 */
InstallToRemoteAccessSessionRequestPrivate::InstallToRemoteAccessSessionRequestPrivate(
    const InstallToRemoteAccessSessionRequestPrivate &other, InstallToRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
