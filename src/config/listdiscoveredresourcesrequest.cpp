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

#include "listdiscoveredresourcesrequest.h"
#include "listdiscoveredresourcesrequest_p.h"
#include "listdiscoveredresourcesresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  ListDiscoveredResourcesRequest
 *
 * @brief  Implements ConfigService ListDiscoveredResources requests.
 *
 * @see    ConfigServiceClient::listDiscoveredResources
 */

/**
 * @brief  Constructs a new ListDiscoveredResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDiscoveredResourcesRequest::ListDiscoveredResourcesRequest(const ListDiscoveredResourcesRequest &other)
    : ConfigServiceRequest(new ListDiscoveredResourcesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDiscoveredResourcesRequest object.
 */
ListDiscoveredResourcesRequest::ListDiscoveredResourcesRequest()
    : ConfigServiceRequest(new ListDiscoveredResourcesRequestPrivate(ConfigServiceRequest::ListDiscoveredResourcesAction, this))
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
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDiscoveredResourcesRequest::response(QNetworkReply * const reply) const
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
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public ListDiscoveredResourcesRequest instance.
 */
ListDiscoveredResourcesRequestPrivate::ListDiscoveredResourcesRequestPrivate(
    const ConfigServiceRequest::Action action, ListDiscoveredResourcesRequest * const q)
    : ConfigServiceRequestPrivate(action, q)
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
    : ConfigServiceRequestPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
