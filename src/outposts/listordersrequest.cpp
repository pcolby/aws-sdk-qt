// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listordersrequest.h"
#include "listordersrequest_p.h"
#include "listordersresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::ListOrdersRequest
 * \brief The ListOrdersRequest class provides an interface for Outposts ListOrders requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::listOrders
 */

/*!
 * Constructs a copy of \a other.
 */
ListOrdersRequest::ListOrdersRequest(const ListOrdersRequest &other)
    : OutpostsRequest(new ListOrdersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOrdersRequest object.
 */
ListOrdersRequest::ListOrdersRequest()
    : OutpostsRequest(new ListOrdersRequestPrivate(OutpostsRequest::ListOrdersAction, this))
{

}

/*!
 * \reimp
 */
bool ListOrdersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOrdersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOrdersRequest::response(QNetworkReply * const reply) const
{
    return new ListOrdersResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::ListOrdersRequestPrivate
 * \brief The ListOrdersRequestPrivate class provides private implementation for ListOrdersRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a ListOrdersRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
ListOrdersRequestPrivate::ListOrdersRequestPrivate(
    const OutpostsRequest::Action action, ListOrdersRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOrdersRequest
 * class' copy constructor.
 */
ListOrdersRequestPrivate::ListOrdersRequestPrivate(
    const ListOrdersRequestPrivate &other, ListOrdersRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
