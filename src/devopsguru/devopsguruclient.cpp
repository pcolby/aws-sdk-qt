// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "devopsguruclient.h"
#include "devopsguruclient_p.h"

#include "core/awssignaturev4.h"
#include "addnotificationchannelrequest.h"
#include "addnotificationchannelresponse.h"
#include "deleteinsightrequest.h"
#include "deleteinsightresponse.h"
#include "describeaccounthealthrequest.h"
#include "describeaccounthealthresponse.h"
#include "describeaccountoverviewrequest.h"
#include "describeaccountoverviewresponse.h"
#include "describeanomalyrequest.h"
#include "describeanomalyresponse.h"
#include "describeeventsourcesconfigrequest.h"
#include "describeeventsourcesconfigresponse.h"
#include "describefeedbackrequest.h"
#include "describefeedbackresponse.h"
#include "describeinsightrequest.h"
#include "describeinsightresponse.h"
#include "describeorganizationhealthrequest.h"
#include "describeorganizationhealthresponse.h"
#include "describeorganizationoverviewrequest.h"
#include "describeorganizationoverviewresponse.h"
#include "describeorganizationresourcecollectionhealthrequest.h"
#include "describeorganizationresourcecollectionhealthresponse.h"
#include "describeresourcecollectionhealthrequest.h"
#include "describeresourcecollectionhealthresponse.h"
#include "describeserviceintegrationrequest.h"
#include "describeserviceintegrationresponse.h"
#include "getcostestimationrequest.h"
#include "getcostestimationresponse.h"
#include "getresourcecollectionrequest.h"
#include "getresourcecollectionresponse.h"
#include "listanomaliesforinsightrequest.h"
#include "listanomaliesforinsightresponse.h"
#include "listanomalousloggroupsrequest.h"
#include "listanomalousloggroupsresponse.h"
#include "listeventsrequest.h"
#include "listeventsresponse.h"
#include "listinsightsrequest.h"
#include "listinsightsresponse.h"
#include "listmonitoredresourcesrequest.h"
#include "listmonitoredresourcesresponse.h"
#include "listnotificationchannelsrequest.h"
#include "listnotificationchannelsresponse.h"
#include "listorganizationinsightsrequest.h"
#include "listorganizationinsightsresponse.h"
#include "listrecommendationsrequest.h"
#include "listrecommendationsresponse.h"
#include "putfeedbackrequest.h"
#include "putfeedbackresponse.h"
#include "removenotificationchannelrequest.h"
#include "removenotificationchannelresponse.h"
#include "searchinsightsrequest.h"
#include "searchinsightsresponse.h"
#include "searchorganizationinsightsrequest.h"
#include "searchorganizationinsightsresponse.h"
#include "startcostestimationrequest.h"
#include "startcostestimationresponse.h"
#include "updateeventsourcesconfigrequest.h"
#include "updateeventsourcesconfigresponse.h"
#include "updateresourcecollectionrequest.h"
#include "updateresourcecollectionresponse.h"
#include "updateserviceintegrationrequest.h"
#include "updateserviceintegrationresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::DevOpsGuru
 * \brief Contains classess for accessing Amazon DevOps Guru.
 *
 * \inmodule QtAwsDevOpsGuru
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace DevOpsGuru {

/*!
 * \class QtAws::DevOpsGuru::DevOpsGuruClient
 * \brief The DevOpsGuruClient class provides access to the Amazon DevOps Guru service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDevOpsGuru
 *
 *  Amazon DevOps Guru is a fully managed service that helps you identify anomalous behavior in business critical
 *  operational applications. You specify the Amazon Web Services resources that you want DevOps Guru to cover, then the
 *  Amazon CloudWatch metrics and Amazon Web Services CloudTrail events related to those resources are analyzed. When
 *  anomalous behavior is detected, DevOps Guru creates an <i>insight</i> that includes recommendations, related events, and
 *  related metrics that can help you improve your operational applications. For more information, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html">What is Amazon DevOps Guru</a>.
 * 
 *  </p
 * 
 *  You can specify 1 or 2 Amazon Simple Notification Service topics so you are notified every time a new insight is
 *  created. You can also enable DevOps Guru to generate an OpsItem in Amazon Web Services Systems Manager for each insight
 *  to help you manage and track your work addressing insights.
 * 
 *  </p
 * 
 *  To learn about the DevOps Guru workflow, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/welcome.html#how-it-works">How DevOps Guru works</a>. To
 *  learn about DevOps Guru concepts, see <a
 *  href="https://docs.aws.amazon.com/devops-guru/latest/userguide/concepts.html">Concepts in DevOps Guru</a>.
 */

/*!
 * \brief Constructs a DevOpsGuruClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
DevOpsGuruClient::DevOpsGuruClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DevOpsGuruClientPrivate(this), parent)
{
    Q_D(DevOpsGuruClient);
    d->apiVersion = QStringLiteral("2020-12-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("devops-guru");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon DevOps Guru");
    d->serviceName = QStringLiteral("devops-guru");
}

/*!
 * \overload DevOpsGuruClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
DevOpsGuruClient::DevOpsGuruClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new DevOpsGuruClientPrivate(this), parent)
{
    Q_D(DevOpsGuruClient);
    d->apiVersion = QStringLiteral("2020-12-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("devops-guru");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon DevOps Guru");
    d->serviceName = QStringLiteral("devops-guru");
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * AddNotificationChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Adds a notification channel to DevOps Guru. A notification channel is used to notify you about important DevOps Guru
 * events, such as when an insight is generated.
 *
 * </p
 *
 * If you use an Amazon SNS topic in another account, you must attach a policy to it that grants DevOps Guru permission to
 * it notifications. DevOps Guru adds the required policy on your behalf to send notifications using Amazon SNS in your
 * account. DevOps Guru only supports standard SNS topics. For more information, see <a
 * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-required-permissions.html">Permissions for cross
 * account Amazon SNS
 *
 * topics</a>>
 *
 * If you use an Amazon SNS topic in another account, you must attach a policy to it that grants DevOps Guru permission to
 * it notifications. DevOps Guru adds the required policy on your behalf to send notifications using Amazon SNS in your
 * account. For more information, see Permissions for cross account Amazon SNS
 *
 * topics>
 *
 * If you use an Amazon SNS topic that is encrypted by an Amazon Web Services Key Management Service customer-managed key
 * (CMK), then you must add permissions to the CMK. For more information, see <a
 * href="https://docs.aws.amazon.com/devops-guru/latest/userguide/sns-kms-permissions.html">Permissions for Amazon Web
 * Services KMS–encrypted Amazon SNS
 */
AddNotificationChannelResponse * DevOpsGuruClient::addNotificationChannel(const AddNotificationChannelRequest &request)
{
    return qobject_cast<AddNotificationChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DeleteInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the insight along with the associated anomalies, events and
 */
DeleteInsightResponse * DevOpsGuruClient::deleteInsight(const DeleteInsightRequest &request)
{
    return qobject_cast<DeleteInsightResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeAccountHealthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of open reactive insights, the number of open proactive insights, and the number of metrics analyzed
 * in your Amazon Web Services account. Use these numbers to gauge the health of operations in your Amazon Web Services
 * account.
 */
DescribeAccountHealthResponse * DevOpsGuruClient::describeAccountHealth(const DescribeAccountHealthRequest &request)
{
    return qobject_cast<DescribeAccountHealthResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeAccountOverviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * For the time range passed in, returns the number of open reactive insight that were created, the number of open
 * proactive insights that were created, and the Mean Time to Recover (MTTR) for all closed reactive insights.
 */
DescribeAccountOverviewResponse * DevOpsGuruClient::describeAccountOverview(const DescribeAccountOverviewRequest &request)
{
    return qobject_cast<DescribeAccountOverviewResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeAnomalyResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about an anomaly that you specify using its ID.
 */
DescribeAnomalyResponse * DevOpsGuruClient::describeAnomaly(const DescribeAnomalyRequest &request)
{
    return qobject_cast<DescribeAnomalyResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeEventSourcesConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the integration status of services that are integrated with DevOps Guru as Consumer via EventBridge. The one
 * service that can be integrated with DevOps Guru is Amazon CodeGuru Profiler, which can produce proactive recommendations
 * which can be stored and viewed in DevOps
 */
DescribeEventSourcesConfigResponse * DevOpsGuruClient::describeEventSourcesConfig(const DescribeEventSourcesConfigRequest &request)
{
    return qobject_cast<DescribeEventSourcesConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the most recent feedback submitted in the current Amazon Web Services account and Region.
 */
DescribeFeedbackResponse * DevOpsGuruClient::describeFeedback(const DescribeFeedbackRequest &request)
{
    return qobject_cast<DescribeFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns details about an insight that you specify using its ID.
 */
DescribeInsightResponse * DevOpsGuruClient::describeInsight(const DescribeInsightRequest &request)
{
    return qobject_cast<DescribeInsightResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeOrganizationHealthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns active insights, predictive insights, and resource hours analyzed in last
 */
DescribeOrganizationHealthResponse * DevOpsGuruClient::describeOrganizationHealth(const DescribeOrganizationHealthRequest &request)
{
    return qobject_cast<DescribeOrganizationHealthResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeOrganizationOverviewResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an overview of your organization's history based on the specified time range. The overview includes the total
 * reactive and proactive
 */
DescribeOrganizationOverviewResponse * DevOpsGuruClient::describeOrganizationOverview(const DescribeOrganizationOverviewRequest &request)
{
    return qobject_cast<DescribeOrganizationOverviewResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeOrganizationResourceCollectionHealthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Provides an overview of your system's health. If additional member accounts are part of your organization, you can
 * filter those accounts using the <code>AccountIds</code>
 */
DescribeOrganizationResourceCollectionHealthResponse * DevOpsGuruClient::describeOrganizationResourceCollectionHealth(const DescribeOrganizationResourceCollectionHealthRequest &request)
{
    return qobject_cast<DescribeOrganizationResourceCollectionHealthResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeResourceCollectionHealthResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the number of open proactive insights, open reactive insights, and the Mean Time to Recover (MTTR) for all
 * closed insights in resource collections in your account. You specify the type of Amazon Web Services resources
 * collection. The two types of Amazon Web Services resource collections supported are Amazon Web Services CloudFormation
 * stacks and Amazon Web Services resources that contain the same Amazon Web Services tag. DevOps Guru can be configured to
 * analyze the Amazon Web Services resources that are defined in the stacks or that are tagged using the same tag
 * <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation stacks.
 */
DescribeResourceCollectionHealthResponse * DevOpsGuruClient::describeResourceCollectionHealth(const DescribeResourceCollectionHealthRequest &request)
{
    return qobject_cast<DescribeResourceCollectionHealthResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * DescribeServiceIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the integration status of services that are integrated with DevOps Guru. The one service that can be integrated
 * with DevOps Guru is Amazon Web Services Systems Manager, which can be used to create an OpsItem for each generated
 * insight.
 */
DescribeServiceIntegrationResponse * DevOpsGuruClient::describeServiceIntegration(const DescribeServiceIntegrationRequest &request)
{
    return qobject_cast<DescribeServiceIntegrationResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * GetCostEstimationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns an estimate of the monthly cost for DevOps Guru to analyze your Amazon Web Services resources. For more
 * information, see <a href="https://docs.aws.amazon.com/devops-guru/latest/userguide/cost-estimate.html">Estimate your
 * Amazon DevOps Guru costs</a> and <a href="http://aws.amazon.com/devops-guru/pricing/">Amazon DevOps Guru
 */
GetCostEstimationResponse * DevOpsGuruClient::getCostEstimation(const GetCostEstimationRequest &request)
{
    return qobject_cast<GetCostEstimationResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * GetResourceCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns lists Amazon Web Services resources that are of the specified resource collection type. The two types of Amazon
 * Web Services resource collections supported are Amazon Web Services CloudFormation stacks and Amazon Web Services
 * resources that contain the same Amazon Web Services tag. DevOps Guru can be configured to analyze the Amazon Web
 * Services resources that are defined in the stacks or that are tagged using the same tag <i>key</i>. You can specify up
 * to 500 Amazon Web Services CloudFormation stacks.
 */
GetResourceCollectionResponse * DevOpsGuruClient::getResourceCollection(const GetResourceCollectionRequest &request)
{
    return qobject_cast<GetResourceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * ListAnomaliesForInsightResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the anomalies that belong to an insight that you specify using its ID.
 */
ListAnomaliesForInsightResponse * DevOpsGuruClient::listAnomaliesForInsight(const ListAnomaliesForInsightRequest &request)
{
    return qobject_cast<ListAnomaliesForInsightResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * ListAnomalousLogGroupsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of log groups that contain log anomalies.
 */
ListAnomalousLogGroupsResponse * DevOpsGuruClient::listAnomalousLogGroups(const ListAnomalousLogGroupsRequest &request)
{
    return qobject_cast<ListAnomalousLogGroupsResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * ListEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of the events emitted by the resources that are evaluated by DevOps Guru. You can use filters to specify
 * which events are returned.
 */
ListEventsResponse * DevOpsGuruClient::listEvents(const ListEventsRequest &request)
{
    return qobject_cast<ListEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * ListInsightsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of insights in your Amazon Web Services account. You can specify which insights are returned by their
 * start time and status (<code>ONGOING</code>, <code>CLOSED</code>, or <code>ANY</code>).
 */
ListInsightsResponse * DevOpsGuruClient::listInsights(const ListInsightsRequest &request)
{
    return qobject_cast<ListInsightsResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * ListMonitoredResourcesResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns the list of all log groups that are being monitored and tagged by DevOps Guru.
 */
ListMonitoredResourcesResponse * DevOpsGuruClient::listMonitoredResources(const ListMonitoredResourcesRequest &request)
{
    return qobject_cast<ListMonitoredResourcesResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * ListNotificationChannelsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of notification channels configured for DevOps Guru. Each notification channel is used to notify you when
 * DevOps Guru generates an insight that contains information about how to improve your operations. The one supported
 * notification channel is Amazon Simple Notification Service (Amazon SNS).
 */
ListNotificationChannelsResponse * DevOpsGuruClient::listNotificationChannels(const ListNotificationChannelsRequest &request)
{
    return qobject_cast<ListNotificationChannelsResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * ListOrganizationInsightsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of insights associated with the account or OU
 */
ListOrganizationInsightsResponse * DevOpsGuruClient::listOrganizationInsights(const ListOrganizationInsightsRequest &request)
{
    return qobject_cast<ListOrganizationInsightsResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * ListRecommendationsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of a specified insight's recommendations. Each recommendation includes a list of related metrics and a
 * list of related events.
 */
ListRecommendationsResponse * DevOpsGuruClient::listRecommendations(const ListRecommendationsRequest &request)
{
    return qobject_cast<ListRecommendationsResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * PutFeedbackResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Collects customer feedback about the specified insight.
 */
PutFeedbackResponse * DevOpsGuruClient::putFeedback(const PutFeedbackRequest &request)
{
    return qobject_cast<PutFeedbackResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * RemoveNotificationChannelResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Removes a notification channel from DevOps Guru. A notification channel is used to notify you when DevOps Guru generates
 * an insight that contains information about how to improve your operations.
 */
RemoveNotificationChannelResponse * DevOpsGuruClient::removeNotificationChannel(const RemoveNotificationChannelRequest &request)
{
    return qobject_cast<RemoveNotificationChannelResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * SearchInsightsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of insights in your Amazon Web Services account. You can specify which insights are returned by their
 * start time, one or more statuses (<code>ONGOING</code>, <code>CLOSED</code>, and <code>CLOSED</code>), one or more
 * severities (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>), and type (<code>REACTIVE</code> or
 * <code>PROACTIVE</code>).
 *
 * </p
 *
 * Use the <code>Filters</code> parameter to specify status and severity search parameters. Use the <code>Type</code>
 * parameter to specify <code>REACTIVE</code> or <code>PROACTIVE</code> in your search.
 */
SearchInsightsResponse * DevOpsGuruClient::searchInsights(const SearchInsightsRequest &request)
{
    return qobject_cast<SearchInsightsResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * SearchOrganizationInsightsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Returns a list of insights in your organization. You can specify which insights are returned by their start time, one or
 * more statuses (<code>ONGOING</code>, <code>CLOSED</code>, and <code>CLOSED</code>), one or more severities
 * (<code>LOW</code>, <code>MEDIUM</code>, and <code>HIGH</code>), and type (<code>REACTIVE</code> or
 * <code>PROACTIVE</code>).
 *
 * </p
 *
 * Use the <code>Filters</code> parameter to specify status and severity search parameters. Use the <code>Type</code>
 * parameter to specify <code>REACTIVE</code> or <code>PROACTIVE</code> in your search.
 */
SearchOrganizationInsightsResponse * DevOpsGuruClient::searchOrganizationInsights(const SearchOrganizationInsightsRequest &request)
{
    return qobject_cast<SearchOrganizationInsightsResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * StartCostEstimationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts the creation of an estimate of the monthly cost to analyze your Amazon Web Services
 */
StartCostEstimationResponse * DevOpsGuruClient::startCostEstimation(const StartCostEstimationRequest &request)
{
    return qobject_cast<StartCostEstimationResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * UpdateEventSourcesConfigResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables or disables integration with a service that can be integrated with DevOps Guru. The one service that can be
 * integrated with DevOps Guru is Amazon CodeGuru Profiler, which can produce proactive recommendations which can be stored
 * and viewed in DevOps
 */
UpdateEventSourcesConfigResponse * DevOpsGuruClient::updateEventSourcesConfig(const UpdateEventSourcesConfigRequest &request)
{
    return qobject_cast<UpdateEventSourcesConfigResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * UpdateResourceCollectionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Updates the collection of resources that DevOps Guru analyzes. The two types of Amazon Web Services resource collections
 * supported are Amazon Web Services CloudFormation stacks and Amazon Web Services resources that contain the same Amazon
 * Web Services tag. DevOps Guru can be configured to analyze the Amazon Web Services resources that are defined in the
 * stacks or that are tagged using the same tag <i>key</i>. You can specify up to 500 Amazon Web Services CloudFormation
 * stacks. This method also creates the IAM role required for you to use DevOps Guru.
 */
UpdateResourceCollectionResponse * DevOpsGuruClient::updateResourceCollection(const UpdateResourceCollectionRequest &request)
{
    return qobject_cast<UpdateResourceCollectionResponse *>(send(request));
}

/*!
 * Sends \a request to the DevOpsGuruClient service, and returns a pointer to an
 * UpdateServiceIntegrationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Enables or disables integration with a service that can be integrated with DevOps Guru. The one service that can be
 * integrated with DevOps Guru is Amazon Web Services Systems Manager, which can be used to create an OpsItem for each
 * generated insight.
 */
UpdateServiceIntegrationResponse * DevOpsGuruClient::updateServiceIntegration(const UpdateServiceIntegrationRequest &request)
{
    return qobject_cast<UpdateServiceIntegrationResponse *>(send(request));
}

/*!
 * \class QtAws::DevOpsGuru::DevOpsGuruClientPrivate
 * \brief The DevOpsGuruClientPrivate class provides private implementation for DevOpsGuruClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsDevOpsGuru
 */

/*!
 * Constructs a DevOpsGuruClientPrivate object with public implementation \a q.
 */
DevOpsGuruClientPrivate::DevOpsGuruClientPrivate(DevOpsGuruClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace DevOpsGuru
} // namespace QtAws
