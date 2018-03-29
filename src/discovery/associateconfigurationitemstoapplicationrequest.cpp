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

#include "associateconfigurationitemstoapplicationrequest.h"
#include "associateconfigurationitemstoapplicationrequest_p.h"
#include "associateconfigurationitemstoapplicationresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  AssociateConfigurationItemsToApplicationRequest
 *
 * @brief  Implements ApplicationDiscoveryService AssociateConfigurationItemsToApplication requests.
 *
 * @see    ApplicationDiscoveryServiceClient::associateConfigurationItemsToApplication
 */

/**
 * @brief  Constructs a new AssociateConfigurationItemsToApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociateConfigurationItemsToApplicationRequest::AssociateConfigurationItemsToApplicationRequest(const AssociateConfigurationItemsToApplicationRequest &other)
    : ApplicationDiscoveryServiceRequest(new AssociateConfigurationItemsToApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociateConfigurationItemsToApplicationRequest object.
 */
AssociateConfigurationItemsToApplicationRequest::AssociateConfigurationItemsToApplicationRequest()
    : ApplicationDiscoveryServiceRequest(new AssociateConfigurationItemsToApplicationRequestPrivate(ApplicationDiscoveryServiceRequest::AssociateConfigurationItemsToApplicationAction, this))
{

}

bool AssociateConfigurationItemsToApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociateConfigurationItemsToApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociateConfigurationItemsToApplicationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * AssociateConfigurationItemsToApplicationRequest::response(QNetworkReply * const reply) const
{
    return new AssociateConfigurationItemsToApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociateConfigurationItemsToApplicationRequestPrivate
 *
 * @brief  Private implementation for AssociateConfigurationItemsToApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateConfigurationItemsToApplicationRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public AssociateConfigurationItemsToApplicationRequest instance.
 */
AssociateConfigurationItemsToApplicationRequestPrivate::AssociateConfigurationItemsToApplicationRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, AssociateConfigurationItemsToApplicationRequest * const q)
    : AssociateConfigurationItemsToApplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociateConfigurationItemsToApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociateConfigurationItemsToApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociateConfigurationItemsToApplicationRequest instance.
 */
AssociateConfigurationItemsToApplicationRequestPrivate::AssociateConfigurationItemsToApplicationRequestPrivate(
    const AssociateConfigurationItemsToApplicationRequestPrivate &other, AssociateConfigurationItemsToApplicationRequest * const q)
    : AssociateConfigurationItemsToApplicationPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace AWS
