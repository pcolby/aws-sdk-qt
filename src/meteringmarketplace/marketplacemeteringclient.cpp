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

#include "marketplacemeteringclient.h"
#include "marketplacemeteringclient_p.h"

#include "core/awssignaturev4.h"
#include "batchmeterusagerequest.h"
#include "batchmeterusageresponse.h"
#include "meterusagerequest.h"
#include "meterusageresponse.h"
#include "resolvecustomerrequest.h"
#include "resolvecustomerresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MarketplaceMetering
 * \brief The QtAws::MarketplaceMetering contains stuff...
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
 * BatchMeterUsage is called from a SaaS application listed on the AWS Marketplace to post metering records for a set of
 *
 * customers>
 *
 * For identical requests, the API is idempotent; requests can be retried with the same records or a subset of the input
 *
 * records>
 *
 * Every request to BatchMeterUsage is for one product. If you need to meter usage for multiple products, you must make
 * multiple calls to
 *
 * BatchMeterUsage>
 *
 * BatchMeterUsage can process up to 25 UsageRecords at a
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
 * MeterUsage is authenticated on the buyer's AWS account, generally when running from an EC2 instance on the AWS
 */
MeterUsageResponse * MarketplaceMeteringClient::meterUsage(const MeterUsageRequest &request)
{
    return qobject_cast<MeterUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the MarketplaceMeteringClient service, and returns a pointer to an
 * ResolveCustomerResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * ResolveCustomer is called by a SaaS application during the registration process. When a buyer visits your website during
 * the registration process, the buyer submits a registration token through their browser. The registration token is
 * resolved through this API to obtain a CustomerIdentifier and product
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
