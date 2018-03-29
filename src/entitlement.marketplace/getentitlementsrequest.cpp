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

#include "getentitlementsrequest.h"
#include "getentitlementsrequest_p.h"
#include "getentitlementsresponse.h"
#include "marketplaceentitlementservicerequest_p.h"

namespace AWS {
namespace MarketplaceEntitlementService {

/**
 * @class  GetEntitlementsRequest
 *
 * @brief  Implements MarketplaceEntitlementService GetEntitlements requests.
 *
 * @see    MarketplaceEntitlementServiceClient::getEntitlements
 */

/**
 * @brief  Constructs a new GetEntitlementsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetEntitlementsRequest::GetEntitlementsRequest(const GetEntitlementsRequest &other)
    : MarketplaceEntitlementServiceRequest(new GetEntitlementsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetEntitlementsRequest object.
 */
GetEntitlementsRequest::GetEntitlementsRequest()
    : MarketplaceEntitlementServiceRequest(new GetEntitlementsRequestPrivate(MarketplaceEntitlementServiceRequest::GetEntitlementsAction, this))
{

}

bool GetEntitlementsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetEntitlementsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetEntitlementsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MarketplaceEntitlementServiceClient::send
 */
AwsAbstractResponse * GetEntitlementsRequest::response(QNetworkReply * const reply) const
{
    return new GetEntitlementsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetEntitlementsRequestPrivate
 *
 * @brief  Private implementation for GetEntitlementsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetEntitlementsRequestPrivate object.
 *
 * @param  action  MarketplaceEntitlementService action being performed.
 * @param  q       Pointer to this object's public GetEntitlementsRequest instance.
 */
GetEntitlementsRequestPrivate::GetEntitlementsRequestPrivate(
    const MarketplaceEntitlementServiceRequest::Action action, GetEntitlementsRequest * const q)
    : GetEntitlementsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetEntitlementsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetEntitlementsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetEntitlementsRequest instance.
 */
GetEntitlementsRequestPrivate::GetEntitlementsRequestPrivate(
    const GetEntitlementsRequestPrivate &other, GetEntitlementsRequest * const q)
    : GetEntitlementsPrivate(other, q)
{

}

} // namespace MarketplaceEntitlementService
} // namespace AWS
