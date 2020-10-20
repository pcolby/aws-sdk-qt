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

#include "deletevpceconfigurationrequest.h"
#include "deletevpceconfigurationrequest_p.h"
#include "deletevpceconfigurationresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteVPCEConfigurationRequest
 * \brief The DeleteVPCEConfigurationRequest class provides an interface for DeviceFarm DeleteVPCEConfiguration requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteVPCEConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVPCEConfigurationRequest::DeleteVPCEConfigurationRequest(const DeleteVPCEConfigurationRequest &other)
    : DeviceFarmRequest(new DeleteVPCEConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVPCEConfigurationRequest object.
 */
DeleteVPCEConfigurationRequest::DeleteVPCEConfigurationRequest()
    : DeviceFarmRequest(new DeleteVPCEConfigurationRequestPrivate(DeviceFarmRequest::DeleteVPCEConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVPCEConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVPCEConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVPCEConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVPCEConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteVPCEConfigurationRequestPrivate
 * \brief The DeleteVPCEConfigurationRequestPrivate class provides private implementation for DeleteVPCEConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteVPCEConfigurationRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteVPCEConfigurationRequestPrivate::DeleteVPCEConfigurationRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVPCEConfigurationRequest
 * class' copy constructor.
 */
DeleteVPCEConfigurationRequestPrivate::DeleteVPCEConfigurationRequestPrivate(
    const DeleteVPCEConfigurationRequestPrivate &other, DeleteVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
