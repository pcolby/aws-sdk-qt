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

#include "listgeolocationsrequest.h"
#include "listgeolocationsrequest_p.h"
#include "listgeolocationsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListGeoLocationsRequest
 * \brief The ListGeoLocationsRequest class provides an interface for Route53 ListGeoLocations requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listGeoLocations
 */

/*!
 * Constructs a copy of \a other.
 */
ListGeoLocationsRequest::ListGeoLocationsRequest(const ListGeoLocationsRequest &other)
    : Route53Request(new ListGeoLocationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGeoLocationsRequest object.
 */
ListGeoLocationsRequest::ListGeoLocationsRequest()
    : Route53Request(new ListGeoLocationsRequestPrivate(Route53Request::ListGeoLocationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGeoLocationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGeoLocationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGeoLocationsRequest::response(QNetworkReply * const reply) const
{
    return new ListGeoLocationsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListGeoLocationsRequestPrivate
 * \brief The ListGeoLocationsRequestPrivate class provides private implementation for ListGeoLocationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListGeoLocationsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListGeoLocationsRequestPrivate::ListGeoLocationsRequestPrivate(
    const Route53Request::Action action, ListGeoLocationsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGeoLocationsRequest
 * class' copy constructor.
 */
ListGeoLocationsRequestPrivate::ListGeoLocationsRequestPrivate(
    const ListGeoLocationsRequestPrivate &other, ListGeoLocationsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
