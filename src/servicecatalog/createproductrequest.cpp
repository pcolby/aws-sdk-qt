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

#include "createproductrequest.h"
#include "createproductrequest_p.h"
#include "createproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  CreateProductRequest
 *
 * @brief  Implements ServiceCatalog CreateProduct requests.
 *
 * @see    ServiceCatalogClient::createProduct
 */

/**
 * @brief  Constructs a new CreateProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateProductRequest::CreateProductRequest(const CreateProductRequest &other)
    : ServiceCatalogRequest(new CreateProductRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateProductRequest object.
 */
CreateProductRequest::CreateProductRequest()
    : ServiceCatalogRequest(new CreateProductRequestPrivate(ServiceCatalogRequest::CreateProductAction, this))
{

}

bool CreateProductRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateProductResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProductRequest::response(QNetworkReply * const reply) const
{
    return new CreateProductResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateProductRequestPrivate
 *
 * @brief  Private implementation for CreateProductRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public CreateProductRequest instance.
 */
CreateProductRequestPrivate::CreateProductRequestPrivate(
    const ServiceCatalogRequest::Action action, CreateProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateProductRequest instance.
 */
CreateProductRequestPrivate::CreateProductRequestPrivate(
    const CreateProductRequestPrivate &other, CreateProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
