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
