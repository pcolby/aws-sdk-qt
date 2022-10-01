// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedomainrequest.h"
#include "deletedomainrequest_p.h"
#include "deletedomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::DeleteDomainRequest
 * \brief The DeleteDomainRequest class provides an interface for Route53Domains DeleteDomain requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::deleteDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDomainRequest::DeleteDomainRequest(const DeleteDomainRequest &other)
    : Route53DomainsRequest(new DeleteDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDomainRequest object.
 */
DeleteDomainRequest::DeleteDomainRequest()
    : Route53DomainsRequest(new DeleteDomainRequestPrivate(Route53DomainsRequest::DeleteDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::DeleteDomainRequestPrivate
 * \brief The DeleteDomainRequestPrivate class provides private implementation for DeleteDomainRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a DeleteDomainRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const Route53DomainsRequest::Action action, DeleteDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDomainRequest
 * class' copy constructor.
 */
DeleteDomainRequestPrivate::DeleteDomainRequestPrivate(
    const DeleteDomainRequestPrivate &other, DeleteDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
