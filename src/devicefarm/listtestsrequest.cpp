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

#include "listtestsrequest.h"
#include "listtestsrequest_p.h"
#include "listtestsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListTestsRequest
 * \brief The ListTestsRequest class provides an interface for DeviceFarm ListTests requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listTests
 */

/*!
 * Constructs a copy of \a other.
 */
ListTestsRequest::ListTestsRequest(const ListTestsRequest &other)
    : DeviceFarmRequest(new ListTestsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTestsRequest object.
 */
ListTestsRequest::ListTestsRequest()
    : DeviceFarmRequest(new ListTestsRequestPrivate(DeviceFarmRequest::ListTestsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTestsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTestsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTestsRequest::response(QNetworkReply * const reply) const
{
    return new ListTestsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListTestsRequestPrivate
 * \brief The ListTestsRequestPrivate class provides private implementation for ListTestsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListTestsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListTestsRequestPrivate::ListTestsRequestPrivate(
    const DeviceFarmRequest::Action action, ListTestsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTestsRequest
 * class' copy constructor.
 */
ListTestsRequestPrivate::ListTestsRequestPrivate(
    const ListTestsRequestPrivate &other, ListTestsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
