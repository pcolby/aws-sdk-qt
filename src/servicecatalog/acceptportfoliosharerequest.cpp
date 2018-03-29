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

#include "acceptportfoliosharerequest.h"
#include "acceptportfoliosharerequest_p.h"
#include "acceptportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  AcceptPortfolioShareRequest
 *
 * @brief  Implements ServiceCatalog AcceptPortfolioShare requests.
 *
 * @see    ServiceCatalogClient::acceptPortfolioShare
 */

/**
 * @brief  Constructs a new AcceptPortfolioShareRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AcceptPortfolioShareRequest::AcceptPortfolioShareRequest(const AcceptPortfolioShareRequest &other)
    : ServiceCatalogRequest(new AcceptPortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AcceptPortfolioShareRequest object.
 */
AcceptPortfolioShareRequest::AcceptPortfolioShareRequest()
    : ServiceCatalogRequest(new AcceptPortfolioShareRequestPrivate(ServiceCatalogRequest::AcceptPortfolioShareAction, this))
{

}

bool AcceptPortfolioShareRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AcceptPortfolioShareResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AcceptPortfolioShareResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * AcceptPortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new AcceptPortfolioShareResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AcceptPortfolioShareRequestPrivate
 *
 * @brief  Private implementation for AcceptPortfolioShareRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcceptPortfolioShareRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public AcceptPortfolioShareRequest instance.
 */
AcceptPortfolioShareRequestPrivate::AcceptPortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, AcceptPortfolioShareRequest * const q)
    : AcceptPortfolioSharePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AcceptPortfolioShareRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AcceptPortfolioShareRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AcceptPortfolioShareRequest instance.
 */
AcceptPortfolioShareRequestPrivate::AcceptPortfolioShareRequestPrivate(
    const AcceptPortfolioShareRequestPrivate &other, AcceptPortfolioShareRequest * const q)
    : AcceptPortfolioSharePrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
