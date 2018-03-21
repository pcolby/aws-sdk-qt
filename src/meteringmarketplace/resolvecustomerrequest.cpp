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

#include "resolvecustomerrequest.h"
#include "resolvecustomerrequest_p.h"
#include "resolvecustomerresponse.h"
#include "marketplacemeteringrequest_p.h"

namespace AWS {
namespace MarketplaceMetering {

/**
 * @class  ResolveCustomerRequest
 *
 * @brief  Implements MarketplaceMetering ResolveCustomer requests.
 *
 * @see    MarketplaceMeteringClient::resolveCustomer
 */

/**
 * @brief  Constructs a new ResolveCustomerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ResolveCustomerRequest::ResolveCustomerRequest(const ResolveCustomerRequest &other)
    : MarketplaceMeteringRequest(new ResolveCustomerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ResolveCustomerRequest object.
 */
ResolveCustomerRequest::ResolveCustomerRequest()
    : MarketplaceMeteringRequest(new ResolveCustomerRequestPrivate(MarketplaceMeteringRequest::ResolveCustomerAction, this))
{

}

bool ResolveCustomerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ResolveCustomerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ResolveCustomerResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MarketplaceMeteringClient::send
 */
AwsAbstractResponse * ResolveCustomerRequest::response(QNetworkReply * const reply) const
{
    return new ResolveCustomerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ResolveCustomerRequestPrivate
 *
 * @brief  Private implementation for ResolveCustomerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ResolveCustomerRequestPrivate object.
 *
 * @param  action  MarketplaceMetering action being performed.
 * @param  q       Pointer to this object's public ResolveCustomerRequest instance.
 */
ResolveCustomerRequestPrivate::ResolveCustomerRequestPrivate(
    const MarketplaceMeteringRequest::Action action, ResolveCustomerRequest * const q)
    : ResolveCustomerPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ResolveCustomerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ResolveCustomerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ResolveCustomerRequest instance.
 */
ResolveCustomerRequestPrivate::ResolveCustomerRequestPrivate(
    const ResolveCustomerRequestPrivate &other, ResolveCustomerRequest * const q)
    : ResolveCustomerPrivate(other, q)
{

}

} // namespace MarketplaceMetering
} // namespace AWS
