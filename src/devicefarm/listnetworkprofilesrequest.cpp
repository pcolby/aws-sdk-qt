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

#include "listnetworkprofilesrequest.h"
#include "listnetworkprofilesrequest_p.h"
#include "listnetworkprofilesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListNetworkProfilesRequest
 * \brief The ListNetworkProfilesRequest class provides an interface for DeviceFarm ListNetworkProfiles requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listNetworkProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListNetworkProfilesRequest::ListNetworkProfilesRequest(const ListNetworkProfilesRequest &other)
    : DeviceFarmRequest(new ListNetworkProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListNetworkProfilesRequest object.
 */
ListNetworkProfilesRequest::ListNetworkProfilesRequest()
    : DeviceFarmRequest(new ListNetworkProfilesRequestPrivate(DeviceFarmRequest::ListNetworkProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNetworkProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListNetworkProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNetworkProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListNetworkProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListNetworkProfilesRequestPrivate
 * \brief The ListNetworkProfilesRequestPrivate class provides private implementation for ListNetworkProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListNetworkProfilesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListNetworkProfilesRequestPrivate::ListNetworkProfilesRequestPrivate(
    const DeviceFarmRequest::Action action, ListNetworkProfilesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListNetworkProfilesRequest
 * class' copy constructor.
 */
ListNetworkProfilesRequestPrivate::ListNetworkProfilesRequestPrivate(
    const ListNetworkProfilesRequestPrivate &other, ListNetworkProfilesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
