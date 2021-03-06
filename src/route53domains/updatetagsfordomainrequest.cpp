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

#include "updatetagsfordomainrequest.h"
#include "updatetagsfordomainrequest_p.h"
#include "updatetagsfordomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::UpdateTagsForDomainRequest
 * \brief The UpdateTagsForDomainRequest class provides an interface for Route53Domains UpdateTagsForDomain requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::updateTagsForDomain
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTagsForDomainRequest::UpdateTagsForDomainRequest(const UpdateTagsForDomainRequest &other)
    : Route53DomainsRequest(new UpdateTagsForDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTagsForDomainRequest object.
 */
UpdateTagsForDomainRequest::UpdateTagsForDomainRequest()
    : Route53DomainsRequest(new UpdateTagsForDomainRequestPrivate(Route53DomainsRequest::UpdateTagsForDomainAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTagsForDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTagsForDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTagsForDomainRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTagsForDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::UpdateTagsForDomainRequestPrivate
 * \brief The UpdateTagsForDomainRequestPrivate class provides private implementation for UpdateTagsForDomainRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a UpdateTagsForDomainRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
UpdateTagsForDomainRequestPrivate::UpdateTagsForDomainRequestPrivate(
    const Route53DomainsRequest::Action action, UpdateTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTagsForDomainRequest
 * class' copy constructor.
 */
UpdateTagsForDomainRequestPrivate::UpdateTagsForDomainRequestPrivate(
    const UpdateTagsForDomainRequestPrivate &other, UpdateTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
