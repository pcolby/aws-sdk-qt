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

#include "listoperationsrequest.h"
#include "listoperationsrequest_p.h"
#include "listoperationsresponse.h"
#include "servicediscoveryrequest_p.h"

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  ListOperationsRequest
 *
 * @brief  Implements ServiceDiscovery ListOperations requests.
 *
 * @see    ServiceDiscoveryClient::listOperations
 */

/**
 * @brief  Constructs a new ListOperationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListOperationsResponse::ListOperationsResponse(

/**
 * @brief  Constructs a new ListOperationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListOperationsRequest::ListOperationsRequest(const ListOperationsRequest &other)
    : ServiceDiscoveryRequest(new ListOperationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListOperationsRequest object.
 */
ListOperationsRequest::ListOperationsRequest()
    : ServiceDiscoveryRequest(new ListOperationsRequestPrivate(ServiceDiscoveryRequest::ListOperationsAction, this))
{

}

bool ListOperationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListOperationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListOperationsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * ListOperationsRequest::response(QNetworkReply * const reply) const
{
    return new ListOperationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListOperationsRequestPrivate
 *
 * @brief  Private implementation for ListOperationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListOperationsRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public ListOperationsRequest instance.
 */
ListOperationsRequestPrivate::ListOperationsRequestPrivate(
    const ServiceDiscoveryRequest::Action action, ListOperationsRequest * const q)
    : ListOperationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListOperationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListOperationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListOperationsRequest instance.
 */
ListOperationsRequestPrivate::ListOperationsRequestPrivate(
    const ListOperationsRequestPrivate &other, ListOperationsRequest * const q)
    : ListOperationsPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace AWS
