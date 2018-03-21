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

#include "listservicesrequest.h"
#include "listservicesrequest_p.h"
#include "listservicesresponse.h"
#include "servicediscoveryrequest_p.h"

namespace AWS {
namespace ServiceDiscovery {

/**
 * @class  ListServicesRequest
 *
 * @brief  Implements ServiceDiscovery ListServices requests.
 *
 * @see    ServiceDiscoveryClient::listServices
 */

/**
 * @brief  Constructs a new ListServicesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListServicesResponse::ListServicesResponse(

/**
 * @brief  Constructs a new ListServicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListServicesRequest::ListServicesRequest(const ListServicesRequest &other)
    : ServiceDiscoveryRequest(new ListServicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListServicesRequest object.
 */
ListServicesRequest::ListServicesRequest()
    : ServiceDiscoveryRequest(new ListServicesRequestPrivate(ServiceDiscoveryRequest::ListServicesAction, this))
{

}

bool ListServicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListServicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListServicesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * ListServicesRequest::response(QNetworkReply * const reply) const
{
    return new ListServicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListServicesRequestPrivate
 *
 * @brief  Private implementation for ListServicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListServicesRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public ListServicesRequest instance.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ServiceDiscoveryRequest::Action action, ListServicesRequest * const q)
    : ListServicesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListServicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListServicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListServicesRequest instance.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ListServicesRequestPrivate &other, ListServicesRequest * const q)
    : ListServicesPrivate(other, q)
{

}
