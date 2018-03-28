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

#include "costexplorerclient.h"
#include "costexplorerclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CostExplorer {

/**
 * @class  CostExplorerClient
 *
 * @brief  Client for AWS Cost Explorer Service
 *
 * The Cost Explorer API allows you to programmatically query your cost and usage data. You can query for aggregated data
 * such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 * write operations for DynamoDB database tables in your production environment.
 *
 * </p
 *
 * Service
 *
 * Endpoin>
 *
 * The Cost Explorer API provides the following
 *
 * endpoint> <ul> <li>
 */

/**
 * @brief  Constructs a new CostExplorerClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CostExplorerClient::CostExplorerClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CostExplorerClientPrivate(this), parent)
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

/**
 * @brief  Constructs a new CostExplorerClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
CostExplorerClient::CostExplorerClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CostExplorerClientPrivate(this), parent)
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

/**
 * Retrieves cost and usage metrics for your account. You can specify which cost and usage-related metric, such as
 * <code>BlendedCosts</code> or <code>UsageQuantity</code>, that you want the request to return. You can also filter and
 * group your data by various dimensions, such as <code>SERVICE</code> or <code>AZ</code>, in a specific time range. For a
 * complete list of valid dimensions, see the <code> <a
 * href="http://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
 * </code> operation. Master accounts in an organization in AWS Organizations have access to all member
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCostAndUsageResponse * CostExplorerClient::getCostAndUsage(const GetCostAndUsageRequest &request)
{
    return qobject_cast<GetCostAndUsageResponse *>(send(request));
}

/**
 * Retrieves all available filter values for a specific filter over a period of time. You can search the dimension values
 * for an arbitrary string.
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetDimensionValuesResponse * CostExplorerClient::getDimensionValues(const GetDimensionValuesRequest &request)
{
    return qobject_cast<GetDimensionValuesResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetReservationCoverageResponse * CostExplorerClient::getReservationCoverage(const GetReservationCoverageRequest &request)
{
    return qobject_cast<GetReservationCoverageResponse *>(send(request));
}

/**
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
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetReservationPurchaseRecommendationResponse * CostExplorerClient::getReservationPurchaseRecommendation(const GetReservationPurchaseRecommendationRequest &request)
{
    return qobject_cast<GetReservationPurchaseRecommendationResponse *>(send(request));
}

/**
 * You can retrieve the reservation utilization for your account. Master accounts in an organization in AWS Organizations
 * have access to their associated member accounts. You can filter data by dimensions in a time period. You can use
 * <code>GetDimensionValues</code> to determine the possible dimension values. Currently, you can group only by
 * <code>SUBSCRIPTION_ID</code>.
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetReservationUtilizationResponse * CostExplorerClient::getReservationUtilization(const GetReservationUtilizationRequest &request)
{
    return qobject_cast<GetReservationUtilizationResponse *>(send(request));
}

/**
 * You can query for available tag keys and tag values for a specified period. You can search the tag values for an
 * arbitrary string.
 *
 * @param  request Request to send to AWS Cost Explorer Service.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetTagsResponse * CostExplorerClient::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
}

/**
 * @internal
 *
 * @class  CostExplorerClientPrivate
 *
 * @brief  Private implementation for CostExplorerClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CostExplorerClientPrivate object.
 *
 * @param  q  Pointer to this object's public CostExplorerClient instance.
 */
CostExplorerClientPrivate::CostExplorerClientPrivate(CostExplorerClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CostExplorer
} // namespace AWS
