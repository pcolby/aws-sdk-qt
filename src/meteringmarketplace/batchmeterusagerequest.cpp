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

#include "batchmeterusagerequest.h"
#include "batchmeterusagerequest_p.h"
#include "batchmeterusageresponse.h"
#include "marketplacemeteringrequest_p.h"

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::BatchMeterUsageRequest
 *
 * \brief The BatchMeterUsageRequest class encapsulates MarketplaceMetering BatchMeterUsage requests.
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
 * \sa MarketplaceMeteringClient::batchMeterUsage
 */

/*!
 * @brief  Constructs a new BatchMeterUsageRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
BatchMeterUsageRequest::BatchMeterUsageRequest(const BatchMeterUsageRequest &other)
    : MarketplaceMeteringRequest(new BatchMeterUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new BatchMeterUsageRequest object.
 */
BatchMeterUsageRequest::BatchMeterUsageRequest()
    : MarketplaceMeteringRequest(new BatchMeterUsageRequestPrivate(MarketplaceMeteringRequest::BatchMeterUsageAction, this))
{

}

/*!
 * \reimp
 */
bool BatchMeterUsageRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an BatchMeterUsageResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An BatchMeterUsageResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MarketplaceMeteringClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchMeterUsageRequest::response(QNetworkReply * const reply) const
{
    return new BatchMeterUsageResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  BatchMeterUsageRequestPrivate
 *
 * @brief  Private implementation for BatchMeterUsageRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new BatchMeterUsageRequestPrivate object.
 *
 * @param  action  MarketplaceMetering action being performed.
 * @param  q       Pointer to this object's public BatchMeterUsageRequest instance.
 */
BatchMeterUsageRequestPrivate::BatchMeterUsageRequestPrivate(
    const MarketplaceMeteringRequest::Action action, BatchMeterUsageRequest * const q)
    : MarketplaceMeteringRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new BatchMeterUsageRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the BatchMeterUsageRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public BatchMeterUsageRequest instance.
 */
BatchMeterUsageRequestPrivate::BatchMeterUsageRequestPrivate(
    const BatchMeterUsageRequestPrivate &other, BatchMeterUsageRequest * const q)
    : MarketplaceMeteringRequestPrivate(other, q)
{

}

} // namespace MarketplaceMetering
} // namespace QtAws
