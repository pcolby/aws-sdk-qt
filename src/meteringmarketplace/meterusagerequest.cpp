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

#include "meterusagerequest.h"
#include "meterusagerequest_p.h"
#include "meterusageresponse.h"
#include "marketplacemeteringrequest_p.h"

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::MeterUsageRequest
 *
 * \brief The MeterUsageRequest class provides an interface for MarketplaceMetering MeterUsage requests.
 *
 * \ingroup MarketplaceMetering
 *
 *  <fullname>AWS Marketplace Metering Service</fullname>
 * 
 *  This reference provides descriptions of the low-level AWS Marketplace Metering Service
 * 
 *  API>
 * 
 *  AWS Marketplace sellers can use this API to submit usage data for custom usage
 * 
 *  dimensions>
 * 
 *  <b>Submitting Metering Records</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>MeterUsage</i>- Submits the metering record for a Marketplace product. MeterUsage is called from an EC2
 * 
 *  instance> </li> <li>
 * 
 *  <i>BatchMeterUsage</i>- Submits the metering record for a set of customers. BatchMeterUsage is called from a
 *  software-as-a-service (SaaS)
 * 
 *  application> </li> </ul>
 * 
 *  <b>Accepting New Customers</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>ResolveCustomer</i>- Called by a SaaS application during the registration process. When a buyer visits your website
 *  during the registration process, the buyer submits a Registration Token through the browser. The Registration Token is
 *  resolved through this API to obtain a CustomerIdentifier and Product
 *
 * \sa MarketplaceMeteringClient::meterUsage
 */

/*!
 * @brief  Constructs a new MeterUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
MeterUsageRequest::MeterUsageRequest(const MeterUsageRequest &other)
    : MarketplaceMeteringRequest(new MeterUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new MeterUsageRequest object.
 */
MeterUsageRequest::MeterUsageRequest()
    : MarketplaceMeteringRequest(new MeterUsageRequestPrivate(MarketplaceMeteringRequest::MeterUsageAction, this))
{

}

/*!
 * \reimp
 */
bool MeterUsageRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an MeterUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An MeterUsageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MarketplaceMeteringClient::send
 */
QtAws::Core::AwsAbstractResponse * MeterUsageRequest::response(QNetworkReply * const reply) const
{
    return new MeterUsageResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  MeterUsageRequestPrivate
 *
 * @brief  Private implementation for MeterUsageRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new MeterUsageRequestPrivate object.
 *
 * @param  action  MarketplaceMetering action being performed.
 * @param  q       Pointer to this object's public MeterUsageRequest instance.
 */
MeterUsageRequestPrivate::MeterUsageRequestPrivate(
    const MarketplaceMeteringRequest::Action action, MeterUsageRequest * const q)
    : MarketplaceMeteringRequestPrivate(action, q)
{

}

/*!
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
    : MarketplaceMeteringRequestPrivate(other, q)
{

}

} // namespace MarketplaceMetering
} // namespace QtAws
