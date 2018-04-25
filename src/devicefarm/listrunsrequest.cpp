/*
    Copyright 2013-2018 Paul Colby

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

#include "listrunsrequest.h"
#include "listrunsrequest_p.h"
#include "listrunsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListRunsRequest
 * \brief The ListRunsRequest class provides an interface for DeviceFarm ListRuns requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listRuns
 */

/*!
 * Constructs a copy of \a other.
 */
ListRunsRequest::ListRunsRequest(const ListRunsRequest &other)
    : DeviceFarmRequest(new ListRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRunsRequest object.
 */
ListRunsRequest::ListRunsRequest()
    : DeviceFarmRequest(new ListRunsRequestPrivate(DeviceFarmRequest::ListRunsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRunsRequest::response(QNetworkReply * const reply) const
{
    return new ListRunsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListRunsRequestPrivate
 * \brief The ListRunsRequestPrivate class provides private implementation for ListRunsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListRunsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListRunsRequestPrivate::ListRunsRequestPrivate(
    const DeviceFarmRequest::Action action, ListRunsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRunsRequest
 * class' copy constructor.
 */
ListRunsRequestPrivate::ListRunsRequestPrivate(
    const ListRunsRequestPrivate &other, ListRunsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
