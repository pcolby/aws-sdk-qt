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

#include "listsitesrequest.h"
#include "listsitesrequest_p.h"
#include "listsitesresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListSitesRequest
 * \brief The ListSitesRequest class provides an interface for Outposts ListSites requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  AWS Outposts is a fully managed service that extends AWS infrastructure, APIs, and tools to customer premises. By
 *  providing local access to AWS managed infrastructure, AWS Outposts enables customers to build and run applications on
 *  premises using the same programming interfaces as in AWS Regions, while using local compute and storage resources for
 *  lower latency and local data processing
 *
 * \sa OutpostsClient::listSites
 */

/*!
 * Constructs a copy of \a other.
 */
ListSitesRequest::ListSitesRequest(const ListSitesRequest &other)
    : OutpostsRequest(new ListSitesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSitesRequest object.
 */
ListSitesRequest::ListSitesRequest()
    : OutpostsRequest(new ListSitesRequestPrivate(OutpostsRequest::ListSitesAction, this))
{

}

/*!
 * \reimp
 */
bool ListSitesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSitesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSitesRequest::response(QNetworkReply * const reply) const
{
    return new ListSitesResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::ListSitesRequestPrivate
 * \brief The ListSitesRequestPrivate class provides private implementation for ListSitesRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListSitesRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
ListSitesRequestPrivate::ListSitesRequestPrivate(
    const OutpostsRequest::Action action, ListSitesRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSitesRequest
 * class' copy constructor.
 */
ListSitesRequestPrivate::ListSitesRequestPrivate(
    const ListSitesRequestPrivate &other, ListSitesRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
