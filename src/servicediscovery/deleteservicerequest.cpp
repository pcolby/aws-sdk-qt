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

#include "deleteservicerequest.h"
#include "deleteservicerequest_p.h"
#include "deleteserviceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  DeleteServiceRequest
 *
 * @brief  Implements ServiceDiscovery DeleteService requests.
 *
 * @see    ServiceDiscoveryClient::deleteService
 */

/**
 * @brief  Constructs a new DeleteServiceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteServiceRequest::DeleteServiceRequest(const DeleteServiceRequest &other)
    : ServiceDiscoveryRequest(new DeleteServiceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteServiceRequest object.
 */
DeleteServiceRequest::DeleteServiceRequest()
    : ServiceDiscoveryRequest(new DeleteServiceRequestPrivate(ServiceDiscoveryRequest::DeleteServiceAction, this))
{

}

bool DeleteServiceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteServiceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteServiceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteServiceRequestPrivate
 *
 * @brief  Private implementation for DeleteServiceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public DeleteServiceRequest instance.
 */
DeleteServiceRequestPrivate::DeleteServiceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, DeleteServiceRequest * const q)
    : DeleteServicePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteServiceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteServiceRequest instance.
 */
DeleteServiceRequestPrivate::DeleteServiceRequestPrivate(
    const DeleteServiceRequestPrivate &other, DeleteServiceRequest * const q)
    : DeleteServicePrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
