/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *
 * Constructs a TransferDomainRequestPrivate object for Route53Domains \a action with,
 * public implementation \a q.
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
