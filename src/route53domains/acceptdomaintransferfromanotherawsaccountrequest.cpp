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

#include "acceptdomaintransferfromanotherawsaccountrequest.h"
#include "acceptdomaintransferfromanotherawsaccountrequest_p.h"
#include "acceptdomaintransferfromanotherawsaccountresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::AcceptDomainTransferFromAnotherAwsAccountRequest
 * \brief The AcceptDomainTransferFromAnotherAwsAccountRequest class provides an interface for Route53Domains AcceptDomainTransferFromAnotherAwsAccount requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::acceptDomainTransferFromAnotherAwsAccount
 */

/*!
 * Constructs a copy of \a other.
 */
AcceptDomainTransferFromAnotherAwsAccountRequest::AcceptDomainTransferFromAnotherAwsAccountRequest(const AcceptDomainTransferFromAnotherAwsAccountRequest &other)
    : Route53DomainsRequest(new AcceptDomainTransferFromAnotherAwsAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AcceptDomainTransferFromAnotherAwsAccountRequest object.
 */
AcceptDomainTransferFromAnotherAwsAccountRequest::AcceptDomainTransferFromAnotherAwsAccountRequest()
    : Route53DomainsRequest(new AcceptDomainTransferFromAnotherAwsAccountRequestPrivate(Route53DomainsRequest::AcceptDomainTransferFromAnotherAwsAccountAction, this))
{

}

/*!
 * \reimp
 */
bool AcceptDomainTransferFromAnotherAwsAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AcceptDomainTransferFromAnotherAwsAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AcceptDomainTransferFromAnotherAwsAccountRequest::response(QNetworkReply * const reply) const
{
    return new AcceptDomainTransferFromAnotherAwsAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::AcceptDomainTransferFromAnotherAwsAccountRequestPrivate
 * \brief The AcceptDomainTransferFromAnotherAwsAccountRequestPrivate class provides private implementation for AcceptDomainTransferFromAnotherAwsAccountRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a AcceptDomainTransferFromAnotherAwsAccountRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
AcceptDomainTransferFromAnotherAwsAccountRequestPrivate::AcceptDomainTransferFromAnotherAwsAccountRequestPrivate(
    const Route53DomainsRequest::Action action, AcceptDomainTransferFromAnotherAwsAccountRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AcceptDomainTransferFromAnotherAwsAccountRequest
 * class' copy constructor.
 */
AcceptDomainTransferFromAnotherAwsAccountRequestPrivate::AcceptDomainTransferFromAnotherAwsAccountRequestPrivate(
    const AcceptDomainTransferFromAnotherAwsAccountRequestPrivate &other, AcceptDomainTransferFromAnotherAwsAccountRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
