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

#include "createportfoliorequest.h"
#include "createportfoliorequest_p.h"
#include "createportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  CreatePortfolioRequest
 *
 * @brief  Implements ServiceCatalog CreatePortfolio requests.
 *
 * @see    ServiceCatalogClient::createPortfolio
 */

/**
 * @brief  Constructs a new CreatePortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePortfolioResponse::CreatePortfolioResponse(

/**
 * @brief  Constructs a new CreatePortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreatePortfolioRequest::CreatePortfolioRequest(const CreatePortfolioRequest &other)
    : ServiceCatalogRequest(new CreatePortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreatePortfolioRequest object.
 */
CreatePortfolioRequest::CreatePortfolioRequest()
    : ServiceCatalogRequest(new CreatePortfolioRequestPrivate(ServiceCatalogRequest::CreatePortfolioAction, this))
{

}

bool CreatePortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreatePortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreatePortfolioResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * CreatePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new CreatePortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreatePortfolioRequestPrivate
 *
 * @brief  Private implementation for CreatePortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public CreatePortfolioRequest instance.
 */
CreatePortfolioRequestPrivate::CreatePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, CreatePortfolioRequest * const q)
    : CreatePortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreatePortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreatePortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreatePortfolioRequest instance.
 */
CreatePortfolioRequestPrivate::CreatePortfolioRequestPrivate(
    const CreatePortfolioRequestPrivate &other, CreatePortfolioRequest * const q)
    : CreatePortfolioPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace AWS
