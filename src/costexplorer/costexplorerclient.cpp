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

#include "costexplorerclient.h"
#include "costexplorerclient_p.h"

#include "core/awssignaturev4.h"
#include "getcostandusagerequest.h"
#include "getcostandusageresponse.h"
#include "getdimensionvaluesrequest.h"
#include "getdimensionvaluesresponse.h"
#include "getreservationcoveragerequest.h"
#include "getreservationcoverageresponse.h"
#include "getreservationpurchaserecommendationrequest.h"
#include "getreservationpurchaserecommendationresponse.h"
#include "getreservationutilizationrequest.h"
#include "getreservationutilizationresponse.h"
#include "gettagsrequest.h"
#include "gettagsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CostExplorer
 * \brief The QtAws::CostExplorer contains stuff...
 *
 * \inmodule QtAwsCostExplorer
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CostExplorer {

/*!
 * \class QtAws::CostExplorer::CostExplorerClient
 * \brief The CostExplorerClient class provides access to the AWS Cost Explorer Service service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCostExplorer
 *
 *  The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for DynamoDB database tables in your production environment.
 * 
 *  </p
 * 
 *  Service
 * 
 *  Endpoin>
 * 
 *  The Cost Explorer API provides the following
 * 
 *  endpoint> <ul> <li>
 */

/*!
 * \brief Constructs a CostExplorerClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CostExplorerClient::CostExplorerClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CostExplorerClientPrivate(this), parent)
{
    Q_D(CostExplorerClient);
    d->apiVersion = QStringLiteral("2017-10-25");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("ce");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS Cost Explorer Service");
    d->serviceName = QStringLiteral("ce");
}

/*!
 * \overload CostExplorerClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CostExplorerClient::CostExplorerClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CostExplorerClientPrivate(this), parent)
{
    Q_D(CostExplorerClient);
    d->apiVersion = QStringLiteral("2017-10-25");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("ce");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS Cost Explorer Service");
    d->serviceName = QStringLiteral("ce");
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetCostAndUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves cost and usage metrics for your account. You can specify which cost and usage-related metric, such as
 * <code>BlendedCosts</code> or <code>UsageQuantity</code>, that you want the request to return. You can also filter and
 * group your data by various dimensions, such as <code>SERVICE</code> or <code>AZ</code>, in a specific time range. For a
 * complete list of valid dimensions, see the <code> <a
 * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
 * </code> operation. Master accounts in an organization in AWS Organizations have access to all member
 */
GetCostAndUsageResponse * CostExplorerClient::getCostAndUsage(const GetCostAndUsageRequest &request)
{
    return qobject_cast<GetCostAndUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetDimensionValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all available filter values for a specific filter over a period of time. You can search the dimension values
 * for an arbitrary string.
 */
GetDimensionValuesResponse * CostExplorerClient::getDimensionValues(const GetDimensionValuesRequest &request)
{
    return qobject_cast<GetDimensionValuesResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetReservationCoverageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the reservation coverage for your account. This allows you to see how much of your Amazon Elastic Compute
 * Cloud, Amazon ElastiCache, Amazon Relational Database Service, or Amazon Redshift usage is covered by a reservation. An
 * organization's master account can see the coverage of the associated member accounts. For any time period, you can
 * filter data about reservation usage by the following
 *
 * dimensions> <ul> <li>
 *
 * A> </li> <li>
 *
 * INSTANCE_TYP> </li> <li>
 *
 * LINKED_ACCOUN> </li> <li>
 *
 * PLATFOR> </li> <li>
 *
 * REGIO> </li> <li>
 *
 * TENANC> </li> </ul>
 *
 * To determine valid values for a dimension, use the <code>GetDimensionValues</code> operation.
 */
GetReservationCoverageResponse * CostExplorerClient::getReservationCoverage(const GetReservationCoverageRequest &request)
{
    return qobject_cast<GetReservationCoverageResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetReservationPurchaseRecommendationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets recommendations for which reservations to purchase. These recommendations could help you reduce your costs.
 * Reservations provide a discounted hourly rate (up to 75%) compared to On-Demand
 *
 * pricing>
 *
 * AWS generates your recommendations by identifying your On-Demand usage during a specific time period and collecting your
 * usage into categories that are eligible for a reservation. After AWS has these categories, it simulates every
 * combination of reservations in each category of usage to identify the best number of each type of RI to purchase to
 * maximize your estimated savings.
 *
 * </p
 *
 * For example, AWS automatically aggregates your EC2 Linux, shared tenancy, and c4 family usage in the US West (Oregon)
 * Region and recommends that you buy size-flexible regional reservations to apply to the c4 family usage. AWS recommends
 * the smallest size instance in an instance family. This makes it easier to purchase a size-flexible RI. AWS also shows
 * the equal number of normalized units so that you can purchase any instance size that you want. For this example, your RI
 * recommendation would be for <code>c4.large</code>, because that is the smallest size instance in the c4 instance
 */
GetReservationPurchaseRecommendationResponse * CostExplorerClient::getReservationPurchaseRecommendation(const GetReservationPurchaseRecommendationRequest &request)
{
    return qobject_cast<GetReservationPurchaseRecommendationResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetReservationUtilizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can retrieve the reservation utilization for your account. Master accounts in an organization in AWS Organizations
 * have access to their associated member accounts. You can filter data by dimensions in a time period. You can use
 * <code>GetDimensionValues</code> to determine the possible dimension values. Currently, you can group only by
 * <code>SUBSCRIPTION_ID</code>.
 */
GetReservationUtilizationResponse * CostExplorerClient::getReservationUtilization(const GetReservationUtilizationRequest &request)
{
    return qobject_cast<GetReservationUtilizationResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * You can query for available tag keys and tag values for a specified period. You can search the tag values for an
 * arbitrary string.
 */
GetTagsResponse * CostExplorerClient::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
}

/*!
 * \class QtAws::CostExplorer::CostExplorerClientPrivate
 * \brief The CostExplorerClientPrivate class provides private implementation for CostExplorerClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCostExplorer
 */

/*!
 * Constructs a CostExplorerClientPrivate object with public implementation \a q.
 */
CostExplorerClientPrivate::CostExplorerClientPrivate(CostExplorerClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CostExplorer
} // namespace QtAws
