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

#include "listhostedzonesbynamerequest.h"
#include "listhostedzonesbynamerequest_p.h"
#include "listhostedzonesbynameresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesByNameRequest
 * \brief The ListHostedZonesByNameRequest class provides an interface for Route53 ListHostedZonesByName requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::listHostedZonesByName
 */

/*!
 * Constructs a copy of \a other.
 */
ListHostedZonesByNameRequest::ListHostedZonesByNameRequest(const ListHostedZonesByNameRequest &other)
    : Route53Request(new ListHostedZonesByNameRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListHostedZonesByNameRequest object.
 */
ListHostedZonesByNameRequest::ListHostedZonesByNameRequest()
    : Route53Request(new ListHostedZonesByNameRequestPrivate(Route53Request::ListHostedZonesByNameAction, this))
{

}

/*!
 * \reimp
 */
bool ListHostedZonesByNameRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListHostedZonesByNameResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListHostedZonesByNameRequest::response(QNetworkReply * const reply) const
{
    return new ListHostedZonesByNameResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListHostedZonesByNameRequestPrivate
 * \brief The ListHostedZonesByNameRequestPrivate class provides private implementation for ListHostedZonesByNameRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListHostedZonesByNameRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListHostedZonesByNameRequestPrivate::ListHostedZonesByNameRequestPrivate(
    const Route53Request::Action action, ListHostedZonesByNameRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListHostedZonesByNameRequest
 * class' copy constructor.
 */
ListHostedZonesByNameRequestPrivate::ListHostedZonesByNameRequestPrivate(
    const ListHostedZonesByNameRequestPrivate &other, ListHostedZonesByNameRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
