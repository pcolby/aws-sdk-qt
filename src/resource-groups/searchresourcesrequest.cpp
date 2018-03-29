/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "searchresourcesrequest.h"
#include "searchresourcesrequest_p.h"
#include "searchresourcesresponse.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  SearchResourcesRequest
 *
 * @brief  Implements ResourceGroups SearchResources requests.
 *
 * @see    ResourceGroupsClient::searchResources
 */

/**
 * @brief  Constructs a new SearchResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchResourcesRequest::SearchResourcesRequest(const SearchResourcesRequest &other)
    : ResourceGroupsRequest(new SearchResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchResourcesRequest object.
 */
SearchResourcesRequest::SearchResourcesRequest()
    : ResourceGroupsRequest(new SearchResourcesRequestPrivate(ResourceGroupsRequest::SearchResourcesAction, this))
{

}

bool SearchResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ResourceGroupsClient::send
 */
AwsAbstractResponse * SearchResourcesRequest::response(QNetworkReply * const reply) const
{
    return new SearchResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchResourcesRequestPrivate
 *
 * @brief  Private implementation for SearchResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchResourcesRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed.
 * @param  q       Pointer to this object's public SearchResourcesRequest instance.
 */
SearchResourcesRequestPrivate::SearchResourcesRequestPrivate(
    const ResourceGroupsRequest::Action action, SearchResourcesRequest * const q)
    : SearchResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchResourcesRequest instance.
 */
SearchResourcesRequestPrivate::SearchResourcesRequestPrivate(
    const SearchResourcesRequestPrivate &other, SearchResourcesRequest * const q)
    : SearchResourcesPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
