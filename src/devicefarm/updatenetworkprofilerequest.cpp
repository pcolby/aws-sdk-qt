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

#include "updatenetworkprofilerequest.h"
#include "updatenetworkprofilerequest_p.h"
#include "updatenetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateNetworkProfileRequest
 * \brief The UpdateNetworkProfileRequest class provides an interface for DeviceFarm UpdateNetworkProfile requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkProfileRequest::UpdateNetworkProfileRequest(const UpdateNetworkProfileRequest &other)
    : DeviceFarmRequest(new UpdateNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkProfileRequest object.
 */
UpdateNetworkProfileRequest::UpdateNetworkProfileRequest()
    : DeviceFarmRequest(new UpdateNetworkProfileRequestPrivate(DeviceFarmRequest::UpdateNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateNetworkProfileRequestPrivate
 * \brief The UpdateNetworkProfileRequestPrivate class provides private implementation for UpdateNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a UpdateNetworkProfileRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
UpdateNetworkProfileRequestPrivate::UpdateNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkProfileRequest
 * class' copy constructor.
 */
UpdateNetworkProfileRequestPrivate::UpdateNetworkProfileRequestPrivate(
    const UpdateNetworkProfileRequestPrivate &other, UpdateNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
