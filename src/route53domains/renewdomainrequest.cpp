// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "renewdomainrequest.h"
#include "renewdomainrequest_p.h"
#include "renewdomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RenewDomainRequest
 * \brief The RenewDomainRequest class provides an interface for Route53Domains RenewDomain requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::renewDomain
 */

/*!
 * Constructs a copy of \a other.
 */
RenewDomainRequest::RenewDomainRequest(const RenewDomainRequest &other)
    : Route53DomainsRequest(new RenewDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RenewDomainRequest object.
 */
RenewDomainRequest::RenewDomainRequest()
    : Route53DomainsRequest(new RenewDomainRequestPrivate(Route53DomainsRequest::RenewDomainAction, this))
{

}

/*!
 * \reimp
 */
bool RenewDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RenewDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RenewDomainRequest::response(QNetworkReply * const reply) const
{
    return new RenewDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::RenewDomainRequestPrivate
 * \brief The RenewDomainRequestPrivate class provides private implementation for RenewDomainRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RenewDomainRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
RenewDomainRequestPrivate::RenewDomainRequestPrivate(
    const Route53DomainsRequest::Action action, RenewDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RenewDomainRequest
 * class' copy constructor.
 */
RenewDomainRequestPrivate::RenewDomainRequestPrivate(
    const RenewDomainRequestPrivate &other, RenewDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
