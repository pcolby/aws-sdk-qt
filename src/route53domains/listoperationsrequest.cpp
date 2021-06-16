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

#include "listoperationsrequest.h"
#include "listoperationsrequest_p.h"
#include "listoperationsresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListOperationsRequest
 * \brief The ListOperationsRequest class provides an interface for Route53Domains ListOperations requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listOperations
 */

/*!
 * Constructs a copy of \a other.
 */
ListOperationsRequest::ListOperationsRequest(const ListOperationsRequest &other)
    : Route53DomainsRequest(new ListOperationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOperationsRequest object.
 */
ListOperationsRequest::ListOperationsRequest()
    : Route53DomainsRequest(new ListOperationsRequestPrivate(Route53DomainsRequest::ListOperationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOperationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOperationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOperationsRequest::response(QNetworkReply * const reply) const
{
    return new ListOperationsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::ListOperationsRequestPrivate
 * \brief The ListOperationsRequestPrivate class provides private implementation for ListOperationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListOperationsRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
ListOperationsRequestPrivate::ListOperationsRequestPrivate(
    const Route53DomainsRequest::Action action, ListOperationsRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOperationsRequest
 * class' copy constructor.
 */
ListOperationsRequestPrivate::ListOperationsRequestPrivate(
    const ListOperationsRequestPrivate &other, ListOperationsRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
