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
