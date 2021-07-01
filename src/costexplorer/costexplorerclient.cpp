/*
    Copyright 2013-2021 Paul Colby

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

#include "costexplorerclient.h"
#include "costexplorerclient_p.h"

#include "core/awssignaturev4.h"
#include "createanomalymonitorrequest.h"
#include "createanomalymonitorresponse.h"
#include "createanomalysubscriptionrequest.h"
#include "createanomalysubscriptionresponse.h"
#include "createcostcategorydefinitionrequest.h"
#include "createcostcategorydefinitionresponse.h"
#include "deleteanomalymonitorrequest.h"
#include "deleteanomalymonitorresponse.h"
#include "deleteanomalysubscriptionrequest.h"
#include "deleteanomalysubscriptionresponse.h"
#include "deletecostcategorydefinitionrequest.h"
#include "deletecostcategorydefinitionresponse.h"
#include "describecostcategorydefinitionrequest.h"
#include "describecostcategorydefinitionresponse.h"
#include "getanomaliesrequest.h"
#include "getanomaliesresponse.h"
#include "getanomalymonitorsrequest.h"
#include "getanomalymonitorsresponse.h"
#include "getanomalysubscriptionsrequest.h"
#include "getanomalysubscriptionsresponse.h"
#include "getcostandusagerequest.h"
#include "getcostandusageresponse.h"
#include "getcostandusagewithresourcesrequest.h"
#include "getcostandusagewithresourcesresponse.h"
#include "getcostcategoriesrequest.h"
#include "getcostcategoriesresponse.h"
#include "getcostforecastrequest.h"
#include "getcostforecastresponse.h"
#include "getdimensionvaluesrequest.h"
#include "getdimensionvaluesresponse.h"
#include "getreservationcoveragerequest.h"
#include "getreservationcoverageresponse.h"
#include "getreservationpurchaserecommendationrequest.h"
#include "getreservationpurchaserecommendationresponse.h"
#include "getreservationutilizationrequest.h"
#include "getreservationutilizationresponse.h"
#include "getrightsizingrecommendationrequest.h"
#include "getrightsizingrecommendationresponse.h"
#include "getsavingsplanscoveragerequest.h"
#include "getsavingsplanscoverageresponse.h"
#include "getsavingsplanspurchaserecommendationrequest.h"
#include "getsavingsplanspurchaserecommendationresponse.h"
#include "getsavingsplansutilizationrequest.h"
#include "getsavingsplansutilizationresponse.h"
#include "getsavingsplansutilizationdetailsrequest.h"
#include "getsavingsplansutilizationdetailsresponse.h"
#include "gettagsrequest.h"
#include "gettagsresponse.h"
#include "getusageforecastrequest.h"
#include "getusageforecastresponse.h"
#include "listcostcategorydefinitionsrequest.h"
#include "listcostcategorydefinitionsresponse.h"
#include "provideanomalyfeedbackrequest.h"
#include "provideanomalyfeedbackresponse.h"
#include "updateanomalymonitorrequest.h"
#include "updateanomalymonitorresponse.h"
#include "updateanomalysubscriptionrequest.h"
#include "updateanomalysubscriptionresponse.h"
#include "updatecostcategorydefinitionrequest.h"
#include "updatecostcategorydefinitionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CostExplorer
 * \brief Contains classess for accessing AWS Cost Explorer Service.
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
 *  The Cost Explorer API enables you to programmatically query your cost and usage data. You can query for aggregated data
 *  such as total monthly costs or total daily usage. You can also query for granular data, such as the number of daily
 *  write operations for Amazon DynamoDB database tables in your production environment.
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
 * 
 *  <code>https://ce.us-east-1.amazonaws.com</code>
 * 
 *  </p </li> </ul>
 * 
 *  For information about costs associated with the Cost Explorer API, see <a
 *  href="http://aws.amazon.com/aws-cost-management/pricing/">AWS Cost Management
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
 * CreateAnomalyMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new cost anomaly detection monitor with the requested type and monitor specification.
 */
CreateAnomalyMonitorResponse * CostExplorerClient::createAnomalyMonitor(const CreateAnomalyMonitorRequest &request)
{
    return qobject_cast<CreateAnomalyMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * CreateAnomalySubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a subscription to a cost anomaly detection monitor. You can use each subscription to define subscribers with email
 * or SNS notifications. Email subscribers can set a dollar threshold and a time frequency for receiving notifications.
 */
CreateAnomalySubscriptionResponse * CostExplorerClient::createAnomalySubscription(const CreateAnomalySubscriptionRequest &request)
{
    return qobject_cast<CreateAnomalySubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * CreateCostCategoryDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates a new Cost Category with the requested name and
 */
CreateCostCategoryDefinitionResponse * CostExplorerClient::createCostCategoryDefinition(const CreateCostCategoryDefinitionRequest &request)
{
    return qobject_cast<CreateCostCategoryDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * DeleteAnomalyMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a cost anomaly monitor.
 */
DeleteAnomalyMonitorResponse * CostExplorerClient::deleteAnomalyMonitor(const DeleteAnomalyMonitorRequest &request)
{
    return qobject_cast<DeleteAnomalyMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * DeleteAnomalySubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a cost anomaly subscription.
 */
DeleteAnomalySubscriptionResponse * CostExplorerClient::deleteAnomalySubscription(const DeleteAnomalySubscriptionRequest &request)
{
    return qobject_cast<DeleteAnomalySubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * DeleteCostCategoryDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes a Cost Category. Expenses from this month going forward will no longer be categorized with this Cost
 */
DeleteCostCategoryDefinitionResponse * CostExplorerClient::deleteCostCategoryDefinition(const DeleteCostCategoryDefinitionRequest &request)
{
    return qobject_cast<DeleteCostCategoryDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * DescribeCostCategoryDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the name, ARN, rules, definition, and effective dates of a Cost Category that's defined in the
 *
 * account>
 *
 * You have the option to use <code>EffectiveOn</code> to return a Cost Category that is active on a specific date. If
 * there is no <code>EffectiveOn</code> specified, you’ll see a Cost Category that is effective on the current date. If
 * Cost Category is still effective, <code>EffectiveEnd</code> is omitted in the response.
 */
DescribeCostCategoryDefinitionResponse * CostExplorerClient::describeCostCategoryDefinition(const DescribeCostCategoryDefinitionRequest &request)
{
    return qobject_cast<DescribeCostCategoryDefinitionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetAnomaliesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all of the cost anomalies detected on your account, during the time period specified by the
 * <code>DateInterval</code> object.
 */
GetAnomaliesResponse * CostExplorerClient::getAnomalies(const GetAnomaliesRequest &request)
{
    return qobject_cast<GetAnomaliesResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetAnomalyMonitorsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the cost anomaly monitor definitions for your account. You can filter using a list of cost anomaly monitor
 * Amazon Resource Names (ARNs).
 */
GetAnomalyMonitorsResponse * CostExplorerClient::getAnomalyMonitors(const GetAnomalyMonitorsRequest &request)
{
    return qobject_cast<GetAnomalyMonitorsResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetAnomalySubscriptionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the cost anomaly subscription objects for your account. You can filter using a list of cost anomaly monitor
 * Amazon Resource Names (ARNs).
 */
GetAnomalySubscriptionsResponse * CostExplorerClient::getAnomalySubscriptions(const GetAnomalySubscriptionsRequest &request)
{
    return qobject_cast<GetAnomalySubscriptionsResponse *>(send(request));
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
 * complete list of valid dimensions, see the <a
 * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
 * operation. Management account in an organization in AWS Organizations have access to all member
 *
 * accounts>
 *
 * For information about filter limitations, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/billing-limits.html">Quotas and restrictions</a> in
 * the <i>Billing and Cost Management User
 */
GetCostAndUsageResponse * CostExplorerClient::getCostAndUsage(const GetCostAndUsageRequest &request)
{
    return qobject_cast<GetCostAndUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetCostAndUsageWithResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves cost and usage metrics with resources for your account. You can specify which cost and usage-related metric,
 * such as <code>BlendedCosts</code> or <code>UsageQuantity</code>, that you want the request to return. You can also
 * filter and group your data by various dimensions, such as <code>SERVICE</code> or <code>AZ</code>, in a specific time
 * range. For a complete list of valid dimensions, see the <a
 * href="https://docs.aws.amazon.com/aws-cost-management/latest/APIReference/API_GetDimensionValues.html">GetDimensionValues</a>
 * operation. Management account in an organization in AWS Organizations have access to all member accounts. This API is
 * currently available for the Amazon Elastic Compute Cloud – Compute service
 *
 * only> <note>
 *
 * This is an opt-in only feature. You can enable this feature from the Cost Explorer Settings page. For information on how
 * to access the Settings page, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-access.html">Controlling Access for Cost
 * Explorer</a> in the <i>AWS Billing and Cost Management User
 */
GetCostAndUsageWithResourcesResponse * CostExplorerClient::getCostAndUsageWithResources(const GetCostAndUsageWithResourcesRequest &request)
{
    return qobject_cast<GetCostAndUsageWithResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetCostCategoriesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves an array of Cost Category names and values incurred
 *
 * cost> <note>
 *
 * If some Cost Category names and values are not associated with any cost, they will not be returned by this
 */
GetCostCategoriesResponse * CostExplorerClient::getCostCategories(const GetCostCategoriesRequest &request)
{
    return qobject_cast<GetCostCategoriesResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetCostForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a forecast for how much Amazon Web Services predicts that you will spend over the forecast time period that
 * you select, based on your past costs.
 */
GetCostForecastResponse * CostExplorerClient::getCostForecast(const GetCostForecastRequest &request)
{
    return qobject_cast<GetCostForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetDimensionValuesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves all available filter values for a specified filter over a period of time. You can search the dimension values
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
 * Retrieves the reservation coverage for your account. This enables you to see how much of your Amazon Elastic Compute
 * Cloud, Amazon ElastiCache, Amazon Relational Database Service, or Amazon Redshift usage is covered by a reservation. An
 * organization's management account can see the coverage of the associated member accounts. This supports dimensions, Cost
 * Categories, and nested expressions. For any time period, you can filter data about reservation usage by the following
 *
 * dimensions> <ul> <li>
 *
 * A> </li> <li>
 *
 * CACHE_ENGIN> </li> <li>
 *
 * DATABASE_ENGIN> </li> <li>
 *
 * DEPLOYMENT_OPTIO> </li> <li>
 *
 * INSTANCE_TYP> </li> <li>
 *
 * LINKED_ACCOUN> </li> <li>
 *
 * OPERATING_SYSTE> </li> <li>
 *
 * PLATFOR> </li> <li>
 *
 * REGIO> </li> <li>
 *
 * SERVIC> </li> <li>
 *
 * TA> </li> <li>
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
 * For example, AWS automatically aggregates your Amazon EC2 Linux, shared tenancy, and c4 family usage in the US West
 * (Oregon) Region and recommends that you buy size-flexible regional reservations to apply to the c4 family usage. AWS
 * recommends the smallest size instance in an instance family. This makes it easier to purchase a size-flexible RI. AWS
 * also shows the equal number of normalized units so that you can purchase any instance size that you want. For this
 * example, your RI recommendation would be for <code>c4.large</code> because that is the smallest size instance in the c4
 * instance
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
 * Retrieves the reservation utilization for your account. Management account in an organization have access to member
 * accounts. You can filter data by dimensions in a time period. You can use <code>GetDimensionValues</code> to determine
 * the possible dimension values. Currently, you can group only by <code>SUBSCRIPTION_ID</code>.
 */
GetReservationUtilizationResponse * CostExplorerClient::getReservationUtilization(const GetReservationUtilizationRequest &request)
{
    return qobject_cast<GetReservationUtilizationResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetRightsizingRecommendationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Creates recommendations that help you save cost by identifying idle and underutilized Amazon EC2
 *
 * instances>
 *
 * Recommendations are generated to either downsize or terminate instances, along with providing savings detail and
 * metrics. For details on calculation and function, see <a
 * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/ce-rightsizing.html">Optimizing Your Cost with
 * Rightsizing Recommendations</a> in the <i>AWS Billing and Cost Management User
 */
GetRightsizingRecommendationResponse * CostExplorerClient::getRightsizingRecommendation(const GetRightsizingRecommendationRequest &request)
{
    return qobject_cast<GetRightsizingRecommendationResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetSavingsPlansCoverageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the Savings Plans covered for your account. This enables you to see how much of your cost is covered by a
 * Savings Plan. An organization’s management account can see the coverage of the associated member accounts. This supports
 * dimensions, Cost Categories, and nested expressions. For any time period, you can filter data for Savings Plans usage
 * with the following
 *
 * dimensions> <ul> <li>
 *
 * <code>LINKED_ACCOUNT</code>
 *
 * </p </li> <li>
 *
 * <code>REGION</code>
 *
 * </p </li> <li>
 *
 * <code>SERVICE</code>
 *
 * </p </li> <li>
 *
 * <code>INSTANCE_FAMILY</code>
 *
 * </p </li> </ul>
 *
 * To determine valid values for a dimension, use the <code>GetDimensionValues</code>
 */
GetSavingsPlansCoverageResponse * CostExplorerClient::getSavingsPlansCoverage(const GetSavingsPlansCoverageRequest &request)
{
    return qobject_cast<GetSavingsPlansCoverageResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetSavingsPlansPurchaseRecommendationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves your request parameters, Savings Plan Recommendations Summary and Details.
 */
GetSavingsPlansPurchaseRecommendationResponse * CostExplorerClient::getSavingsPlansPurchaseRecommendation(const GetSavingsPlansPurchaseRecommendationRequest &request)
{
    return qobject_cast<GetSavingsPlansPurchaseRecommendationResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetSavingsPlansUtilizationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the Savings Plans utilization for your account across date ranges with daily or monthly granularity.
 * Management account in an organization have access to member accounts. You can use <code>GetDimensionValues</code> in
 * <code>SAVINGS_PLANS</code> to determine the possible dimension
 *
 * values> <note>
 *
 * You cannot group by any dimension values for
 */
GetSavingsPlansUtilizationResponse * CostExplorerClient::getSavingsPlansUtilization(const GetSavingsPlansUtilizationRequest &request)
{
    return qobject_cast<GetSavingsPlansUtilizationResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetSavingsPlansUtilizationDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves attribute data along with aggregate utilization and savings data for a given time period. This doesn't support
 * granular or grouped data (daily/monthly) in response. You can't retrieve data by dates in a single response similar to
 * <code>GetSavingsPlanUtilization</code>, but you have the option to make multiple calls to
 * <code>GetSavingsPlanUtilizationDetails</code> by providing individual dates. You can use <code>GetDimensionValues</code>
 * in <code>SAVINGS_PLANS</code> to determine the possible dimension
 *
 * values> <note>
 *
 * <code>GetSavingsPlanUtilizationDetails</code> internally groups data by
 */
GetSavingsPlansUtilizationDetailsResponse * CostExplorerClient::getSavingsPlansUtilizationDetails(const GetSavingsPlansUtilizationDetailsRequest &request)
{
    return qobject_cast<GetSavingsPlansUtilizationDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetTagsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Queries for available tag keys and tag values for a specified period. You can search the tag values for an arbitrary
 * string.
 */
GetTagsResponse * CostExplorerClient::getTags(const GetTagsRequest &request)
{
    return qobject_cast<GetTagsResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * GetUsageForecastResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves a forecast for how much Amazon Web Services predicts that you will use over the forecast time period that you
 * select, based on your past usage.
 */
GetUsageForecastResponse * CostExplorerClient::getUsageForecast(const GetUsageForecastRequest &request)
{
    return qobject_cast<GetUsageForecastResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * ListCostCategoryDefinitionsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the name, ARN, <code>NumberOfRules</code> and effective dates of all Cost Categories defined in the account. You
 * have the option to use <code>EffectiveOn</code> to return a list of Cost Categories that were active on a specific date.
 * If there is no <code>EffectiveOn</code> specified, you’ll see Cost Categories that are effective on the current date. If
 * Cost Category is still effective, <code>EffectiveEnd</code> is omitted in the response.
 * <code>ListCostCategoryDefinitions</code> supports pagination. The request can have a <code>MaxResults</code> range up to
 */
ListCostCategoryDefinitionsResponse * CostExplorerClient::listCostCategoryDefinitions(const ListCostCategoryDefinitionsRequest &request)
{
    return qobject_cast<ListCostCategoryDefinitionsResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * ProvideAnomalyFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Modifies the feedback property of a given cost anomaly.
 */
ProvideAnomalyFeedbackResponse * CostExplorerClient::provideAnomalyFeedback(const ProvideAnomalyFeedbackRequest &request)
{
    return qobject_cast<ProvideAnomalyFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * UpdateAnomalyMonitorResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing cost anomaly monitor. The changes made are applied going forward, and does not change anomalies
 * detected in the past.
 */
UpdateAnomalyMonitorResponse * CostExplorerClient::updateAnomalyMonitor(const UpdateAnomalyMonitorRequest &request)
{
    return qobject_cast<UpdateAnomalyMonitorResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * UpdateAnomalySubscriptionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing cost anomaly monitor subscription.
 */
UpdateAnomalySubscriptionResponse * CostExplorerClient::updateAnomalySubscription(const UpdateAnomalySubscriptionRequest &request)
{
    return qobject_cast<UpdateAnomalySubscriptionResponse *>(send(request));
}

/*!
 * Sends \a request to the CostExplorerClient service, and returns a pointer to an
 * UpdateCostCategoryDefinitionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates an existing Cost Category. Changes made to the Cost Category rules will be used to categorize the current
 * month’s expenses and future expenses. This won’t change categorization for the previous
 */
UpdateCostCategoryDefinitionResponse * CostExplorerClient::updateCostCategoryDefinition(const UpdateCostCategoryDefinitionRequest &request)
{
    return qobject_cast<UpdateCostCategoryDefinitionResponse *>(send(request));
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
