// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceldomaintransfertoanotherawsaccountrequest.h"
#include "canceldomaintransfertoanotherawsaccountrequest_p.h"
#include "canceldomaintransfertoanotherawsaccountresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::CancelDomainTransferToAnotherAwsAccountRequest
 * \brief The CancelDomainTransferToAnotherAwsAccountRequest class provides an interface for Route53Domains CancelDomainTransferToAnotherAwsAccount requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::cancelDomainTransferToAnotherAwsAccount
 */

/*!
 * Constructs a copy of \a other.
 */
CancelDomainTransferToAnotherAwsAccountRequest::CancelDomainTransferToAnotherAwsAccountRequest(const CancelDomainTransferToAnotherAwsAccountRequest &other)
    : Route53DomainsRequest(new CancelDomainTransferToAnotherAwsAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelDomainTransferToAnotherAwsAccountRequest object.
 */
CancelDomainTransferToAnotherAwsAccountRequest::CancelDomainTransferToAnotherAwsAccountRequest()
    : Route53DomainsRequest(new CancelDomainTransferToAnotherAwsAccountRequestPrivate(Route53DomainsRequest::CancelDomainTransferToAnotherAwsAccountAction, this))
{

}

/*!
 * \reimp
 */
bool CancelDomainTransferToAnotherAwsAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelDomainTransferToAnotherAwsAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelDomainTransferToAnotherAwsAccountRequest::response(QNetworkReply * const reply) const
{
    return new CancelDomainTransferToAnotherAwsAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::CancelDomainTransferToAnotherAwsAccountRequestPrivate
 * \brief The CancelDomainTransferToAnotherAwsAccountRequestPrivate class provides private implementation for CancelDomainTransferToAnotherAwsAccountRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a CancelDomainTransferToAnotherAwsAccountRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
CancelDomainTransferToAnotherAwsAccountRequestPrivate::CancelDomainTransferToAnotherAwsAccountRequestPrivate(
    const Route53DomainsRequest::Action action, CancelDomainTransferToAnotherAwsAccountRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelDomainTransferToAnotherAwsAccountRequest
 * class' copy constructor.
 */
CancelDomainTransferToAnotherAwsAccountRequestPrivate::CancelDomainTransferToAnotherAwsAccountRequestPrivate(
    const CancelDomainTransferToAnotherAwsAccountRequestPrivate &other, CancelDomainTransferToAnotherAwsAccountRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
