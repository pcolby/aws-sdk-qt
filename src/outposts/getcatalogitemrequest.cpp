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
