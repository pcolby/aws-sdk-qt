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

#include "listvpceconfigurationsrequest.h"
#include "listvpceconfigurationsrequest_p.h"
#include "listvpceconfigurationsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListVPCEConfigurationsRequest
 * \brief The ListVPCEConfigurationsRequest class provides an interface for DeviceFarm ListVPCEConfigurations requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listVPCEConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
ListVPCEConfigurationsRequest::ListVPCEConfigurationsRequest(const ListVPCEConfigurationsRequest &other)
    : DeviceFarmRequest(new ListVPCEConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListVPCEConfigurationsRequest object.
 */
ListVPCEConfigurationsRequest::ListVPCEConfigurationsRequest()
    : DeviceFarmRequest(new ListVPCEConfigurationsRequestPrivate(DeviceFarmRequest::ListVPCEConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListVPCEConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListVPCEConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVPCEConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListVPCEConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListVPCEConfigurationsRequestPrivate
 * \brief The ListVPCEConfigurationsRequestPrivate class provides private implementation for ListVPCEConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListVPCEConfigurationsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListVPCEConfigurationsRequestPrivate::ListVPCEConfigurationsRequestPrivate(
    const DeviceFarmRequest::Action action, ListVPCEConfigurationsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListVPCEConfigurationsRequest
 * class' copy constructor.
 */
ListVPCEConfigurationsRequestPrivate::ListVPCEConfigurationsRequestPrivate(
    const ListVPCEConfigurationsRequestPrivate &other, ListVPCEConfigurationsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
