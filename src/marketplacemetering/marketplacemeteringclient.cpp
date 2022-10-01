// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "marketplacemeteringclient.h"
#include "marketplacemeteringclient_p.h"

#include "core/awssignaturev4.h"
#include "batchmeterusagerequest.h"
#include "batchmeterusageresponse.h"
#include "meterusagerequest.h"
#include "meterusageresponse.h"
#include "registerusagerequest.h"
#include "registerusageresponse.h"
#include "resolvecustomerrequest.h"
#include "resolvecustomerresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MarketplaceMetering
 * \brief Contains classess for accessing AWSMarketplace Metering.
 *
 * \inmodule QtAwsMarketplaceMetering
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::MarketplaceMeteringClient
 * \brief The MarketplaceMeteringClient class provides access to the AWSMarketplace Metering service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a MarketplaceMeteringClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MarketplaceMeteringClient::MarketplaceMeteringClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MarketplaceMeteringClientPrivate(this), parent)
{
    Q_D(MarketplaceMeteringClient);
    d->apiVersion = QStringLiteral("2016-01-14");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("metering.marketplace");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWSMarketplace Metering");
    d->serviceName = QStringLiteral("aws-marketplace");
}

/*!
 * \overload MarketplaceMeteringClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
MarketplaceMeteringClient::MarketplaceMeteringClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MarketplaceMeteringClientPrivate(this), parent)
{
    Q_D(MarketplaceMeteringClient);
    d->apiVersion = QStringLiteral("2016-01-14");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("metering.marketplace");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWSMarketplace Metering");
    d->serviceName = QStringLiteral("aws-marketplace");
}

/*!
 * Sends \a request to the MarketplaceMeteringClient service, and returns a pointer to an
 * BatchMeterUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <code>BatchMeterUsage</code> is called from a SaaS application listed on AWS Marketplace to post metering records for a
 * set of
 *
 * customers>
 *
 * For identical requests, the API is idempotent; requests can be retried with the same records or a subset of the input
 *
 * records>
 *
 * Every request to <code>BatchMeterUsage</code> is for one product. If you need to meter usage for multiple products, you
 * must make multiple calls to
 *
 * <code>BatchMeterUsage</code>>
 *
 * Usage records are expected to be submitted as quickly as possible after the event that is being recorded, and are not
 * accepted more than 6 hours after the
 *
 * event>
 *
 * <code>BatchMeterUsage</code> can process up to 25 <code>UsageRecords</code> at a
 *
 * time>
 *
 * A <code>UsageRecord</code> can optionally include multiple usage allocations, to provide customers with usage data split
 * into buckets by tags that you define (or allow the customer to
 *
 * define)>
 *
 * <code>BatchMeterUsage</code> returns a list of <code>UsageRecordResult</code> objects, showing the result for each
 * <code>UsageRecord</code>, as well as a list of <code>UnprocessedRecords</code>, indicating errors in the service side
 * that you should
 *
 * retry>
 *
 * <code>BatchMeterUsage</code> requests must be less than 1MB in
 *
 * size> <note>
 *
 * For an example of using <code>BatchMeterUsage</code>, see <a
 * href="https://docs.aws.amazon.com/marketplace/latest/userguide/saas-code-examples.html#saas-batchmeterusage-example">
 * BatchMeterUsage code example</a> in the <i>AWS Marketplace Seller
 */
BatchMeterUsageResponse * MarketplaceMeteringClient::batchMeterUsage(const BatchMeterUsageRequest &request)
{
    return qobject_cast<BatchMeterUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceMeteringClient service, and returns a pointer to an
 * MeterUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * API to emit metering records. For identical requests, the API is idempotent. It simply returns the metering record
 *
 * ID>
 *
 * <code>MeterUsage</code> is authenticated on the buyer's AWS account using credentials from the EC2 instance, ECS task,
 * or EKS
 *
 * pod>
 *
 * <code>MeterUsage</code> can optionally include multiple usage allocations, to provide customers with usage data split
 * into buckets by tags that you define (or allow the customer to
 *
 * define)>
 *
 * Usage records are expected to be submitted as quickly as possible after the event that is being recorded, and are not
 * accepted more than 6 hours after the
 */
MeterUsageResponse * MarketplaceMeteringClient::meterUsage(const MeterUsageRequest &request)
{
    return qobject_cast<MeterUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceMeteringClient service, and returns a pointer to an
 * RegisterUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Paid container software products sold through AWS Marketplace must integrate with the AWS Marketplace Metering Service
 * and call the <code>RegisterUsage</code> operation for software entitlement and metering. Free and BYOL products for
 * Amazon ECS or Amazon EKS aren't required to call <code>RegisterUsage</code>, but you may choose to do so if you would
 * like to receive usage data in your seller reports. The sections below explain the behavior of
 * <code>RegisterUsage</code>. <code>RegisterUsage</code> performs two primary functions: metering and
 *
 * entitlement> <ul> <li>
 *
 * <i>Entitlement</i>: <code>RegisterUsage</code> allows you to verify that the customer running your paid software is
 * subscribed to your product on AWS Marketplace, enabling you to guard against unauthorized use. Your container image that
 * integrates with <code>RegisterUsage</code> is only required to guard against unauthorized use at container startup, as
 * such a <code>CustomerNotSubscribedException</code> or <code>PlatformNotSupportedException</code> will only be thrown on
 * the initial call to <code>RegisterUsage</code>. Subsequent calls from the same Amazon ECS task instance (e.g. task-id)
 * or Amazon EKS pod will not throw a <code>CustomerNotSubscribedException</code>, even if the customer unsubscribes while
 * the Amazon ECS task or Amazon EKS pod is still
 *
 * running> </li> <li>
 *
 * <i>Metering</i>: <code>RegisterUsage</code> meters software use per ECS task, per hour, or per pod for Amazon EKS with
 * usage prorated to the second. A minimum of 1 minute of usage applies to tasks that are short lived. For example, if a
 * customer has a 10 node Amazon ECS or Amazon EKS cluster and a service configured as a Daemon Set, then Amazon ECS or
 * Amazon EKS will launch a task on all 10 cluster nodes and the customer will be charged: (10 * hourly_rate). Metering for
 * software use is automatically handled by the AWS Marketplace Metering Control Plane -- your software is not required to
 * perform any metering specific actions, other than call <code>RegisterUsage</code> once for metering of software use to
 * commence. The AWS Marketplace Metering Control Plane will also continue to bill customers for running ECS tasks and
 * Amazon EKS pods, regardless of the customers subscription state, removing the need for your software to perform
 * entitlement checks at
 */
RegisterUsageResponse * MarketplaceMeteringClient::registerUsage(const RegisterUsageRequest &request)
{
    return qobject_cast<RegisterUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceMeteringClient service, and returns a pointer to an
 * ResolveCustomerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * <code>ResolveCustomer</code> is called by a SaaS application during the registration process. When a buyer visits your
 * website during the registration process, the buyer submits a registration token through their browser. The registration
 * token is resolved through this API to obtain a <code>CustomerIdentifier</code> along with the
 * <code>CustomerAWSAccountId</code> and
 *
 * <code>ProductCode</code>> <note>
 *
 * The API needs to called from the seller account id used to publish the SaaS application to successfully resolve the
 *
 * token>
 *
 * For an example of using <code>ResolveCustomer</code>, see <a
 * href="https://docs.aws.amazon.com/marketplace/latest/userguide/saas-code-examples.html#saas-resolvecustomer-example">
 * ResolveCustomer code example</a> in the <i>AWS Marketplace Seller
 */
ResolveCustomerResponse * MarketplaceMeteringClient::resolveCustomer(const ResolveCustomerRequest &request)
{
    return qobject_cast<ResolveCustomerResponse *>(send(request));
}

/*!
 * \class QtAws::MarketplaceMetering::MarketplaceMeteringClientPrivate
 * \brief The MarketplaceMeteringClientPrivate class provides private implementation for MarketplaceMeteringClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 * Constructs a MarketplaceMeteringClientPrivate object with public implementation \a q.
 */
MarketplaceMeteringClientPrivate::MarketplaceMeteringClientPrivate(MarketplaceMeteringClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MarketplaceMetering
} // namespace QtAws
