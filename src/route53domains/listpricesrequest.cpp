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

#include "listpricesrequest.h"
#include "listpricesrequest_p.h"
#include "listpricesresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListPricesRequest
 * \brief The ListPricesRequest class provides an interface for Route53Domains ListPrices requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listPrices
 */

/*!
 * Constructs a copy of \a other.
 */
ListPricesRequest::ListPricesRequest(const ListPricesRequest &other)
    : Route53DomainsRequest(new ListPricesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPricesRequest object.
 */
ListPricesRequest::ListPricesRequest()
    : Route53DomainsRequest(new ListPricesRequestPrivate(Route53DomainsRequest::ListPricesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPricesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPricesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPricesRequest::response(QNetworkReply * const reply) const
{
    return new ListPricesResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::ListPricesRequestPrivate
 * \brief The ListPricesRequestPrivate class provides private implementation for ListPricesRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListPricesRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
ListPricesRequestPrivate::ListPricesRequestPrivate(
    const Route53DomainsRequest::Action action, ListPricesRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPricesRequest
 * class' copy constructor.
 */
ListPricesRequestPrivate::ListPricesRequestPrivate(
    const ListPricesRequestPrivate &other, ListPricesRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
