// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
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
