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

#include "copyproductrequest.h"
#include "copyproductrequest_p.h"
#include "copyproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  CopyProductRequest
 *
 * @brief  Implements ServiceCatalog CopyProduct requests.
 *
 * @see    ServiceCatalogClient::copyProduct
 */

/**
 * @brief  Constructs a new CopyProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CopyProductRequest::CopyProductRequest(const CopyProductRequest &other)
    : ServiceCatalogRequest(new CopyProductRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CopyProductRequest object.
 */
CopyProductRequest::CopyProductRequest()
    : ServiceCatalogRequest(new CopyProductRequestPrivate(ServiceCatalogRequest::CopyProductAction, this))
{

}

bool CopyProductRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CopyProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CopyProductResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * CopyProductRequest::response(QNetworkReply * const reply) const
{
    return new CopyProductResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CopyProductRequestPrivate
 *
 * @brief  Private implementation for CopyProductRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public CopyProductRequest instance.
 */
CopyProductRequestPrivate::CopyProductRequestPrivate(
    const ServiceCatalogRequest::Action action, CopyProductRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CopyProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CopyProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CopyProductRequest instance.
 */
CopyProductRequestPrivate::CopyProductRequestPrivate(
    const CopyProductRequestPrivate &other, CopyProductRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
