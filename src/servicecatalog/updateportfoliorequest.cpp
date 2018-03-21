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

#include "updateportfoliorequest.h"
#include "updateportfoliorequest_p.h"
#include "updateportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  UpdatePortfolioRequest
 *
 * @brief  Implements ServiceCatalog UpdatePortfolio requests.
 *
 * @see    ServiceCatalogClient::updatePortfolio
 */

/**
 * @brief  Constructs a new UpdatePortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdatePortfolioRequest::UpdatePortfolioRequest(const UpdatePortfolioRequest &other)
    : ServiceCatalogRequest(new UpdatePortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdatePortfolioRequest object.
 */
UpdatePortfolioRequest::UpdatePortfolioRequest()
    : ServiceCatalogRequest(new UpdatePortfolioRequestPrivate(ServiceCatalogRequest::UpdatePortfolioAction, this))
{

}

bool UpdatePortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdatePortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdatePortfolioResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * UpdatePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdatePortfolioRequestPrivate
 *
 * @brief  Private implementation for UpdatePortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public UpdatePortfolioRequest instance.
 */
UpdatePortfolioRequestPrivate::UpdatePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdatePortfolioRequest * const q)
    : UpdatePortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdatePortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdatePortfolioRequest instance.
 */
UpdatePortfolioRequestPrivate::UpdatePortfolioRequestPrivate(
    const UpdatePortfolioRequestPrivate &other, UpdatePortfolioRequest * const q)
    : UpdatePortfolioPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
