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

#include "listportfoliosforproductrequest.h"
#include "listportfoliosforproductrequest_p.h"
#include "listportfoliosforproductresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListPortfoliosForProductRequest
 *
 * @brief  Implements ServiceCatalog ListPortfoliosForProduct requests.
 *
 * @see    ServiceCatalogClient::listPortfoliosForProduct
 */

/**
 * @brief  Constructs a new ListPortfoliosForProductResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPortfoliosForProductResponse::ListPortfoliosForProductResponse(

/**
 * @brief  Constructs a new ListPortfoliosForProductRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPortfoliosForProductRequest::ListPortfoliosForProductRequest(const ListPortfoliosForProductRequest &other)
    : ServiceCatalogRequest(new ListPortfoliosForProductRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPortfoliosForProductRequest object.
 */
ListPortfoliosForProductRequest::ListPortfoliosForProductRequest()
    : ServiceCatalogRequest(new ListPortfoliosForProductRequestPrivate(ServiceCatalogRequest::ListPortfoliosForProductAction, this))
{

}

bool ListPortfoliosForProductRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPortfoliosForProductResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPortfoliosForProductResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListPortfoliosForProductRequest::response(QNetworkReply * const reply) const
{
    return new ListPortfoliosForProductResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPortfoliosForProductRequestPrivate
 *
 * @brief  Private implementation for ListPortfoliosForProductRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPortfoliosForProductRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListPortfoliosForProductRequest instance.
 */
ListPortfoliosForProductRequestPrivate::ListPortfoliosForProductRequestPrivate(
    const ServiceCatalogRequest::Action action, ListPortfoliosForProductRequest * const q)
    : ListPortfoliosForProductPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPortfoliosForProductRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPortfoliosForProductRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPortfoliosForProductRequest instance.
 */
ListPortfoliosForProductRequestPrivate::ListPortfoliosForProductRequestPrivate(
    const ListPortfoliosForProductRequestPrivate &other, ListPortfoliosForProductRequest * const q)
    : ListPortfoliosForProductPrivate(other, q)
{

}
