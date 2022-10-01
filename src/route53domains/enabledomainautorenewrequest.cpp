// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enabledomainautorenewrequest.h"
#include "enabledomainautorenewrequest_p.h"
#include "enabledomainautorenewresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::EnableDomainAutoRenewRequest
 * \brief The EnableDomainAutoRenewRequest class provides an interface for Route53Domains EnableDomainAutoRenew requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::enableDomainAutoRenew
 */

/*!
 * Constructs a copy of \a other.
 */
EnableDomainAutoRenewRequest::EnableDomainAutoRenewRequest(const EnableDomainAutoRenewRequest &other)
    : Route53DomainsRequest(new EnableDomainAutoRenewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableDomainAutoRenewRequest object.
 */
EnableDomainAutoRenewRequest::EnableDomainAutoRenewRequest()
    : Route53DomainsRequest(new EnableDomainAutoRenewRequestPrivate(Route53DomainsRequest::EnableDomainAutoRenewAction, this))
{

}

/*!
 * \reimp
 */
bool EnableDomainAutoRenewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableDomainAutoRenewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableDomainAutoRenewRequest::response(QNetworkReply * const reply) const
{
    return new EnableDomainAutoRenewResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::EnableDomainAutoRenewRequestPrivate
 * \brief The EnableDomainAutoRenewRequestPrivate class provides private implementation for EnableDomainAutoRenewRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a EnableDomainAutoRenewRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
EnableDomainAutoRenewRequestPrivate::EnableDomainAutoRenewRequestPrivate(
    const Route53DomainsRequest::Action action, EnableDomainAutoRenewRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableDomainAutoRenewRequest
 * class' copy constructor.
 */
EnableDomainAutoRenewRequestPrivate::EnableDomainAutoRenewRequestPrivate(
    const EnableDomainAutoRenewRequestPrivate &other, EnableDomainAutoRenewRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
