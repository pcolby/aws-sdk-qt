/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listdiscoveredresourcesrequest.h"
#include "listdiscoveredresourcesrequest_p.h"
#include "listdiscoveredresourcesresponse.h"
#include "migrationhubrequest_p.h"

namespace AWS {
namespace MigrationHub {

/**
 * @class  ListDiscoveredResourcesRequest
 *
 * @brief  Implements MigrationHub ListDiscoveredResources requests.
 *
 * @see    MigrationHubClient::listDiscoveredResources
 */

/**
 * @brief  Constructs a new ListDiscoveredResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDiscoveredResourcesRequest::ListDiscoveredResourcesRequest(const ListDiscoveredResourcesRequest &other)
    : MigrationHubRequest(new ListDiscoveredResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDiscoveredResourcesRequest object.
 */
ListDiscoveredResourcesRequest::ListDiscoveredResourcesRequest()
    : MigrationHubRequest(new ListDiscoveredResourcesRequestPrivate(MigrationHubRequest::ListDiscoveredResourcesAction, this))
{

}

bool ListDiscoveredResourcesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDiscoveredResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDiscoveredResourcesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
AwsAbstractResponse * ListDiscoveredResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDiscoveredResourcesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDiscoveredResourcesRequestPrivate
 *
 * @brief  Private implementation for ListDiscoveredResourcesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDiscoveredResourcesRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public ListDiscoveredResourcesRequest instance.
 */
ListDiscoveredResourcesRequestPrivate::ListDiscoveredResourcesRequestPrivate(
    const MigrationHubRequest::Action action, ListDiscoveredResourcesRequest * const q)
    : ListDiscoveredResourcesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDiscoveredResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDiscoveredResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDiscoveredResourcesRequest instance.
 */
ListDiscoveredResourcesRequestPrivate::ListDiscoveredResourcesRequestPrivate(
    const ListDiscoveredResourcesRequestPrivate &other, ListDiscoveredResourcesRequest * const q)
    : ListDiscoveredResourcesPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace AWS
