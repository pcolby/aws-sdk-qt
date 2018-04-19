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

#include "renewdomainrequest.h"
#include "renewdomainrequest_p.h"
#include "renewdomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::RenewDomainRequest
 * \brief The RenewDomainRequest class provides an interface for Route53Domains RenewDomain requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::renewDomain
 */

/*!
 * Constructs a copy of \a other.
 */
RenewDomainRequest::RenewDomainRequest(const RenewDomainRequest &other)
    : Route53DomainsRequest(new RenewDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RenewDomainRequest object.
 */
RenewDomainRequest::RenewDomainRequest()
    : Route53DomainsRequest(new RenewDomainRequestPrivate(Route53DomainsRequest::RenewDomainAction, this))
{

}

/*!
 * \reimp
 */
bool RenewDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RenewDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RenewDomainRequest::response(QNetworkReply * const reply) const
{
    return new RenewDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::RenewDomainRequestPrivate
 * \brief The RenewDomainRequestPrivate class provides private implementation for RenewDomainRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a RenewDomainRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
RenewDomainRequestPrivate::RenewDomainRequestPrivate(
    const Route53DomainsRequest::Action action, RenewDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RenewDomainRequest
 * class' copy constructor.
 */
RenewDomainRequestPrivate::RenewDomainRequestPrivate(
    const RenewDomainRequestPrivate &other, RenewDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
