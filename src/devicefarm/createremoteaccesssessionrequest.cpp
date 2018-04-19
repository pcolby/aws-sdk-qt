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

#include "createremoteaccesssessionrequest.h"
#include "createremoteaccesssessionrequest_p.h"
#include "createremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateRemoteAccessSessionRequest
 * \brief The CreateRemoteAccessSessionRequest class provides an interface for DeviceFarm CreateRemoteAccessSession requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRemoteAccessSessionRequest::CreateRemoteAccessSessionRequest(const CreateRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new CreateRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRemoteAccessSessionRequest object.
 */
CreateRemoteAccessSessionRequest::CreateRemoteAccessSessionRequest()
    : DeviceFarmRequest(new CreateRemoteAccessSessionRequestPrivate(DeviceFarmRequest::CreateRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new CreateRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateRemoteAccessSessionRequestPrivate
 * \brief The CreateRemoteAccessSessionRequestPrivate class provides private implementation for CreateRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateRemoteAccessSessionRequestPrivate::CreateRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, CreateRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRemoteAccessSessionRequest
 * class' copy constructor.
 */
CreateRemoteAccessSessionRequestPrivate::CreateRemoteAccessSessionRequestPrivate(
    const CreateRemoteAccessSessionRequestPrivate &other, CreateRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
