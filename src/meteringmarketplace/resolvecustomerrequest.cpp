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

#include "resolvecustomerrequest.h"
#include "resolvecustomerrequest_p.h"
#include "resolvecustomerresponse.h"
#include "marketplacemeteringrequest_p.h"

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::ResolveCustomerRequest
 * \brief The ResolveCustomerRequest class provides an interface for MarketplaceMetering ResolveCustomer requests.
 *
 * \inmodule QtAwsMarketplaceMetering
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
 * \sa MarketplaceMeteringClient::resolveCustomer
 */

/*!
 * Constructs a copy of \a other.
 */
ResolveCustomerRequest::ResolveCustomerRequest(const ResolveCustomerRequest &other)
    : MarketplaceMeteringRequest(new ResolveCustomerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResolveCustomerRequest object.
 */
ResolveCustomerRequest::ResolveCustomerRequest()
    : MarketplaceMeteringRequest(new ResolveCustomerRequestPrivate(MarketplaceMeteringRequest::ResolveCustomerAction, this))
{

}

/*!
 * \reimp
 */
bool ResolveCustomerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResolveCustomerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResolveCustomerRequest::response(QNetworkReply * const reply) const
{
    return new ResolveCustomerResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceMetering::ResolveCustomerRequestPrivate
 * \brief The ResolveCustomerRequestPrivate class provides private implementation for ResolveCustomerRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 *
 * Constructs a ResolveCustomerRequestPrivate object for MarketplaceMetering \a action with,
 * public implementation \a q.
 */
ResolveCustomerRequestPrivate::ResolveCustomerRequestPrivate(
    const MarketplaceMeteringRequest::Action action, ResolveCustomerRequest * const q)
    : MarketplaceMeteringRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResolveCustomerRequest
 * class' copy constructor.
 */
ResolveCustomerRequestPrivate::ResolveCustomerRequestPrivate(
    const ResolveCustomerRequestPrivate &other, ResolveCustomerRequest * const q)
    : MarketplaceMeteringRequestPrivate(other, q)
{

}

} // namespace MarketplaceMetering
} // namespace QtAws
