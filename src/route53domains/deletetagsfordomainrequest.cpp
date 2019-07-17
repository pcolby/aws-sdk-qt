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

#include "deletetagsfordomainrequest.h"
#include "deletetagsfordomainrequest_p.h"
#include "deletetagsfordomainresponse.h"
#include "route53domainsrequest_p.h"

namespace QtAws {
namespace Route53Domains {

/*!
 * \class QtAws::Route53Domains::DeleteTagsForDomainRequest
 * \brief The DeleteTagsForDomainRequest class provides an interface for Route53Domains DeleteTagsForDomain requests.
 *
 * \inmodule QtAwsRoute53Domains
 *
 *  Amazon Route 53 API actions let you register domain names and perform related
 *
 * \sa Route53DomainsClient::deleteTagsForDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTagsForDomainRequest::DeleteTagsForDomainRequest(const DeleteTagsForDomainRequest &other)
    : Route53DomainsRequest(new DeleteTagsForDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTagsForDomainRequest object.
 */
DeleteTagsForDomainRequest::DeleteTagsForDomainRequest()
    : Route53DomainsRequest(new DeleteTagsForDomainRequestPrivate(Route53DomainsRequest::DeleteTagsForDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTagsForDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTagsForDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTagsForDomainRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTagsForDomainResponse(*this, reply);
}

/*!
 * \class QtAws::Route53Domains::DeleteTagsForDomainRequestPrivate
 * \brief The DeleteTagsForDomainRequestPrivate class provides private implementation for DeleteTagsForDomainRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53Domains
 */

/*!
 * Constructs a DeleteTagsForDomainRequestPrivate object for Route53Domains \a action,
 * with public implementation \a q.
 */
DeleteTagsForDomainRequestPrivate::DeleteTagsForDomainRequestPrivate(
    const Route53DomainsRequest::Action action, DeleteTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTagsForDomainRequest
 * class' copy constructor.
 */
DeleteTagsForDomainRequestPrivate::DeleteTagsForDomainRequestPrivate(
    const DeleteTagsForDomainRequestPrivate &other, DeleteTagsForDomainRequest * const q)
    : Route53DomainsRequestPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace QtAws
