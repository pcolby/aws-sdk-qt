// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
