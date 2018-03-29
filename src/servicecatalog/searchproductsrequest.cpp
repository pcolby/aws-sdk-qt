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

#include "searchproductsrequest.h"
#include "searchproductsrequest_p.h"
#include "searchproductsresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  SearchProductsRequest
 *
 * @brief  Implements ServiceCatalog SearchProducts requests.
 *
 * @see    ServiceCatalogClient::searchProducts
 */

/**
 * @brief  Constructs a new SearchProductsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
SearchProductsRequest::SearchProductsRequest(const SearchProductsRequest &other)
    : ServiceCatalogRequest(new SearchProductsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new SearchProductsRequest object.
 */
SearchProductsRequest::SearchProductsRequest()
    : ServiceCatalogRequest(new SearchProductsRequestPrivate(ServiceCatalogRequest::SearchProductsAction, this))
{

}

bool SearchProductsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an SearchProductsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An SearchProductsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchProductsRequest::response(QNetworkReply * const reply) const
{
    return new SearchProductsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  SearchProductsRequestPrivate
 *
 * @brief  Private implementation for SearchProductsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SearchProductsRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public SearchProductsRequest instance.
 */
SearchProductsRequestPrivate::SearchProductsRequestPrivate(
    const ServiceCatalogRequest::Action action, SearchProductsRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new SearchProductsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the SearchProductsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public SearchProductsRequest instance.
 */
SearchProductsRequestPrivate::SearchProductsRequestPrivate(
    const SearchProductsRequestPrivate &other, SearchProductsRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
