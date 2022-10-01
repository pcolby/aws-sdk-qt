// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
