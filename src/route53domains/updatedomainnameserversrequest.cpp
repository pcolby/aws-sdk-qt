// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainnameserversrequest.h"
#include "updatedomainnameserversrequest_p.h"
#include "updatedomainnameserversresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainNameserversRequest
 * \brief The UpdateDomainNameserversRequest class provides an interface for Route53Domains UpdateDomainNameservers requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainNameservers
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainNameserversRequest::UpdateDomainNameserversRequest(const UpdateDomainNameserversRequest &other)
    : Route53DomainsRequest(new UpdateDomainNameserversRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainNameserversRequest object.
 */
UpdateDomainNameserversRequest::UpdateDomainNameserversRequest()
    : Route53DomainsRequest(new UpdateDomainNameserversRequestPrivate(Route53DomainsRequest::UpdateDomainNameserversAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainNameserversRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainNameserversResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainNameserversRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainNameserversResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainNameserversRequestPrivate
 * \brief The UpdateDomainNameserversRequestPrivate class provides private implementation for UpdateDomainNameserversRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateDomainNameserversRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
UpdateDomainNameserversRequestPrivate::UpdateDomainNameserversRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateDomainNameserversRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainNameserversRequest
 * class' copy constructor.
 */
UpdateDomainNameserversRequestPrivate::UpdateDomainNameserversRequestPrivate(
    const UpdateDomainNameserversRequestPrivate &other, UpdateDomainNameserversRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
