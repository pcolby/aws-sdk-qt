/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getentitlementsrequest.h"
#include "getentitlementsrequest_p.h"
#include "getentitlementsresponse.h"
#include "marketplaceentitlementservicerequest_p.h"

namespace QtAws {
namespace MarketplaceEntitlementService {

/*!
 * \class QtAws::MarketplaceEntitlementService::GetEntitlementsRequest
 * \brief The GetEntitlementsRequest class provides an interface for MarketplaceEntitlementService GetEntitlements requests.
 *
 * \inmodule QtAwsMarketplaceEntitlementService
 *
 *  <fullname>AWS Marketplace Entitlement Service</fullname>
 * 
 *  This reference provides descriptions of the AWS Marketplace Entitlement Service
 * 
 *  API>
 * 
 *  AWS Marketplace Entitlement Service is used to determine the entitlement of a customer to a given product. An
 *  entitlement represents capacity in a product owned by the customer. For example, a customer might own some number of
 *  users or seats in an SaaS application or some amount of data capacity in a multi-tenant
 * 
 *  database>
 * 
 *  <b>Getting Entitlement Records</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>GetEntitlements</i>- Gets the entitlements for a Marketplace
 *
 * \sa MarketplaceEntitlementServiceClient::getEntitlements
 */

/*!
 * Constructs a copy of \a other.
 */
GetEntitlementsRequest::GetEntitlementsRequest(const GetEntitlementsRequest &other)
    : MarketplaceEntitlementServiceRequest(new GetEntitlementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEntitlementsRequest object.
 */
GetEntitlementsRequest::GetEntitlementsRequest()
    : MarketplaceEntitlementServiceRequest(new GetEntitlementsRequestPrivate(MarketplaceEntitlementServiceRequest::GetEntitlementsAction, this))
{

}

/*!
 * \reimp
 */
bool GetEntitlementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEntitlementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEntitlementsRequest::response(QNetworkReply * const reply) const
{
    return new GetEntitlementsResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceEntitlementService::GetEntitlementsRequestPrivate
 * \brief The GetEntitlementsRequestPrivate class provides private implementation for GetEntitlementsRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceEntitlementService
 */

/*!
 * Constructs a GetEntitlementsRequestPrivate object for MarketplaceEntitlementService \a action,
 * with public implementation \a q.
 */
GetEntitlementsRequestPrivate::GetEntitlementsRequestPrivate(
    const MarketplaceEntitlementServiceRequest::Action action, GetEntitlementsRequest * const q)
    : MarketplaceEntitlementServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEntitlementsRequest
 * class' copy constructor.
 */
GetEntitlementsRequestPrivate::GetEntitlementsRequestPrivate(
    const GetEntitlementsRequestPrivate &other, GetEntitlementsRequest * const q)
    : MarketplaceEntitlementServiceRequestPrivate(other, q)
{

}

} // namespace MarketplaceEntitlementService
} // namespace QtAws
