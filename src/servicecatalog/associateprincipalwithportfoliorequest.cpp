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

#include "associateprincipalwithportfoliorequest.h"
#include "associateprincipalwithportfoliorequest_p.h"
#include "associateprincipalwithportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  AssociatePrincipalWithPortfolioRequest
 *
 * @brief  Implements ServiceCatalog AssociatePrincipalWithPortfolio requests.
 *
 * @see    ServiceCatalogClient::associatePrincipalWithPortfolio
 */

/**
 * @brief  Constructs a new AssociatePrincipalWithPortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AssociatePrincipalWithPortfolioRequest::AssociatePrincipalWithPortfolioRequest(const AssociatePrincipalWithPortfolioRequest &other)
    : ServiceCatalogRequest(new AssociatePrincipalWithPortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AssociatePrincipalWithPortfolioRequest object.
 */
AssociatePrincipalWithPortfolioRequest::AssociatePrincipalWithPortfolioRequest()
    : ServiceCatalogRequest(new AssociatePrincipalWithPortfolioRequestPrivate(ServiceCatalogRequest::AssociatePrincipalWithPortfolioAction, this))
{

}

bool AssociatePrincipalWithPortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AssociatePrincipalWithPortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AssociatePrincipalWithPortfolioResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * AssociatePrincipalWithPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new AssociatePrincipalWithPortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AssociatePrincipalWithPortfolioRequestPrivate
 *
 * @brief  Private implementation for AssociatePrincipalWithPortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociatePrincipalWithPortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public AssociatePrincipalWithPortfolioRequest instance.
 */
AssociatePrincipalWithPortfolioRequestPrivate::AssociatePrincipalWithPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociatePrincipalWithPortfolioRequest * const q)
    : AssociatePrincipalWithPortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AssociatePrincipalWithPortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AssociatePrincipalWithPortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AssociatePrincipalWithPortfolioRequest instance.
 */
AssociatePrincipalWithPortfolioRequestPrivate::AssociatePrincipalWithPortfolioRequestPrivate(
    const AssociatePrincipalWithPortfolioRequestPrivate &other, AssociatePrincipalWithPortfolioRequest * const q)
    : AssociatePrincipalWithPortfolioPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
