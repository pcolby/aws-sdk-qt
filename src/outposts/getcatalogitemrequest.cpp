// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcatalogitemrequest.h"
#include "getcatalogitemrequest_p.h"
#include "getcatalogitemresponse.h"
#include "outpostsrequest_p.h"

namespace QtAws {
namespace Outposts {

/*!
 * \class QtAws::Outposts::GetCatalogItemRequest
 * \brief The GetCatalogItemRequest class provides an interface for Outposts GetCatalogItem requests.
 *
 * \inmodule QtAwsOutposts
 *
 *  Amazon Web Services Outposts is a fully managed service that extends Amazon Web Services infrastructure, APIs, and tools
 *  to customer premises. By providing local access to Amazon Web Services managed infrastructure, Amazon Web Services
 *  Outposts enables customers to build and run applications on premises using the same programming interfaces as in Amazon
 *  Web Services Regions, while using local compute and storage resources for lower latency and local data processing
 *
 * \sa OutpostsClient::getCatalogItem
 */

/*!
 * Constructs a copy of \a other.
 */
GetCatalogItemRequest::GetCatalogItemRequest(const GetCatalogItemRequest &other)
    : OutpostsRequest(new GetCatalogItemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCatalogItemRequest object.
 */
GetCatalogItemRequest::GetCatalogItemRequest()
    : OutpostsRequest(new GetCatalogItemRequestPrivate(OutpostsRequest::GetCatalogItemAction, this))
{

}

/*!
 * \reimp
 */
bool GetCatalogItemRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCatalogItemResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCatalogItemRequest::response(QNetworkReply * const reply) const
{
    return new GetCatalogItemResponse(*this, reply);
}

/*!
 * \class QtAws::Outposts::GetCatalogItemRequestPrivate
 * \brief The GetCatalogItemRequestPrivate class provides private implementation for GetCatalogItemRequest.
 * \internal
 *
 * \inmodule QtAwsOutposts
 */

/*!
 * Constructs a GetCatalogItemRequestPrivate object for Outposts \a action,
 * with public implementation \a q.
 */
GetCatalogItemRequestPrivate::GetCatalogItemRequestPrivate(
    const OutpostsRequest::Action action, GetCatalogItemRequest * const q)
    : OutpostsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCatalogItemRequest
 * class' copy constructor.
 */
GetCatalogItemRequestPrivate::GetCatalogItemRequestPrivate(
    const GetCatalogItemRequestPrivate &other, GetCatalogItemRequest * const q)
    : OutpostsRequestPrivate(other, q)
{

}

} // namespace Outposts
} // namespace QtAws
