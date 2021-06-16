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
