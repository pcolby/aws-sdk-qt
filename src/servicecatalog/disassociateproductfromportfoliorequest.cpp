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

#include "disassociateproductfromportfoliorequest.h"
#include "disassociateproductfromportfoliorequest_p.h"
#include "disassociateproductfromportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DisassociateProductFromPortfolioRequest
 *
 * @brief  Implements ServiceCatalog DisassociateProductFromPortfolio requests.
 *
 * @see    ServiceCatalogClient::disassociateProductFromPortfolio
 */

/**
 * @brief  Constructs a new DisassociateProductFromPortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DisassociateProductFromPortfolioRequest::DisassociateProductFromPortfolioRequest(const DisassociateProductFromPortfolioRequest &other)
    : ServiceCatalogRequest(new DisassociateProductFromPortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DisassociateProductFromPortfolioRequest object.
 */
DisassociateProductFromPortfolioRequest::DisassociateProductFromPortfolioRequest()
    : ServiceCatalogRequest(new DisassociateProductFromPortfolioRequestPrivate(ServiceCatalogRequest::DisassociateProductFromPortfolioAction, this))
{

}

bool DisassociateProductFromPortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DisassociateProductFromPortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DisassociateProductFromPortfolioResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateProductFromPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateProductFromPortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DisassociateProductFromPortfolioRequestPrivate
 *
 * @brief  Private implementation for DisassociateProductFromPortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateProductFromPortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DisassociateProductFromPortfolioRequest instance.
 */
DisassociateProductFromPortfolioRequestPrivate::DisassociateProductFromPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DisassociateProductFromPortfolioRequest * const q)
    : DisassociateProductFromPortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateProductFromPortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DisassociateProductFromPortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DisassociateProductFromPortfolioRequest instance.
 */
DisassociateProductFromPortfolioRequestPrivate::DisassociateProductFromPortfolioRequestPrivate(
    const DisassociateProductFromPortfolioRequestPrivate &other, DisassociateProductFromPortfolioRequest * const q)
    : DisassociateProductFromPortfolioPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
