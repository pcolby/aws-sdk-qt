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

#include "deleteportfoliosharerequest.h"
#include "deleteportfoliosharerequest_p.h"
#include "deleteportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DeletePortfolioShareRequest
 *
 * @brief  Implements ServiceCatalog DeletePortfolioShare requests.
 *
 * @see    ServiceCatalogClient::deletePortfolioShare
 */

/**
 * @brief  Constructs a new DeletePortfolioShareRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeletePortfolioShareRequest::DeletePortfolioShareRequest(const DeletePortfolioShareRequest &other)
    : ServiceCatalogRequest(new DeletePortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeletePortfolioShareRequest object.
 */
DeletePortfolioShareRequest::DeletePortfolioShareRequest()
    : ServiceCatalogRequest(new DeletePortfolioShareRequestPrivate(ServiceCatalogRequest::DeletePortfolioShareAction, this))
{

}

bool DeletePortfolioShareRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeletePortfolioShareResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeletePortfolioShareResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DeletePortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new DeletePortfolioShareResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeletePortfolioShareRequestPrivate
 *
 * @brief  Private implementation for DeletePortfolioShareRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePortfolioShareRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DeletePortfolioShareRequest instance.
 */
DeletePortfolioShareRequestPrivate::DeletePortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, DeletePortfolioShareRequest * const q)
    : DeletePortfolioSharePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeletePortfolioShareRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeletePortfolioShareRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeletePortfolioShareRequest instance.
 */
DeletePortfolioShareRequestPrivate::DeletePortfolioShareRequestPrivate(
    const DeletePortfolioShareRequestPrivate &other, DeletePortfolioShareRequest * const q)
    : DeletePortfolioSharePrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
