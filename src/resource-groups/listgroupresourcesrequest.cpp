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

#include "listgroupresourcesrequest.h"
#include "listgroupresourcesrequest_p.h"
#include "listgroupresourcesresponse.h"
#include "resourcegroupsrequest_p.h"

namespace QtAws {
namespace ResourceGroups {

/**
 * @class  ListGroupResourcesRequest
 *
 * @brief  Implements ResourceGroups ListGroupResources requests.
 *
 * @see    ResourceGroupsClient::listGroupResources
 */

/**
 * @brief  Constructs a new ListGroupResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListGroupResourcesRequest::ListGroupResourcesRequest(const ListGroupResourcesRequest &other)
    : ResourceGroupsRequest(new ListGroupResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListGroupResourcesRequest object.
 */
ListGroupResourcesRequest::ListGroupResourcesRequest()
    : ResourceGroupsRequest(new ListGroupResourcesRequestPrivate(ResourceGroupsRequest::ListGroupResourcesAction, this))
{

}

bool ListGroupResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListGroupResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListGroupResourcesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ResourceGroupsClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListGroupResourcesRequestPrivate
 *
 * @brief  Private implementation for ListGroupResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupResourcesRequestPrivate object.
 *
 * @param  action  ResourceGroups action being performed.
 * @param  q       Pointer to this object's public ListGroupResourcesRequest instance.
 */
ListGroupResourcesRequestPrivate::ListGroupResourcesRequestPrivate(
    const ResourceGroupsRequest::Action action, ListGroupResourcesRequest * const q)
    : ResourceGroupsRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListGroupResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListGroupResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListGroupResourcesRequest instance.
 */
ListGroupResourcesRequestPrivate::ListGroupResourcesRequestPrivate(
    const ListGroupResourcesRequestPrivate &other, ListGroupResourcesRequest * const q)
    : ResourceGroupsRequestPrivate(other, q)
{

}

} // namespace ResourceGroups
} // namespace QtAws
