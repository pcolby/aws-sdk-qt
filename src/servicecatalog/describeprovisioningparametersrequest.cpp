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

#include "describeprovisioningparametersrequest.h"
#include "describeprovisioningparametersrequest_p.h"
#include "describeprovisioningparametersresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeProvisioningParametersRequest
 *
 * @brief  Implements ServiceCatalog DescribeProvisioningParameters requests.
 *
 * @see    ServiceCatalogClient::describeProvisioningParameters
 */

/**
 * @brief  Constructs a new DescribeProvisioningParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeProvisioningParametersRequest::DescribeProvisioningParametersRequest(const DescribeProvisioningParametersRequest &other)
    : ServiceCatalogRequest(new DescribeProvisioningParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeProvisioningParametersRequest object.
 */
DescribeProvisioningParametersRequest::DescribeProvisioningParametersRequest()
    : ServiceCatalogRequest(new DescribeProvisioningParametersRequestPrivate(ServiceCatalogRequest::DescribeProvisioningParametersAction, this))
{

}

bool DescribeProvisioningParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeProvisioningParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeProvisioningParametersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DescribeProvisioningParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProvisioningParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeProvisioningParametersRequestPrivate
 *
 * @brief  Private implementation for DescribeProvisioningParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisioningParametersRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribeProvisioningParametersRequest instance.
 */
DescribeProvisioningParametersRequestPrivate::DescribeProvisioningParametersRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProvisioningParametersRequest * const q)
    : DescribeProvisioningParametersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisioningParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeProvisioningParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeProvisioningParametersRequest instance.
 */
DescribeProvisioningParametersRequestPrivate::DescribeProvisioningParametersRequestPrivate(
    const DescribeProvisioningParametersRequestPrivate &other, DescribeProvisioningParametersRequest * const q)
    : DescribeProvisioningParametersPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
