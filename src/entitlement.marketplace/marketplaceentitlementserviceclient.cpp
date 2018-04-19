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

#include "marketplaceentitlementserviceclient.h"
#include "marketplaceentitlementserviceclient_p.h"

#include "core/awssignaturev4.h"
#include "getentitlementsrequest.h"
#include "getentitlementsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::MarketplaceEntitlementService
 * \brief The QtAws::MarketplaceEntitlementService contains stuff...
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace MarketplaceEntitlementService {

/*!
 * \class QtAws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClient
 * \brief The MarketplaceEntitlementServiceClient class provides access to the AWS Marketplace Entitlement Service service.
 *
 * \ingroup aws-clients
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
 */

/*!
 * \brief Constructs a MarketplaceEntitlementServiceClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MarketplaceEntitlementServiceClientPrivate(this), parent)
{
    Q_D(MarketplaceEntitlementServiceClient);
    d->apiVersion = QStringLiteral("2017-01-11");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("entitlement.marketplace");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Marketplace Entitlement Service");
    d->serviceName = QStringLiteral("aws-marketplace");
}

/*!
 * \overload MarketplaceEntitlementServiceClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \a  AwsEndpoint::getEndpoint()
 */
MarketplaceEntitlementServiceClient::MarketplaceEntitlementServiceClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new MarketplaceEntitlementServiceClientPrivate(this), parent)
{
    Q_D(MarketplaceEntitlementServiceClient);
    d->apiVersion = QStringLiteral("2017-01-11");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("entitlement.marketplace");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Marketplace Entitlement Service");
    d->serviceName = QStringLiteral("aws-marketplace");
}

/*!
 * Sends \a request to the MarketplaceEntitlementServiceClient service, and returns a pointer to an
 * GetEntitlementsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * GetEntitlements retrieves entitlement values for a given product. The results can be filtered based on customer
 * identifier or product
 */
GetEntitlementsResponse * MarketplaceEntitlementServiceClient::getEntitlements(const GetEntitlementsRequest &request)
{
    return qobject_cast<GetEntitlementsResponse *>(send(request));
}

/*!
 * \class QtAws::MarketplaceEntitlementService::MarketplaceEntitlementServiceClientPrivate
 * \brief The MarketplaceEntitlementServiceClientPrivate class provides private implementation for MarketplaceEntitlementServiceClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsMarketplaceEntitlementService
 */

/*!
 * Constructs a MarketplaceEntitlementServiceClientPrivate object with public implementation \a q.
 */
MarketplaceEntitlementServiceClientPrivate::MarketplaceEntitlementServiceClientPrivate(MarketplaceEntitlementServiceClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace MarketplaceEntitlementService
} // namespace QtAws
