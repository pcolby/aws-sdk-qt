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

#include "updateproductrequest.h"
#include "updateproductrequest_p.h"
#include "updateproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  UpdateProductRequest
 *
 * @brief  Implements ServiceCatalog UpdateProduct requests.
 *
 * @see    ServiceCatalogClient::updateProduct
 */

/**
 * @brief  Constructs a new UpdateProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateProductRequest::UpdateProductRequest(const UpdateProductRequest &other)
    : ServiceCatalogRequest(new UpdateProductRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateProductRequest object.
 */
UpdateProductRequest::UpdateProductRequest()
    : ServiceCatalogRequest(new UpdateProductRequestPrivate(ServiceCatalogRequest::UpdateProductAction, this))
{

}

bool UpdateProductRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateProductResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * UpdateProductRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProductResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateProductRequestPrivate
 *
 * @brief  Private implementation for UpdateProductRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public UpdateProductRequest instance.
 */
UpdateProductRequestPrivate::UpdateProductRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateProductRequest * const q)
    : UpdateProductPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateProductRequest instance.
 */
UpdateProductRequestPrivate::UpdateProductRequestPrivate(
    const UpdateProductRequestPrivate &other, UpdateProductRequest * const q)
    : UpdateProductPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
