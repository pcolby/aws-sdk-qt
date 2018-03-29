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

#include "listserverneighborsrequest.h"
#include "listserverneighborsrequest_p.h"
#include "listserverneighborsresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  ListServerNeighborsRequest
 *
 * @brief  Implements ApplicationDiscoveryService ListServerNeighbors requests.
 *
 * @see    ApplicationDiscoveryServiceClient::listServerNeighbors
 */

/**
 * @brief  Constructs a new ListServerNeighborsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListServerNeighborsRequest::ListServerNeighborsRequest(const ListServerNeighborsRequest &other)
    : ApplicationDiscoveryServiceRequest(new ListServerNeighborsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListServerNeighborsRequest object.
 */
ListServerNeighborsRequest::ListServerNeighborsRequest()
    : ApplicationDiscoveryServiceRequest(new ListServerNeighborsRequestPrivate(ApplicationDiscoveryServiceRequest::ListServerNeighborsAction, this))
{

}

bool ListServerNeighborsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListServerNeighborsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListServerNeighborsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServerNeighborsRequest::response(QNetworkReply * const reply) const
{
    return new ListServerNeighborsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListServerNeighborsRequestPrivate
 *
 * @brief  Private implementation for ListServerNeighborsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListServerNeighborsRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public ListServerNeighborsRequest instance.
 */
ListServerNeighborsRequestPrivate::ListServerNeighborsRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, ListServerNeighborsRequest * const q)
    : ListServerNeighborsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListServerNeighborsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListServerNeighborsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListServerNeighborsRequest instance.
 */
ListServerNeighborsRequestPrivate::ListServerNeighborsRequestPrivate(
    const ListServerNeighborsRequestPrivate &other, ListServerNeighborsRequest * const q)
    : ListServerNeighborsPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
