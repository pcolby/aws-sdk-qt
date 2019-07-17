/*
    Copyright 2013-2019 Paul Colby

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

#include "enabledomaintransferlockrequest.h"
#include "enabledomaintransferlockrequest_p.h"
#include "enabledomaintransferlockresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::EnableDomainTransferLockRequest
 * \brief The EnableDomainTransferLockRequest class provides an interface for Route53Domains EnableDomainTransferLock requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::enableDomainTransferLock
 */

/*!
 * Constructs a copy of \a other.
 */
EnableDomainTransferLockRequest::EnableDomainTransferLockRequest(const EnableDomainTransferLockRequest &other)
    : Route53DomainsRequest(new EnableDomainTransferLockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableDomainTransferLockRequest object.
 */
EnableDomainTransferLockRequest::EnableDomainTransferLockRequest()
    : Route53DomainsRequest(new EnableDomainTransferLockRequestPrivate(Route53DomainsRequest::EnableDomainTransferLockAction, this))
{

}

/*!
 * \reimp
 */
bool EnableDomainTransferLockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableDomainTransferLockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableDomainTransferLockRequest::response(QNetworkReply * const reply) const
{
    return new EnableDomainTransferLockResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::EnableDomainTransferLockRequestPrivate
 * \brief The EnableDomainTransferLockRequestPrivate class provides private implementation for EnableDomainTransferLockRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a EnableDomainTransferLockRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
EnableDomainTransferLockRequestPrivate::EnableDomainTransferLockRequestPrivate(
    const Route53DomainsRequest::Action action, EnableDomainTransferLockRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableDomainTransferLockRequest
 * class' copy constructor.
 */
EnableDomainTransferLockRequestPrivate::EnableDomainTransferLockRequestPrivate(
    const EnableDomainTransferLockRequestPrivate &other, EnableDomainTransferLockRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
