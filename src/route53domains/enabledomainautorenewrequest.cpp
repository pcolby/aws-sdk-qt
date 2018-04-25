/*
    Copyright 2013-2018 Paul Colby

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

#include "enabledomainautorenewrequest.h"
#include "enabledomainautorenewrequest_p.h"
#include "enabledomainautorenewresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::EnableDomainAutoRenewRequest
 * \brief The EnableDomainAutoRenewRequest class provides an interface for Route53Domains EnableDomainAutoRenew requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::enableDomainAutoRenew
 */

/*!
 * Constructs a copy of \a other.
 */
EnableDomainAutoRenewRequest::EnableDomainAutoRenewRequest(const EnableDomainAutoRenewRequest &other)
    : Route53DomainsRequest(new EnableDomainAutoRenewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableDomainAutoRenewRequest object.
 */
EnableDomainAutoRenewRequest::EnableDomainAutoRenewRequest()
    : Route53DomainsRequest(new EnableDomainAutoRenewRequestPrivate(Route53DomainsRequest::EnableDomainAutoRenewAction, this))
{

}

/*!
 * \reimp
 */
bool EnableDomainAutoRenewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableDomainAutoRenewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableDomainAutoRenewRequest::response(QNetworkReply * const reply) const
{
    return new EnableDomainAutoRenewResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::EnableDomainAutoRenewRequestPrivate
 * \brief The EnableDomainAutoRenewRequestPrivate class provides private implementation for EnableDomainAutoRenewRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a EnableDomainAutoRenewRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
EnableDomainAutoRenewRequestPrivate::EnableDomainAutoRenewRequestPrivate(
    const Route53DomainsRequest::Action action, EnableDomainAutoRenewRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableDomainAutoRenewRequest
 * class' copy constructor.
 */
EnableDomainAutoRenewRequestPrivate::EnableDomainAutoRenewRequestPrivate(
    const EnableDomainAutoRenewRequestPrivate &other, EnableDomainAutoRenewRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
