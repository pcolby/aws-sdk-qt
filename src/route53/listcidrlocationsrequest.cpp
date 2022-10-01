// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcidrlocationsrequest.h"
#include "listcidrlocationsrequest_p.h"
#include "listcidrlocationsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListCidrLocationsRequest
 * \brief The ListCidrLocationsRequest class provides an interface for Route53 ListCidrLocations requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listCidrLocations
 */

/*!
 * Constructs a copy of \a other.
 */
ListCidrLocationsRequest::ListCidrLocationsRequest(const ListCidrLocationsRequest &other)
    : Route53Request(new ListCidrLocationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCidrLocationsRequest object.
 */
ListCidrLocationsRequest::ListCidrLocationsRequest()
    : Route53Request(new ListCidrLocationsRequestPrivate(Route53Request::ListCidrLocationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCidrLocationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCidrLocationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCidrLocationsRequest::response(QNetworkReply * const reply) const
{
    return new ListCidrLocationsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListCidrLocationsRequestPrivate
 * \brief The ListCidrLocationsRequestPrivate class provides private implementation for ListCidrLocationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListCidrLocationsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListCidrLocationsRequestPrivate::ListCidrLocationsRequestPrivate(
    const Route53Request::Action action, ListCidrLocationsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCidrLocationsRequest
 * class' copy constructor.
 */
ListCidrLocationsRequestPrivate::ListCidrLocationsRequestPrivate(
    const ListCidrLocationsRequestPrivate &other, ListCidrLocationsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
