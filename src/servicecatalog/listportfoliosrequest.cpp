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

#include "listportfoliosrequest.h"
#include "listportfoliosrequest_p.h"
#include "listportfoliosresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListPortfoliosRequest
 *
 * @brief  Implements ServiceCatalog ListPortfolios requests.
 *
 * @see    ServiceCatalogClient::listPortfolios
 */

/**
 * @brief  Constructs a new ListPortfoliosRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPortfoliosRequest::ListPortfoliosRequest(const ListPortfoliosRequest &other)
    : ServiceCatalogRequest(new ListPortfoliosRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPortfoliosRequest object.
 */
ListPortfoliosRequest::ListPortfoliosRequest()
    : ServiceCatalogRequest(new ListPortfoliosRequestPrivate(ServiceCatalogRequest::ListPortfoliosAction, this))
{

}

bool ListPortfoliosRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPortfoliosResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPortfoliosResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListPortfoliosRequest::response(QNetworkReply * const reply) const
{
    return new ListPortfoliosResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPortfoliosRequestPrivate
 *
 * @brief  Private implementation for ListPortfoliosRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPortfoliosRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListPortfoliosRequest instance.
 */
ListPortfoliosRequestPrivate::ListPortfoliosRequestPrivate(
    const ServiceCatalogRequest::Action action, ListPortfoliosRequest * const q)
    : ListPortfoliosPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPortfoliosRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPortfoliosRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPortfoliosRequest instance.
 */
ListPortfoliosRequestPrivate::ListPortfoliosRequestPrivate(
    const ListPortfoliosRequestPrivate &other, ListPortfoliosRequest * const q)
    : ListPortfoliosPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
