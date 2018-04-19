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

#include "updateinstanceprofilerequest.h"
#include "updateinstanceprofilerequest_p.h"
#include "updateinstanceprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateInstanceProfileRequest
 * \brief The UpdateInstanceProfileRequest class provides an interface for DeviceFarm UpdateInstanceProfile requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInstanceProfileRequest::UpdateInstanceProfileRequest(const UpdateInstanceProfileRequest &other)
    : DeviceFarmRequest(new UpdateInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInstanceProfileRequest object.
 */
UpdateInstanceProfileRequest::UpdateInstanceProfileRequest()
    : DeviceFarmRequest(new UpdateInstanceProfileRequestPrivate(DeviceFarmRequest::UpdateInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateInstanceProfileRequestPrivate
 * \brief The UpdateInstanceProfileRequestPrivate class provides private implementation for UpdateInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a UpdateInstanceProfileRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
UpdateInstanceProfileRequestPrivate::UpdateInstanceProfileRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInstanceProfileRequest
 * class' copy constructor.
 */
UpdateInstanceProfileRequestPrivate::UpdateInstanceProfileRequestPrivate(
    const UpdateInstanceProfileRequestPrivate &other, UpdateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
