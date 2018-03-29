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

#include "createprivatednsnamespacerequest.h"
#include "createprivatednsnamespacerequest_p.h"
#include "createprivatednsnamespaceresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  CreatePrivateDnsNamespaceRequest
 *
 * @brief  Implements ServiceDiscovery CreatePrivateDnsNamespace requests.
 *
 * @see    ServiceDiscoveryClient::createPrivateDnsNamespace
 */

/**
 * @brief  Constructs a new CreatePrivateDnsNamespaceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePrivateDnsNamespaceRequest::CreatePrivateDnsNamespaceRequest(const CreatePrivateDnsNamespaceRequest &other)
    : ServiceDiscoveryRequest(new CreatePrivateDnsNamespaceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePrivateDnsNamespaceRequest object.
 */
CreatePrivateDnsNamespaceRequest::CreatePrivateDnsNamespaceRequest()
    : ServiceDiscoveryRequest(new CreatePrivateDnsNamespaceRequestPrivate(ServiceDiscoveryRequest::CreatePrivateDnsNamespaceAction, this))
{

}

bool CreatePrivateDnsNamespaceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePrivateDnsNamespaceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePrivateDnsNamespaceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceDiscoveryClient::send
 */
AwsAbstractResponse * CreatePrivateDnsNamespaceRequest::response(QNetworkReply * const reply) const
{
    return new CreatePrivateDnsNamespaceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePrivateDnsNamespaceRequestPrivate
 *
 * @brief  Private implementation for CreatePrivateDnsNamespaceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePrivateDnsNamespaceRequestPrivate object.
 *
 * @param  action  ServiceDiscovery action being performed.
 * @param  q       Pointer to this object's public CreatePrivateDnsNamespaceRequest instance.
 */
CreatePrivateDnsNamespaceRequestPrivate::CreatePrivateDnsNamespaceRequestPrivate(
    const ServiceDiscoveryRequest::Action action, CreatePrivateDnsNamespaceRequest * const q)
    : CreatePrivateDnsNamespacePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePrivateDnsNamespaceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePrivateDnsNamespaceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePrivateDnsNamespaceRequest instance.
 */
CreatePrivateDnsNamespaceRequestPrivate::CreatePrivateDnsNamespaceRequestPrivate(
    const CreatePrivateDnsNamespaceRequestPrivate &other, CreatePrivateDnsNamespaceRequest * const q)
    : CreatePrivateDnsNamespacePrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
