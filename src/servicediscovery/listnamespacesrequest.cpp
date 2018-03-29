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

#include "listnamespacesrequest.h"
#include "listnamespacesrequest_p.h"
#include "listnamespacesresponse.h"
#include "servicediscoveryrequest_p.h"

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  ListNamespacesRequest
 *
 * @brief  Implements ServiceDiscovery ListNamespaces requests.
 *
 * @see    ServiceDiscoveryClient::listNamespaces
 */

/**
 * @brief  Constructs a new ListNamespacesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListNamespacesRequest::ListNamespacesRequest(const ListNamespacesRequest &other)
    : ServiceDiscoveryRequest(new ListNamespacesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListNamespacesRequest object.
 */
ListNamespacesRequest::ListNamespacesRequest()
    : ServiceDiscoveryRequest(new ListNamespacesRequestPrivate(ServiceDiscoveryRequest::ListNamespacesAction, this))
{

}

bool ListNamespacesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListNamespacesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListNamespacesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * ListNamespacesRequest::response(QNetworkReply * const reply) const
{
    return new ListNamespacesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListNamespacesRequestPrivate
 *
 * @brief  Private implementation for ListNamespacesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListNamespacesRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public ListNamespacesRequest instance.
 */
ListNamespacesRequestPrivate::ListNamespacesRequestPrivate(
    const ServiceDiscoveryRequest::Action action, ListNamespacesRequest * const q)
    : ListNamespacesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListNamespacesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListNamespacesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListNamespacesRequest instance.
 */
ListNamespacesRequestPrivate::ListNamespacesRequestPrivate(
    const ListNamespacesRequestPrivate &other, ListNamespacesRequest * const q)
    : ListNamespacesPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace AWS
