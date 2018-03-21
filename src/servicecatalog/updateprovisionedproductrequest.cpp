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

#include "updateprovisionedproductrequest.h"
#include "updateprovisionedproductrequest_p.h"
#include "updateprovisionedproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  UpdateProvisionedProductRequest
 *
 * @brief  Implements ServiceCatalog UpdateProvisionedProduct requests.
 *
 * @see    ServiceCatalogClient::updateProvisionedProduct
 */

/**
 * @brief  Constructs a new UpdateProvisionedProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateProvisionedProductRequest::UpdateProvisionedProductRequest(const UpdateProvisionedProductRequest &other)
    : ServiceCatalogRequest(new UpdateProvisionedProductRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateProvisionedProductRequest object.
 */
UpdateProvisionedProductRequest::UpdateProvisionedProductRequest()
    : ServiceCatalogRequest(new UpdateProvisionedProductRequestPrivate(ServiceCatalogRequest::UpdateProvisionedProductAction, this))
{

}

bool UpdateProvisionedProductRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateProvisionedProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateProvisionedProductResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * UpdateProvisionedProductRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProvisionedProductResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateProvisionedProductRequestPrivate
 *
 * @brief  Private implementation for UpdateProvisionedProductRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProvisionedProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public UpdateProvisionedProductRequest instance.
 */
UpdateProvisionedProductRequestPrivate::UpdateProvisionedProductRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateProvisionedProductRequest * const q)
    : UpdateProvisionedProductPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProvisionedProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateProvisionedProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateProvisionedProductRequest instance.
 */
UpdateProvisionedProductRequestPrivate::UpdateProvisionedProductRequestPrivate(
    const UpdateProvisionedProductRequestPrivate &other, UpdateProvisionedProductRequest * const q)
    : UpdateProvisionedProductPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
