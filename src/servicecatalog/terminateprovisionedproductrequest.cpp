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

#include "terminateprovisionedproductrequest.h"
#include "terminateprovisionedproductrequest_p.h"
#include "terminateprovisionedproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  TerminateProvisionedProductRequest
 *
 * @brief  Implements ServiceCatalog TerminateProvisionedProduct requests.
 *
 * @see    ServiceCatalogClient::terminateProvisionedProduct
 */

/**
 * @brief  Constructs a new TerminateProvisionedProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateProvisionedProductResponse::TerminateProvisionedProductResponse(

/**
 * @brief  Constructs a new TerminateProvisionedProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
TerminateProvisionedProductRequest::TerminateProvisionedProductRequest(const TerminateProvisionedProductRequest &other)
    : ServiceCatalogRequest(new TerminateProvisionedProductRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new TerminateProvisionedProductRequest object.
 */
TerminateProvisionedProductRequest::TerminateProvisionedProductRequest()
    : ServiceCatalogRequest(new TerminateProvisionedProductRequestPrivate(ServiceCatalogRequest::TerminateProvisionedProductAction, this))
{

}

bool TerminateProvisionedProductRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an TerminateProvisionedProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An TerminateProvisionedProductResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * TerminateProvisionedProductRequest::response(QNetworkReply * const reply) const
{
    return new TerminateProvisionedProductResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  TerminateProvisionedProductRequestPrivate
 *
 * @brief  Private implementation for TerminateProvisionedProductRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateProvisionedProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public TerminateProvisionedProductRequest instance.
 */
TerminateProvisionedProductRequestPrivate::TerminateProvisionedProductRequestPrivate(
    const ServiceCatalogRequest::Action action, TerminateProvisionedProductRequest * const q)
    : TerminateProvisionedProductPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new TerminateProvisionedProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the TerminateProvisionedProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public TerminateProvisionedProductRequest instance.
 */
TerminateProvisionedProductRequestPrivate::TerminateProvisionedProductRequestPrivate(
    const TerminateProvisionedProductRequestPrivate &other, TerminateProvisionedProductRequest * const q)
    : TerminateProvisionedProductPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
