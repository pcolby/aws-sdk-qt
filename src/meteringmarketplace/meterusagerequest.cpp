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

#include "meterusagerequest.h"
#include "meterusagerequest_p.h"
#include "meterusageresponse.h"
#include "marketplacemeteringrequest_p.h"

namespace AWS {
namespace MarketplaceMetering {

/**
 * @class  MeterUsageRequest
 *
 * @brief  Implements MarketplaceMetering MeterUsage requests.
 *
 * @see    MarketplaceMeteringClient::meterUsage
 */

/**
 * @brief  Constructs a new MeterUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MeterUsageResponse::MeterUsageResponse(

/**
 * @brief  Constructs a new MeterUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MeterUsageRequest::MeterUsageRequest(const MeterUsageRequest &other)
    : MarketplaceMeteringRequest(new MeterUsageRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new MeterUsageRequest object.
 */
MeterUsageRequest::MeterUsageRequest()
    : MarketplaceMeteringRequest(new MeterUsageRequestPrivate(MarketplaceMeteringRequest::MeterUsageAction, this))
{

}

bool MeterUsageRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an MeterUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An MeterUsageResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MarketplaceMeteringClient::send
 */
AwsAbstractResponse * MeterUsageRequest::response(QNetworkReply * const reply) const
{
    return new MeterUsageResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  MeterUsageRequestPrivate
 *
 * @brief  Private implementation for MeterUsageRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new MeterUsageRequestPrivate object.
 *
 * @param  action  MarketplaceMetering action being performed.
 * @param  q       Pointer to this object's public MeterUsageRequest instance.
 */
MeterUsageRequestPrivate::MeterUsageRequestPrivate(
    const MarketplaceMeteringRequest::Action action, MeterUsageRequest * const q)
    : MeterUsagePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new MeterUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the MeterUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public MeterUsageRequest instance.
 */
MeterUsageRequestPrivate::MeterUsageRequestPrivate(
    const MeterUsageRequestPrivate &other, MeterUsageRequest * const q)
    : MeterUsagePrivate(other, q)
{

}

} // namespace MarketplaceMetering
} // namespace AWS
