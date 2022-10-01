// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rejectdomaintransferfromanotherawsaccountrequest.h"
#include "rejectdomaintransferfromanotherawsaccountrequest_p.h"
#include "rejectdomaintransferfromanotherawsaccountresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RejectDomainTransferFromAnotherAwsAccountRequest
 * \brief The RejectDomainTransferFromAnotherAwsAccountRequest class provides an interface for Route53Domains RejectDomainTransferFromAnotherAwsAccount requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::rejectDomainTransferFromAnotherAwsAccount
 */

/*!
 * Constructs a copy of \a other.
 */
RejectDomainTransferFromAnotherAwsAccountRequest::RejectDomainTransferFromAnotherAwsAccountRequest(const RejectDomainTransferFromAnotherAwsAccountRequest &other)
    : Route53DomainsRequest(new RejectDomainTransferFromAnotherAwsAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RejectDomainTransferFromAnotherAwsAccountRequest object.
 */
RejectDomainTransferFromAnotherAwsAccountRequest::RejectDomainTransferFromAnotherAwsAccountRequest()
    : Route53DomainsRequest(new RejectDomainTransferFromAnotherAwsAccountRequestPrivate(Route53DomainsRequest::RejectDomainTransferFromAnotherAwsAccountAction, this))
{

}

/*!
 * \reimp
 */
bool RejectDomainTransferFromAnotherAwsAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RejectDomainTransferFromAnotherAwsAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RejectDomainTransferFromAnotherAwsAccountRequest::response(QNetworkReply * const reply) const
{
    return new RejectDomainTransferFromAnotherAwsAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::RejectDomainTransferFromAnotherAwsAccountRequestPrivate
 * \brief The RejectDomainTransferFromAnotherAwsAccountRequestPrivate class provides private implementation for RejectDomainTransferFromAnotherAwsAccountRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RejectDomainTransferFromAnotherAwsAccountRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
RejectDomainTransferFromAnotherAwsAccountRequestPrivate::RejectDomainTransferFromAnotherAwsAccountRequestPrivate(
    const Route53DomainsRequest::Action action, RejectDomainTransferFromAnotherAwsAccountRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RejectDomainTransferFromAnotherAwsAccountRequest
 * class' copy constructor.
 */
RejectDomainTransferFromAnotherAwsAccountRequestPrivate::RejectDomainTransferFromAnotherAwsAccountRequestPrivate(
    const RejectDomainTransferFromAnotherAwsAccountRequestPrivate &other, RejectDomainTransferFromAnotherAwsAccountRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
