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

#include "describeprovisionedproductplanrequest.h"
#include "describeprovisionedproductplanrequest_p.h"
#include "describeprovisionedproductplanresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribeProvisionedProductPlanRequest
 *
 * @brief  Implements ServiceCatalog DescribeProvisionedProductPlan requests.
 *
 * @see    ServiceCatalogClient::describeProvisionedProductPlan
 */

/**
 * @brief  Constructs a new DescribeProvisionedProductPlanRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeProvisionedProductPlanRequest::DescribeProvisionedProductPlanRequest(const DescribeProvisionedProductPlanRequest &other)
    : ServiceCatalogRequest(new DescribeProvisionedProductPlanRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribeProvisionedProductPlanRequest object.
 */
DescribeProvisionedProductPlanRequest::DescribeProvisionedProductPlanRequest()
    : ServiceCatalogRequest(new DescribeProvisionedProductPlanRequestPrivate(ServiceCatalogRequest::DescribeProvisionedProductPlanAction, this))
{

}

bool DescribeProvisionedProductPlanRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribeProvisionedProductPlanResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeProvisionedProductPlanResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DescribeProvisionedProductPlanRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProvisionedProductPlanResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribeProvisionedProductPlanRequestPrivate
 *
 * @brief  Private implementation for DescribeProvisionedProductPlanRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisionedProductPlanRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribeProvisionedProductPlanRequest instance.
 */
DescribeProvisionedProductPlanRequestPrivate::DescribeProvisionedProductPlanRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProvisionedProductPlanRequest * const q)
    : DescribeProvisionedProductPlanPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProvisionedProductPlanRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeProvisionedProductPlanRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeProvisionedProductPlanRequest instance.
 */
DescribeProvisionedProductPlanRequestPrivate::DescribeProvisionedProductPlanRequestPrivate(
    const DescribeProvisionedProductPlanRequestPrivate &other, DescribeProvisionedProductPlanRequest * const q)
    : DescribeProvisionedProductPlanPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
