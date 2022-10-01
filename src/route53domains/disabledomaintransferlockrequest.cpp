// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disabledomaintransferlockrequest.h"
#include "disabledomaintransferlockrequest_p.h"
#include "disabledomaintransferlockresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::DisableDomainTransferLockRequest
 * \brief The DisableDomainTransferLockRequest class provides an interface for Route53Domains DisableDomainTransferLock requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::disableDomainTransferLock
 */

/*!
 * Constructs a copy of \a other.
 */
DisableDomainTransferLockRequest::DisableDomainTransferLockRequest(const DisableDomainTransferLockRequest &other)
    : Route53DomainsRequest(new DisableDomainTransferLockRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableDomainTransferLockRequest object.
 */
DisableDomainTransferLockRequest::DisableDomainTransferLockRequest()
    : Route53DomainsRequest(new DisableDomainTransferLockRequestPrivate(Route53DomainsRequest::DisableDomainTransferLockAction, this))
{

}

/*!
 * \reimp
 */
bool DisableDomainTransferLockRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableDomainTransferLockResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableDomainTransferLockRequest::response(QNetworkReply * const reply) const
{
    return new DisableDomainTransferLockResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::DisableDomainTransferLockRequestPrivate
 * \brief The DisableDomainTransferLockRequestPrivate class provides private implementation for DisableDomainTransferLockRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a DisableDomainTransferLockRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
DisableDomainTransferLockRequestPrivate::DisableDomainTransferLockRequestPrivate(
    const Route53DomainsRequest::Action action, DisableDomainTransferLockRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableDomainTransferLockRequest
 * class' copy constructor.
 */
DisableDomainTransferLockRequestPrivate::DisableDomainTransferLockRequestPrivate(
    const DisableDomainTransferLockRequestPrivate &other, DisableDomainTransferLockRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
