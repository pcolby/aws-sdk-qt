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

#include "getvpceconfigurationrequest.h"
#include "getvpceconfigurationrequest_p.h"
#include "getvpceconfigurationresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetVPCEConfigurationRequest
 * \brief The GetVPCEConfigurationRequest class provides an interface for DeviceFarm GetVPCEConfiguration requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getVPCEConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetVPCEConfigurationRequest::GetVPCEConfigurationRequest(const GetVPCEConfigurationRequest &other)
    : DeviceFarmRequest(new GetVPCEConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetVPCEConfigurationRequest object.
 */
GetVPCEConfigurationRequest::GetVPCEConfigurationRequest()
    : DeviceFarmRequest(new GetVPCEConfigurationRequestPrivate(DeviceFarmRequest::GetVPCEConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetVPCEConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetVPCEConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetVPCEConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetVPCEConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetVPCEConfigurationRequestPrivate
 * \brief The GetVPCEConfigurationRequestPrivate class provides private implementation for GetVPCEConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetVPCEConfigurationRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetVPCEConfigurationRequestPrivate::GetVPCEConfigurationRequestPrivate(
    const DeviceFarmRequest::Action action, GetVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetVPCEConfigurationRequest
 * class' copy constructor.
 */
GetVPCEConfigurationRequestPrivate::GetVPCEConfigurationRequestPrivate(
    const GetVPCEConfigurationRequestPrivate &other, GetVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
