// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomaincontactrequest.h"
#include "updatedomaincontactrequest_p.h"
#include "updatedomaincontactresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactRequest
 * \brief The UpdateDomainContactRequest class provides an interface for Route53Domains UpdateDomainContact requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainContact
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainContactRequest::UpdateDomainContactRequest(const UpdateDomainContactRequest &other)
    : Route53DomainsRequest(new UpdateDomainContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainContactRequest object.
 */
UpdateDomainContactRequest::UpdateDomainContactRequest()
    : Route53DomainsRequest(new UpdateDomainContactRequestPrivate(Route53DomainsRequest::UpdateDomainContactAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainContactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainContactResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactRequestPrivate
 * \brief The UpdateDomainContactRequestPrivate class provides private implementation for UpdateDomainContactRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateDomainContactRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
UpdateDomainContactRequestPrivate::UpdateDomainContactRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateDomainContactRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainContactRequest
 * class' copy constructor.
 */
UpdateDomainContactRequestPrivate::UpdateDomainContactRequestPrivate(
    const UpdateDomainContactRequestPrivate &other, UpdateDomainContactRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
