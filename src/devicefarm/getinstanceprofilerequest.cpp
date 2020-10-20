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

#include "getinstanceprofilerequest.h"
#include "getinstanceprofilerequest_p.h"
#include "getinstanceprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetInstanceProfileRequest
 * \brief The GetInstanceProfileRequest class provides an interface for DeviceFarm GetInstanceProfile requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetInstanceProfileRequest::GetInstanceProfileRequest(const GetInstanceProfileRequest &other)
    : DeviceFarmRequest(new GetInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInstanceProfileRequest object.
 */
GetInstanceProfileRequest::GetInstanceProfileRequest()
    : DeviceFarmRequest(new GetInstanceProfileRequestPrivate(DeviceFarmRequest::GetInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetInstanceProfileRequestPrivate
 * \brief The GetInstanceProfileRequestPrivate class provides private implementation for GetInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetInstanceProfileRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetInstanceProfileRequestPrivate::GetInstanceProfileRequestPrivate(
    const DeviceFarmRequest::Action action, GetInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceProfileRequest
 * class' copy constructor.
 */
GetInstanceProfileRequestPrivate::GetInstanceProfileRequestPrivate(
    const GetInstanceProfileRequestPrivate &other, GetInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
