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

#include "describeportfoliorequest.h"
#include "describeportfoliorequest_p.h"
#include "describeportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  DescribePortfolioRequest
 *
 * @brief  Implements ServiceCatalog DescribePortfolio requests.
 *
 * @see    ServiceCatalogClient::describePortfolio
 */

/**
 * @brief  Constructs a new DescribePortfolioResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePortfolioResponse::DescribePortfolioResponse(

/**
 * @brief  Constructs a new DescribePortfolioRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribePortfolioRequest::DescribePortfolioRequest(const DescribePortfolioRequest &other)
    : ServiceCatalogRequest(new DescribePortfolioRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DescribePortfolioRequest object.
 */
DescribePortfolioRequest::DescribePortfolioRequest()
    : ServiceCatalogRequest(new DescribePortfolioRequestPrivate(ServiceCatalogRequest::DescribePortfolioAction, this))
{

}

bool DescribePortfolioRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DescribePortfolioResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribePortfolioResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServiceCatalogClient::send
 */
AwsAbstractResponse * DescribePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DescribePortfolioResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DescribePortfolioRequestPrivate
 *
 * @brief  Private implementation for DescribePortfolioRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePortfolioRequestPrivate object.
 *
 * @param  action  ServiceCatalog action being performed.
 * @param  q       Pointer to this object's public DescribePortfolioRequest instance.
 */
DescribePortfolioRequestPrivate::DescribePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribePortfolioRequest * const q)
    : DescribePortfolioPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DescribePortfolioRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribePortfolioRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribePortfolioRequest instance.
 */
DescribePortfolioRequestPrivate::DescribePortfolioRequestPrivate(
    const DescribePortfolioRequestPrivate &other, DescribePortfolioRequest * const q)
    : DescribePortfolioPrivate(other, q)
{

}
