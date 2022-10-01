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

#include "untagresourcesrequest.h"
#include "untagresourcesrequest_p.h"
#include "untagresourcesresponse.h"
#include "resourcegroupstaggingapirequest_p.h"

namespace QtAws {
namespace ResourceGroupsTaggingApi {

/*!
 * \class QtAws::ResourceGroupsTaggingApi::UntagResourcesRequest
 * \brief The UntagResourcesRequest class provides an interface for ResourceGroupsTaggingApi UntagResources requests.
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 *
 *
 * \sa ResourceGroupsTaggingApiClient::untagResources
 */

/*!
 * Constructs a copy of \a other.
 */
UntagResourcesRequest::UntagResourcesRequest(const UntagResourcesRequest &other)
    : ResourceGroupsTaggingApiRequest(new UntagResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagResourcesRequest object.
 */
UntagResourcesRequest::UntagResourcesRequest()
    : ResourceGroupsTaggingApiRequest(new UntagResourcesRequestPrivate(ResourceGroupsTaggingApiRequest::UntagResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool UntagResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagResourcesRequest::response(QNetworkReply * const reply) const
{
    return new UntagResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::ResourceGroupsTaggingApi::UntagResourcesRequestPrivate
 * \brief The UntagResourcesRequestPrivate class provides private implementation for UntagResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsResourceGroupsTaggingApi
 */

/*!
 * Constructs a UntagResourcesRequestPrivate object for ResourceGroupsTaggingApi \a action,
 * with public implementation \a q.
 */
UntagResourcesRequestPrivate::UntagResourcesRequestPrivate(
    const ResourceGroupsTaggingApiRequest::Action action, UntagResourcesRequest * const q)
    : ResourceGroupsTaggingApiRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagResourcesRequest
 * class' copy constructor.
 */
UntagResourcesRequestPrivate::UntagResourcesRequestPrivate(
    const UntagResourcesRequestPrivate &other, UntagResourcesRequest * const q)
    : ResourceGroupsTaggingApiRequestPrivate(other, q)
{

}

} // namespace ResourceGroupsTaggingApi
} // namespace QtAws
