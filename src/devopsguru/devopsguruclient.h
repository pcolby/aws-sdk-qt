// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEVOPSGURUCLIENT_H
#define QTAWS_DEVOPSGURUCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdevopsguruglobal.h"

class QNetworkReply;

namespace QtAws {
namespace DevOpsGuru {

class DevOpsGuruClientPrivate;
class AddNotificationChannelRequest;
class AddNotificationChannelResponse;
class DeleteInsightRequest;
class DeleteInsightResponse;
class DescribeAccountHealthRequest;
class DescribeAccountHealthResponse;
class DescribeAccountOverviewRequest;
class DescribeAccountOverviewResponse;
class DescribeAnomalyRequest;
class DescribeAnomalyResponse;
class DescribeEventSourcesConfigRequest;
class DescribeEventSourcesConfigResponse;
class DescribeFeedbackRequest;
class DescribeFeedbackResponse;
class DescribeInsightRequest;
class DescribeInsightResponse;
class DescribeOrganizationHealthRequest;
class DescribeOrganizationHealthResponse;
class DescribeOrganizationOverviewRequest;
class DescribeOrganizationOverviewResponse;
class DescribeOrganizationResourceCollectionHealthRequest;
class DescribeOrganizationResourceCollectionHealthResponse;
class DescribeResourceCollectionHealthRequest;
class DescribeResourceCollectionHealthResponse;
class DescribeServiceIntegrationRequest;
class DescribeServiceIntegrationResponse;
class GetCostEstimationRequest;
class GetCostEstimationResponse;
class GetResourceCollectionRequest;
class GetResourceCollectionResponse;
class ListAnomaliesForInsightRequest;
class ListAnomaliesForInsightResponse;
class ListAnomalousLogGroupsRequest;
class ListAnomalousLogGroupsResponse;
class ListEventsRequest;
class ListEventsResponse;
class ListInsightsRequest;
class ListInsightsResponse;
class ListMonitoredResourcesRequest;
class ListMonitoredResourcesResponse;
class ListNotificationChannelsRequest;
class ListNotificationChannelsResponse;
class ListOrganizationInsightsRequest;
class ListOrganizationInsightsResponse;
class ListRecommendationsRequest;
class ListRecommendationsResponse;
class PutFeedbackRequest;
class PutFeedbackResponse;
class RemoveNotificationChannelRequest;
class RemoveNotificationChannelResponse;
class SearchInsightsRequest;
class SearchInsightsResponse;
class SearchOrganizationInsightsRequest;
class SearchOrganizationInsightsResponse;
class StartCostEstimationRequest;
class StartCostEstimationResponse;
class UpdateEventSourcesConfigRequest;
class UpdateEventSourcesConfigResponse;
class UpdateResourceCollectionRequest;
class UpdateResourceCollectionResponse;
class UpdateServiceIntegrationRequest;
class UpdateServiceIntegrationResponse;

class QTAWSDEVOPSGURU_EXPORT DevOpsGuruClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DevOpsGuruClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit DevOpsGuruClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddNotificationChannelResponse * addNotificationChannel(const AddNotificationChannelRequest &request);
    DeleteInsightResponse * deleteInsight(const DeleteInsightRequest &request);
    DescribeAccountHealthResponse * describeAccountHealth(const DescribeAccountHealthRequest &request);
    DescribeAccountOverviewResponse * describeAccountOverview(const DescribeAccountOverviewRequest &request);
    DescribeAnomalyResponse * describeAnomaly(const DescribeAnomalyRequest &request);
    DescribeEventSourcesConfigResponse * describeEventSourcesConfig(const DescribeEventSourcesConfigRequest &request);
    DescribeFeedbackResponse * describeFeedback(const DescribeFeedbackRequest &request);
    DescribeInsightResponse * describeInsight(const DescribeInsightRequest &request);
    DescribeOrganizationHealthResponse * describeOrganizationHealth(const DescribeOrganizationHealthRequest &request);
    DescribeOrganizationOverviewResponse * describeOrganizationOverview(const DescribeOrganizationOverviewRequest &request);
    DescribeOrganizationResourceCollectionHealthResponse * describeOrganizationResourceCollectionHealth(const DescribeOrganizationResourceCollectionHealthRequest &request);
    DescribeResourceCollectionHealthResponse * describeResourceCollectionHealth(const DescribeResourceCollectionHealthRequest &request);
    DescribeServiceIntegrationResponse * describeServiceIntegration(const DescribeServiceIntegrationRequest &request);
    GetCostEstimationResponse * getCostEstimation(const GetCostEstimationRequest &request);
    GetResourceCollectionResponse * getResourceCollection(const GetResourceCollectionRequest &request);
    ListAnomaliesForInsightResponse * listAnomaliesForInsight(const ListAnomaliesForInsightRequest &request);
    ListAnomalousLogGroupsResponse * listAnomalousLogGroups(const ListAnomalousLogGroupsRequest &request);
    ListEventsResponse * listEvents(const ListEventsRequest &request);
    ListInsightsResponse * listInsights(const ListInsightsRequest &request);
    ListMonitoredResourcesResponse * listMonitoredResources(const ListMonitoredResourcesRequest &request);
    ListNotificationChannelsResponse * listNotificationChannels(const ListNotificationChannelsRequest &request);
    ListOrganizationInsightsResponse * listOrganizationInsights(const ListOrganizationInsightsRequest &request);
    ListRecommendationsResponse * listRecommendations(const ListRecommendationsRequest &request);
    PutFeedbackResponse * putFeedback(const PutFeedbackRequest &request);
    RemoveNotificationChannelResponse * removeNotificationChannel(const RemoveNotificationChannelRequest &request);
    SearchInsightsResponse * searchInsights(const SearchInsightsRequest &request);
    SearchOrganizationInsightsResponse * searchOrganizationInsights(const SearchOrganizationInsightsRequest &request);
    StartCostEstimationResponse * startCostEstimation(const StartCostEstimationRequest &request);
    UpdateEventSourcesConfigResponse * updateEventSourcesConfig(const UpdateEventSourcesConfigRequest &request);
    UpdateResourceCollectionResponse * updateResourceCollection(const UpdateResourceCollectionRequest &request);
    UpdateServiceIntegrationResponse * updateServiceIntegration(const UpdateServiceIntegrationRequest &request);

private:
    Q_DECLARE_PRIVATE(DevOpsGuruClient)
    Q_DISABLE_COPY(DevOpsGuruClient)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
