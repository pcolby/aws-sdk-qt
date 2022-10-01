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

#include "listcidrcollectionsrequest.h"
#include "listcidrcollectionsrequest_p.h"
#include "listcidrcollectionsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListCidrCollectionsRequest
 * \brief The ListCidrCollectionsRequest class provides an interface for Route53 ListCidrCollections requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::listCidrCollections
 */

/*!
 * Constructs a copy of \a other.
 */
ListCidrCollectionsRequest::ListCidrCollectionsRequest(const ListCidrCollectionsRequest &other)
    : Route53Request(new ListCidrCollectionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCidrCollectionsRequest object.
 */
ListCidrCollectionsRequest::ListCidrCollectionsRequest()
    : Route53Request(new ListCidrCollectionsRequestPrivate(Route53Request::ListCidrCollectionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCidrCollectionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCidrCollectionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCidrCollectionsRequest::response(QNetworkReply * const reply) const
{
    return new ListCidrCollectionsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ListCidrCollectionsRequestPrivate
 * \brief The ListCidrCollectionsRequestPrivate class provides private implementation for ListCidrCollectionsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ListCidrCollectionsRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ListCidrCollectionsRequestPrivate::ListCidrCollectionsRequestPrivate(
    const Route53Request::Action action, ListCidrCollectionsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCidrCollectionsRequest
 * class' copy constructor.
 */
ListCidrCollectionsRequestPrivate::ListCidrCollectionsRequestPrivate(
    const ListCidrCollectionsRequestPrivate &other, ListCidrCollectionsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
