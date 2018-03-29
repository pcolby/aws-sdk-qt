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

#include "getproductsrequest.h"
#include "getproductsrequest_p.h"
#include "getproductsresponse.h"
#include "pricingrequest_p.h"

namespace QtAws {
namespace Pricing {

/**
 * @class  GetProductsRequest
 *
 * @brief  Implements Pricing GetProducts requests.
 *
 * @see    PricingClient::getProducts
 */

/**
 * @brief  Constructs a new GetProductsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetProductsRequest::GetProductsRequest(const GetProductsRequest &other)
    : PricingRequest(new GetProductsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetProductsRequest object.
 */
GetProductsRequest::GetProductsRequest()
    : PricingRequest(new GetProductsRequestPrivate(PricingRequest::GetProductsAction, this))
{

}

bool GetProductsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetProductsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetProductsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  PricingClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProductsRequest::response(QNetworkReply * const reply) const
{
    return new GetProductsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetProductsRequestPrivate
 *
 * @brief  Private implementation for GetProductsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetProductsRequestPrivate object.
 *
 * @param  action  Pricing action being performed.
 * @param  q       Pointer to this object's public GetProductsRequest instance.
 */
GetProductsRequestPrivate::GetProductsRequestPrivate(
    const PricingRequest::Action action, GetProductsRequest * const q)
    : GetProductsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetProductsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetProductsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetProductsRequest instance.
 */
GetProductsRequestPrivate::GetProductsRequestPrivate(
    const GetProductsRequestPrivate &other, GetProductsRequest * const q)
    : GetProductsPrivate(other, q)
{

}

} // namespace Pricing
} // namespace QtAws
