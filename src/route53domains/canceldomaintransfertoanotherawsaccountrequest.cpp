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
