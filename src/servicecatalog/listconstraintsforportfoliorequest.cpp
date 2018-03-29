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

#include "listconstraintsforportfoliorequest.h"
#include "listconstraintsforportfoliorequest_p.h"
#include "listconstraintsforportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  ListConstraintsForPortfolioRequest
 *
 * @brief  Implements ServiceCatalog ListConstraintsForPortfolio requests.
 *
 * @see    ServiceCatalogClient::listConstraintsForPortfolio
 */

/**
 * @brief  Constructs a new ListConstraintsForPortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListConstraintsForPortfolioRequest::ListConstraintsForPortfolioRequest(const ListConstraintsForPortfolioRequest &other)
    : ServiceCatalogRequest(new ListConstraintsForPortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListConstraintsForPortfolioRequest object.
 */
ListConstraintsForPortfolioRequest::ListConstraintsForPortfolioRequest()
    : ServiceCatalogRequest(new ListConstraintsForPortfolioRequestPrivate(ServiceCatalogRequest::ListConstraintsForPortfolioAction, this))
{

}

bool ListConstraintsForPortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListConstraintsForPortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListConstraintsForPortfolioResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListConstraintsForPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new ListConstraintsForPortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListConstraintsForPortfolioRequestPrivate
 *
 * @brief  Private implementation for ListConstraintsForPortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListConstraintsForPortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListConstraintsForPortfolioRequest instance.
 */
ListConstraintsForPortfolioRequestPrivate::ListConstraintsForPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, ListConstraintsForPortfolioRequest * const q)
    : ListConstraintsForPortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListConstraintsForPortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListConstraintsForPortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListConstraintsForPortfolioRequest instance.
 */
ListConstraintsForPortfolioRequestPrivate::ListConstraintsForPortfolioRequestPrivate(
    const ListConstraintsForPortfolioRequestPrivate &other, ListConstraintsForPortfolioRequest * const q)
    : ListConstraintsForPortfolioPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
