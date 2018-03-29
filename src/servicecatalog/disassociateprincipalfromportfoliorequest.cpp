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

#include "disassociateprincipalfromportfoliorequest.h"
#include "disassociateprincipalfromportfoliorequest_p.h"
#include "disassociateprincipalfromportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DisassociatePrincipalFromPortfolioRequest
 *
 * @brief  Implements ServiceCatalog DisassociatePrincipalFromPortfolio requests.
 *
 * @see    ServiceCatalogClient::disassociatePrincipalFromPortfolio
 */

/**
 * @brief  Constructs a new DisassociatePrincipalFromPortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociatePrincipalFromPortfolioRequest::DisassociatePrincipalFromPortfolioRequest(const DisassociatePrincipalFromPortfolioRequest &other)
    : ServiceCatalogRequest(new DisassociatePrincipalFromPortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociatePrincipalFromPortfolioRequest object.
 */
DisassociatePrincipalFromPortfolioRequest::DisassociatePrincipalFromPortfolioRequest()
    : ServiceCatalogRequest(new DisassociatePrincipalFromPortfolioRequestPrivate(ServiceCatalogRequest::DisassociatePrincipalFromPortfolioAction, this))
{

}

bool DisassociatePrincipalFromPortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociatePrincipalFromPortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociatePrincipalFromPortfolioResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DisassociatePrincipalFromPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DisassociatePrincipalFromPortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociatePrincipalFromPortfolioRequestPrivate
 *
 * @brief  Private implementation for DisassociatePrincipalFromPortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociatePrincipalFromPortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DisassociatePrincipalFromPortfolioRequest instance.
 */
DisassociatePrincipalFromPortfolioRequestPrivate::DisassociatePrincipalFromPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DisassociatePrincipalFromPortfolioRequest * const q)
    : DisassociatePrincipalFromPortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociatePrincipalFromPortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociatePrincipalFromPortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociatePrincipalFromPortfolioRequest instance.
 */
DisassociatePrincipalFromPortfolioRequestPrivate::DisassociatePrincipalFromPortfolioRequestPrivate(
    const DisassociatePrincipalFromPortfolioRequestPrivate &other, DisassociatePrincipalFromPortfolioRequest * const q)
    : DisassociatePrincipalFromPortfolioPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
