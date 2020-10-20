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

#include "listsuitesrequest.h"
#include "listsuitesrequest_p.h"
#include "listsuitesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListSuitesRequest
 * \brief The ListSuitesRequest class provides an interface for DeviceFarm ListSuites requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listSuites
 */

/*!
 * Constructs a copy of \a other.
 */
ListSuitesRequest::ListSuitesRequest(const ListSuitesRequest &other)
    : DeviceFarmRequest(new ListSuitesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSuitesRequest object.
 */
ListSuitesRequest::ListSuitesRequest()
    : DeviceFarmRequest(new ListSuitesRequestPrivate(DeviceFarmRequest::ListSuitesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSuitesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSuitesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSuitesRequest::response(QNetworkReply * const reply) const
{
    return new ListSuitesResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListSuitesRequestPrivate
 * \brief The ListSuitesRequestPrivate class provides private implementation for ListSuitesRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListSuitesRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListSuitesRequestPrivate::ListSuitesRequestPrivate(
    const DeviceFarmRequest::Action action, ListSuitesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSuitesRequest
 * class' copy constructor.
 */
ListSuitesRequestPrivate::ListSuitesRequestPrivate(
    const ListSuitesRequestPrivate &other, ListSuitesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
