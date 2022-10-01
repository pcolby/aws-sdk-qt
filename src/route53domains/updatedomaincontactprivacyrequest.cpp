// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomaincontactprivacyrequest.h"
#include "updatedomaincontactprivacyrequest_p.h"
#include "updatedomaincontactprivacyresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactPrivacyRequest
 * \brief The UpdateDomainContactPrivacyRequest class provides an interface for Route53Domains UpdateDomainContactPrivacy requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateDomainContactPrivacy
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainContactPrivacyRequest::UpdateDomainContactPrivacyRequest(const UpdateDomainContactPrivacyRequest &other)
    : Route53DomainsRequest(new UpdateDomainContactPrivacyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainContactPrivacyRequest object.
 */
UpdateDomainContactPrivacyRequest::UpdateDomainContactPrivacyRequest()
    : Route53DomainsRequest(new UpdateDomainContactPrivacyRequestPrivate(Route53DomainsRequest::UpdateDomainContactPrivacyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainContactPrivacyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainContactPrivacyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainContactPrivacyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainContactPrivacyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::UpdateDomainContactPrivacyRequestPrivate
 * \brief The UpdateDomainContactPrivacyRequestPrivate class provides private implementation for UpdateDomainContactPrivacyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateDomainContactPrivacyRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
UpdateDomainContactPrivacyRequestPrivate::UpdateDomainContactPrivacyRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateDomainContactPrivacyRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainContactPrivacyRequest
 * class' copy constructor.
 */
UpdateDomainContactPrivacyRequestPrivate::UpdateDomainContactPrivacyRequestPrivate(
    const UpdateDomainContactPrivacyRequestPrivate &other, UpdateDomainContactPrivacyRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
