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

#include "createvpceconfigurationrequest.h"
#include "createvpceconfigurationrequest_p.h"
#include "createvpceconfigurationresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateVPCEConfigurationRequest
 * \brief The CreateVPCEConfigurationRequest class provides an interface for DeviceFarm CreateVPCEConfiguration requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::createVPCEConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVPCEConfigurationRequest::CreateVPCEConfigurationRequest(const CreateVPCEConfigurationRequest &other)
    : DeviceFarmRequest(new CreateVPCEConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVPCEConfigurationRequest object.
 */
CreateVPCEConfigurationRequest::CreateVPCEConfigurationRequest()
    : DeviceFarmRequest(new CreateVPCEConfigurationRequestPrivate(DeviceFarmRequest::CreateVPCEConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVPCEConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVPCEConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVPCEConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateVPCEConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateVPCEConfigurationRequestPrivate
 * \brief The CreateVPCEConfigurationRequestPrivate class provides private implementation for CreateVPCEConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateVPCEConfigurationRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateVPCEConfigurationRequestPrivate::CreateVPCEConfigurationRequestPrivate(
    const DeviceFarmRequest::Action action, CreateVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVPCEConfigurationRequest
 * class' copy constructor.
 */
CreateVPCEConfigurationRequestPrivate::CreateVPCEConfigurationRequestPrivate(
    const CreateVPCEConfigurationRequestPrivate &other, CreateVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
