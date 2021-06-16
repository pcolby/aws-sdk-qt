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

#include "listtrackerconsumersrequest.h"
#include "listtrackerconsumersrequest_p.h"
#include "listtrackerconsumersresponse.h"
#include "locationservicerequest_p.h"

namespace QtAws {
namespace LocationService {

/*!
 * \class QtAws::LocationService::ListTrackerConsumersRequest
 * \brief The ListTrackerConsumersRequest class provides an interface for LocationService ListTrackerConsumers requests.
 *
 * \inmodule QtAwsLocationService
 *
 *  Suite of geospatial services including Maps, Places, Routes, Tracking, and
 *
 * \sa LocationServiceClient::listTrackerConsumers
 */

/*!
 * Constructs a copy of \a other.
 */
ListTrackerConsumersRequest::ListTrackerConsumersRequest(const ListTrackerConsumersRequest &other)
    : LocationServiceRequest(new ListTrackerConsumersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTrackerConsumersRequest object.
 */
ListTrackerConsumersRequest::ListTrackerConsumersRequest()
    : LocationServiceRequest(new ListTrackerConsumersRequestPrivate(LocationServiceRequest::ListTrackerConsumersAction, this))
{

}

/*!
 * \reimp
 */
bool ListTrackerConsumersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTrackerConsumersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTrackerConsumersRequest::response(QNetworkReply * const reply) const
{
    return new ListTrackerConsumersResponse(*this, reply);
}

/*!
 * \class QtAws::LocationService::ListTrackerConsumersRequestPrivate
 * \brief The ListTrackerConsumersRequestPrivate class provides private implementation for ListTrackerConsumersRequest.
 * \internal
 *
 * \inmodule QtAwsLocationService
 */

/*!
 * Constructs a ListTrackerConsumersRequestPrivate object for LocationService \a action,
 * with public implementation \a q.
 */
ListTrackerConsumersRequestPrivate::ListTrackerConsumersRequestPrivate(
    const LocationServiceRequest::Action action, ListTrackerConsumersRequest * const q)
    : LocationServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTrackerConsumersRequest
 * class' copy constructor.
 */
ListTrackerConsumersRequestPrivate::ListTrackerConsumersRequestPrivate(
    const ListTrackerConsumersRequestPrivate &other, ListTrackerConsumersRequest * const q)
    : LocationServiceRequestPrivate(other, q)
{

}

} // namespace LocationService
} // namespace QtAws
