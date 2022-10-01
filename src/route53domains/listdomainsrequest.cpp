// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdomainsrequest.h"
#include "listdomainsrequest_p.h"
#include "listdomainsresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::ListDomainsRequest
 * \brief The ListDomainsRequest class provides an interface for Route53Domains ListDomains requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::listDomains
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainsRequest::ListDomainsRequest(const ListDomainsRequest &other)
    : Route53DomainsRequest(new ListDomainsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainsRequest object.
 */
ListDomainsRequest::ListDomainsRequest()
    : Route53DomainsRequest(new ListDomainsRequestPrivate(Route53DomainsRequest::ListDomainsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainsRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainsResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::ListDomainsRequestPrivate
 * \brief The ListDomainsRequestPrivate class provides private implementation for ListDomainsRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a ListDomainsRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const Route53DomainsRequest::Action action, ListDomainsRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainsRequest
 * class' copy constructor.
 */
ListDomainsRequestPrivate::ListDomainsRequestPrivate(
    const ListDomainsRequestPrivate &other, ListDomainsRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
