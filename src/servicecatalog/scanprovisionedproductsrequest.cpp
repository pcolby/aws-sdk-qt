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

#include "scanprovisionedproductsrequest.h"
#include "scanprovisionedproductsrequest_p.h"
#include "scanprovisionedproductsresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ScanProvisionedProductsRequest
 *
 * @brief  Implements ServiceCatalog ScanProvisionedProducts requests.
 *
 * @see    ServiceCatalogClient::scanProvisionedProducts
 */

/**
 * @brief  Constructs a new ScanProvisionedProductsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ScanProvisionedProductsRequest::ScanProvisionedProductsRequest(const ScanProvisionedProductsRequest &other)
    : ServiceCatalogRequest(new ScanProvisionedProductsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ScanProvisionedProductsRequest object.
 */
ScanProvisionedProductsRequest::ScanProvisionedProductsRequest()
    : ServiceCatalogRequest(new ScanProvisionedProductsRequestPrivate(ServiceCatalogRequest::ScanProvisionedProductsAction, this))
{

}

bool ScanProvisionedProductsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ScanProvisionedProductsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ScanProvisionedProductsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ScanProvisionedProductsRequest::response(QNetworkReply * const reply) const
{
    return new ScanProvisionedProductsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ScanProvisionedProductsRequestPrivate
 *
 * @brief  Private implementation for ScanProvisionedProductsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScanProvisionedProductsRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ScanProvisionedProductsRequest instance.
 */
ScanProvisionedProductsRequestPrivate::ScanProvisionedProductsRequestPrivate(
    const ServiceCatalogRequest::Action action, ScanProvisionedProductsRequest * const q)
    : ScanProvisionedProductsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ScanProvisionedProductsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ScanProvisionedProductsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ScanProvisionedProductsRequest instance.
 */
ScanProvisionedProductsRequestPrivate::ScanProvisionedProductsRequestPrivate(
    const ScanProvisionedProductsRequestPrivate &other, ScanProvisionedProductsRequest * const q)
    : ScanProvisionedProductsPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
