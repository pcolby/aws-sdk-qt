// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "registerusagerequest.h"
#include "registerusagerequest_p.h"
#include "registerusageresponse.h"
#include "marketplacemeteringrequest_p.h"

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::RegisterUsageRequest
 * \brief The RegisterUsageRequest class provides an interface for MarketplaceMetering RegisterUsage requests.
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
 *  For information on the permissions you need to use this API, see <a
 *  href="https://docs.aws.amazon.com/marketplace/latest/userguide/iam-user-policy-for-aws-marketplace-actions.html">AWS
 *  Marketplace metering and entitlement API permissions</a> in the <i>AWS Marketplace Seller Guide.</i>
 * 
 *  </p
 * 
 *  <b>Submitting Metering Records</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>MeterUsage</i> - Submits the metering record for an AWS Marketplace product. <code>MeterUsage</code> is called from
 *  an EC2 instance or a container running on EKS or
 * 
 *  ECS> </li> <li>
 * 
 *  <i>BatchMeterUsage</i> - Submits the metering record for a set of customers. <code>BatchMeterUsage</code> is called from
 *  a software-as-a-service (SaaS)
 * 
 *  application> </li> </ul>
 * 
 *  <b>Accepting New Customers</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>ResolveCustomer</i> - Called by a SaaS application during the registration process. When a buyer visits your website
 *  during the registration process, the buyer submits a Registration Token through the browser. The Registration Token is
 *  resolved through this API to obtain a <code>CustomerIdentifier</code> along with the <code>CustomerAWSAccountId</code>
 *  and
 * 
 *  <code>ProductCode</code>> </li> </ul>
 * 
 *  <b>Entitlement and Metering for Paid Container Products</b>
 * 
 *  </p <ul> <li>
 * 
 *  Paid container software products sold through AWS Marketplace must integrate with the AWS Marketplace Metering Service
 *  and call the <code>RegisterUsage</code> operation for software entitlement and metering. Free and BYOL products for
 *  Amazon ECS or Amazon EKS aren't required to call <code>RegisterUsage</code>, but you can do so if you want to receive
 *  usage data in your seller reports. For more information on using the <code>RegisterUsage</code> operation, see <a
 *  href="https://docs.aws.amazon.com/marketplace/latest/userguide/container-based-products.html">Container-Based
 *  Products</a>.
 * 
 *  </p </li> </ul>
 * 
 *  <code>BatchMeterUsage</code> API calls are captured by AWS CloudTrail. You can use Cloudtrail to verify that the SaaS
 *  metering records that you sent are accurate by searching for records with the <code>eventName</code> of
 *  <code>BatchMeterUsage</code>. You can also use CloudTrail to audit records over time. For more information, see the <i>
 *  <a href="http://docs.aws.amazon.com/awscloudtrail/latest/userguide/cloudtrail-concepts.html">AWS CloudTrail User
 *  Guide</a>.</i>
 *
 * \sa MarketplaceMeteringClient::registerUsage
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterUsageRequest::RegisterUsageRequest(const RegisterUsageRequest &other)
    : MarketplaceMeteringRequest(new RegisterUsageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterUsageRequest object.
 */
RegisterUsageRequest::RegisterUsageRequest()
    : MarketplaceMeteringRequest(new RegisterUsageRequestPrivate(MarketplaceMeteringRequest::RegisterUsageAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterUsageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterUsageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterUsageRequest::response(QNetworkReply * const reply) const
{
    return new RegisterUsageResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceMetering::RegisterUsageRequestPrivate
 * \brief The RegisterUsageRequestPrivate class provides private implementation for RegisterUsageRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 * Constructs a RegisterUsageRequestPrivate object for MarketplaceMetering \a action,
 * with public implementation \a q.
 */
RegisterUsageRequestPrivate::RegisterUsageRequestPrivate(
    const MarketplaceMeteringRequest::Action action, RegisterUsageRequest * const q)
    : MarketplaceMeteringRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterUsageRequest
 * class' copy constructor.
 */
RegisterUsageRequestPrivate::RegisterUsageRequestPrivate(
    const RegisterUsageRequestPrivate &other, RegisterUsageRequest * const q)
    : MarketplaceMeteringRequestPrivate(other, q)
{

}

} // namespace MarketplaceMetering
} // namespace QtAws
