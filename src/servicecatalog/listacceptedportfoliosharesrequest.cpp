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

#include "listacceptedportfoliosharesrequest.h"
#include "listacceptedportfoliosharesrequest_p.h"
#include "listacceptedportfoliosharesresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  ListAcceptedPortfolioSharesRequest
 *
 * @brief  Implements ServiceCatalog ListAcceptedPortfolioShares requests.
 *
 * @see    ServiceCatalogClient::listAcceptedPortfolioShares
 */

/**
 * @brief  Constructs a new ListAcceptedPortfolioSharesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAcceptedPortfolioSharesResponse::ListAcceptedPortfolioSharesResponse(

/**
 * @brief  Constructs a new ListAcceptedPortfolioSharesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListAcceptedPortfolioSharesRequest::ListAcceptedPortfolioSharesRequest(const ListAcceptedPortfolioSharesRequest &other)
    : ServiceCatalogRequest(new ListAcceptedPortfolioSharesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListAcceptedPortfolioSharesRequest object.
 */
ListAcceptedPortfolioSharesRequest::ListAcceptedPortfolioSharesRequest()
    : ServiceCatalogRequest(new ListAcceptedPortfolioSharesRequestPrivate(ServiceCatalogRequest::ListAcceptedPortfolioSharesAction, this))
{

}

bool ListAcceptedPortfolioSharesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListAcceptedPortfolioSharesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListAcceptedPortfolioSharesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * ListAcceptedPortfolioSharesRequest::response(QNetworkReply * const reply) const
{
    return new ListAcceptedPortfolioSharesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListAcceptedPortfolioSharesRequestPrivate
 *
 * @brief  Private implementation for ListAcceptedPortfolioSharesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAcceptedPortfolioSharesRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public ListAcceptedPortfolioSharesRequest instance.
 */
ListAcceptedPortfolioSharesRequestPrivate::ListAcceptedPortfolioSharesRequestPrivate(
    const ServiceCatalogRequest::Action action, ListAcceptedPortfolioSharesRequest * const q)
    : ListAcceptedPortfolioSharesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListAcceptedPortfolioSharesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListAcceptedPortfolioSharesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListAcceptedPortfolioSharesRequest instance.
 */
ListAcceptedPortfolioSharesRequestPrivate::ListAcceptedPortfolioSharesRequestPrivate(
    const ListAcceptedPortfolioSharesRequestPrivate &other, ListAcceptedPortfolioSharesRequest * const q)
    : ListAcceptedPortfolioSharesPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
