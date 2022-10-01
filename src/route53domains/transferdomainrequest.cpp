// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "transferdomainrequest.h"
#include "transferdomainrequest_p.h"
#include "transferdomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::TransferDomainRequest
 * \brief The TransferDomainRequest class provides an interface for Route53Domains TransferDomain requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::transferDomain
 */

/*!
 * Constructs a copy of \a other.
 */
TransferDomainRequest::TransferDomainRequest(const TransferDomainRequest &other)
    : Route53DomainsRequest(new TransferDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TransferDomainRequest object.
 */
TransferDomainRequest::TransferDomainRequest()
    : Route53DomainsRequest(new TransferDomainRequestPrivate(Route53DomainsRequest::TransferDomainAction, this))
{

}

/*!
 * \reimp
 */
bool TransferDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TransferDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TransferDomainRequest::response(QNetworkReply * const reply) const
{
    return new TransferDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::TransferDomainRequestPrivate
 * \brief The TransferDomainRequestPrivate class provides private implementation for TransferDomainRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a TransferDomainRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
TransferDomainRequestPrivate::TransferDomainRequestPrivate(
    const Route53DomainsRequest::Action action, TransferDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TransferDomainRequest
 * class' copy constructor.
 */
TransferDomainRequestPrivate::TransferDomainRequestPrivate(
    const TransferDomainRequestPrivate &other, TransferDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
