// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "transferdomaintoanotherawsaccountrequest.h"
#include "transferdomaintoanotherawsaccountrequest_p.h"
#include "transferdomaintoanotherawsaccountresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::TransferDomainToAnotherAwsAccountRequest
 * \brief The TransferDomainToAnotherAwsAccountRequest class provides an interface for Route53Domains TransferDomainToAnotherAwsAccount requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::transferDomainToAnotherAwsAccount
 */

/*!
 * Constructs a copy of \a other.
 */
TransferDomainToAnotherAwsAccountRequest::TransferDomainToAnotherAwsAccountRequest(const TransferDomainToAnotherAwsAccountRequest &other)
    : Route53DomainsRequest(new TransferDomainToAnotherAwsAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TransferDomainToAnotherAwsAccountRequest object.
 */
TransferDomainToAnotherAwsAccountRequest::TransferDomainToAnotherAwsAccountRequest()
    : Route53DomainsRequest(new TransferDomainToAnotherAwsAccountRequestPrivate(Route53DomainsRequest::TransferDomainToAnotherAwsAccountAction, this))
{

}

/*!
 * \reimp
 */
bool TransferDomainToAnotherAwsAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TransferDomainToAnotherAwsAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TransferDomainToAnotherAwsAccountRequest::response(QNetworkReply * const reply) const
{
    return new TransferDomainToAnotherAwsAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::TransferDomainToAnotherAwsAccountRequestPrivate
 * \brief The TransferDomainToAnotherAwsAccountRequestPrivate class provides private implementation for TransferDomainToAnotherAwsAccountRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a TransferDomainToAnotherAwsAccountRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
TransferDomainToAnotherAwsAccountRequestPrivate::TransferDomainToAnotherAwsAccountRequestPrivate(
    const Route53DomainsRequest::Action action, TransferDomainToAnotherAwsAccountRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TransferDomainToAnotherAwsAccountRequest
 * class' copy constructor.
 */
TransferDomainToAnotherAwsAccountRequestPrivate::TransferDomainToAnotherAwsAccountRequestPrivate(
    const TransferDomainToAnotherAwsAccountRequestPrivate &other, TransferDomainToAnotherAwsAccountRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
