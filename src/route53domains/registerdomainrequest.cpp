// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerdomainrequest.h"
#include "registerdomainrequest_p.h"
#include "registerdomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RegisterDomainRequest
 * \brief The RegisterDomainRequest class provides an interface for Route53Domains RegisterDomain requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::registerDomain
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterDomainRequest::RegisterDomainRequest(const RegisterDomainRequest &other)
    : Route53DomainsRequest(new RegisterDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterDomainRequest object.
 */
RegisterDomainRequest::RegisterDomainRequest()
    : Route53DomainsRequest(new RegisterDomainRequestPrivate(Route53DomainsRequest::RegisterDomainAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterDomainRequest::response(QNetworkReply * const reply) const
{
    return new RegisterDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::RegisterDomainRequestPrivate
 * \brief The RegisterDomainRequestPrivate class provides private implementation for RegisterDomainRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RegisterDomainRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
RegisterDomainRequestPrivate::RegisterDomainRequestPrivate(
    const Route53DomainsRequest::Action action, RegisterDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterDomainRequest
 * class' copy constructor.
 */
RegisterDomainRequestPrivate::RegisterDomainRequestPrivate(
    const RegisterDomainRequestPrivate &other, RegisterDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
