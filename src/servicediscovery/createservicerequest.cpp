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

#include "createservicerequest.h"
#include "createservicerequest_p.h"
#include "createserviceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  CreateServiceRequest
 *
 * @brief  Implements ServiceDiscovery CreateService requests.
 *
 * @see    ServiceDiscoveryClient::createService
 */

/**
 * @brief  Constructs a new CreateServiceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateServiceRequest::CreateServiceRequest(const CreateServiceRequest &other)
    : ServiceDiscoveryRequest(new CreateServiceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateServiceRequest object.
 */
CreateServiceRequest::CreateServiceRequest()
    : ServiceDiscoveryRequest(new CreateServiceRequestPrivate(ServiceDiscoveryRequest::CreateServiceAction, this))
{

}

bool CreateServiceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateServiceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateServiceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateServiceRequest::response(QNetworkReply * const reply) const
{
    return new CreateServiceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateServiceRequestPrivate
 *
 * @brief  Private implementation for CreateServiceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public CreateServiceRequest instance.
 */
CreateServiceRequestPrivate::CreateServiceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, CreateServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateServiceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateServiceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateServiceRequest instance.
 */
CreateServiceRequestPrivate::CreateServiceRequestPrivate(
    const CreateServiceRequestPrivate &other, CreateServiceRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
