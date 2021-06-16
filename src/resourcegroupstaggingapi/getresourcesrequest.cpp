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

#include "getresourcesrequest.h"
#include "getresourcesrequest_p.h"
#include "getresourcesresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingAPI {

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetResourcesRequest
 * \brief The GetResourcesRequest class provides an interface for ResourceGroupsTaggingAPI GetResources requests.
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 *
 *
 * \sa ResourceGroupsTaggingAPIClient::getResources
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcesRequest::GetResourcesRequest(const GetResourcesRequest &other)
    : ResourceGroupsTaggingAPIRequest(new GetResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcesRequest object.
 */
GetResourcesRequest::GetResourcesRequest()
    : ResourceGroupsTaggingAPIRequest(new GetResourcesRequestPrivate(ResourceGroupsTaggingAPIRequest::GetResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcesRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTaggingAPI::GetResourcesRequestPrivate
 * \brief The GetResourcesRequestPrivate class provides private implementation for GetResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingAPI
 */

/*!
 * Constructs a GetResourcesRequestPrivate object for ResourceGroupsTaggingAPI \a action,
 * with public implementation \a q.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const ResourceGroupsTaggingAPIRequest::Action action, GetResourcesRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcesRequest
 * class' copy constructor.
 */
GetResourcesRequestPrivate::GetResourcesRequestPrivate(
    const GetResourcesRequestPrivate &other, GetResourcesRequest * const q)
    : ResourceGroupsTaggingAPIRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingAPI
} // namespace QtAws
