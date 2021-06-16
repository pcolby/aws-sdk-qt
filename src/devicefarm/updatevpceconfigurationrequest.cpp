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

#include "updatevpceconfigurationrequest.h"
#include "updatevpceconfigurationrequest_p.h"
#include "updatevpceconfigurationresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateVPCEConfigurationRequest
 * \brief The UpdateVPCEConfigurationRequest class provides an interface for DeviceFarm UpdateVPCEConfiguration requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::updateVPCEConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVPCEConfigurationRequest::UpdateVPCEConfigurationRequest(const UpdateVPCEConfigurationRequest &other)
    : DeviceFarmRequest(new UpdateVPCEConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVPCEConfigurationRequest object.
 */
UpdateVPCEConfigurationRequest::UpdateVPCEConfigurationRequest()
    : DeviceFarmRequest(new UpdateVPCEConfigurationRequestPrivate(DeviceFarmRequest::UpdateVPCEConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVPCEConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVPCEConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVPCEConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVPCEConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateVPCEConfigurationRequestPrivate
 * \brief The UpdateVPCEConfigurationRequestPrivate class provides private implementation for UpdateVPCEConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateVPCEConfigurationRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
UpdateVPCEConfigurationRequestPrivate::UpdateVPCEConfigurationRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVPCEConfigurationRequest
 * class' copy constructor.
 */
UpdateVPCEConfigurationRequestPrivate::UpdateVPCEConfigurationRequestPrivate(
    const UpdateVPCEConfigurationRequestPrivate &other, UpdateVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
