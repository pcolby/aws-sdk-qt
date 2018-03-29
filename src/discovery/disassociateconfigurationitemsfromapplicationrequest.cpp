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

#include "disassociateconfigurationitemsfromapplicationrequest.h"
#include "disassociateconfigurationitemsfromapplicationrequest_p.h"
#include "disassociateconfigurationitemsfromapplicationresponse.h"
#include "applicationdiscoveryservicerequest_p.h"

namespace AWS {
namespace ApplicationDiscoveryService {

/**
 * @class  DisassociateConfigurationItemsFromApplicationRequest
 *
 * @brief  Implements ApplicationDiscoveryService DisassociateConfigurationItemsFromApplication requests.
 *
 * @see    ApplicationDiscoveryServiceClient::disassociateConfigurationItemsFromApplication
 */

/**
 * @brief  Constructs a new DisassociateConfigurationItemsFromApplicationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateConfigurationItemsFromApplicationRequest::DisassociateConfigurationItemsFromApplicationRequest(const DisassociateConfigurationItemsFromApplicationRequest &other)
    : ApplicationDiscoveryServiceRequest(new DisassociateConfigurationItemsFromApplicationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateConfigurationItemsFromApplicationRequest object.
 */
DisassociateConfigurationItemsFromApplicationRequest::DisassociateConfigurationItemsFromApplicationRequest()
    : ApplicationDiscoveryServiceRequest(new DisassociateConfigurationItemsFromApplicationRequestPrivate(ApplicationDiscoveryServiceRequest::DisassociateConfigurationItemsFromApplicationAction, this))
{

}

bool DisassociateConfigurationItemsFromApplicationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateConfigurationItemsFromApplicationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateConfigurationItemsFromApplicationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ApplicationDiscoveryServiceClient::send
 */
AwsAbstractResponse * DisassociateConfigurationItemsFromApplicationRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateConfigurationItemsFromApplicationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateConfigurationItemsFromApplicationRequestPrivate
 *
 * @brief  Private implementation for DisassociateConfigurationItemsFromApplicationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConfigurationItemsFromApplicationRequestPrivate object.
 *
 * @param  action  ApplicationDiscoveryService action being performed.
 * @param  q       Pointer to this object's public DisassociateConfigurationItemsFromApplicationRequest instance.
 */
DisassociateConfigurationItemsFromApplicationRequestPrivate::DisassociateConfigurationItemsFromApplicationRequestPrivate(
    const ApplicationDiscoveryServiceRequest::Action action, DisassociateConfigurationItemsFromApplicationRequest * const q)
    : DisassociateConfigurationItemsFromApplicationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateConfigurationItemsFromApplicationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateConfigurationItemsFromApplicationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateConfigurationItemsFromApplicationRequest instance.
 */
DisassociateConfigurationItemsFromApplicationRequestPrivate::DisassociateConfigurationItemsFromApplicationRequestPrivate(
    const DisassociateConfigurationItemsFromApplicationRequestPrivate &other, DisassociateConfigurationItemsFromApplicationRequest * const q)
    : DisassociateConfigurationItemsFromApplicationPrivate(other, q)
{

}

} // namespace ApplicationDiscoveryService
} // namespace AWS
