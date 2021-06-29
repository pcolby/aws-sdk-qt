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
class DescribeAccountHealthRequest;
class DescribeAccountHealthResponse;
class DescribeAccountOverviewRequest;
class DescribeAccountOverviewResponse;
class DescribeAnomalyRequest;
class DescribeAnomalyResponse;
class DescribeFeedbackRequest;
class DescribeFeedbackResponse;
class DescribeInsightRequest;
class DescribeInsightResponse;
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
class ListEventsRequest;
class ListEventsResponse;
class ListInsightsRequest;
class ListInsightsResponse;
class ListNotificationChannelsRequest;
class ListNotificationChannelsResponse;
class ListRecommendationsRequest;
class ListRecommendationsResponse;
class PutFeedbackRequest;
class PutFeedbackResponse;
class RemoveNotificationChannelRequest;
class RemoveNotificationChannelResponse;
class SearchInsightsRequest;
class SearchInsightsResponse;
class StartCostEstimationRequest;
class StartCostEstimationResponse;
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
    DescribeAccountHealthResponse * describeAccountHealth(const DescribeAccountHealthRequest &request);
    DescribeAccountOverviewResponse * describeAccountOverview(const DescribeAccountOverviewRequest &request);
    DescribeAnomalyResponse * describeAnomaly(const DescribeAnomalyRequest &request);
    DescribeFeedbackResponse * describeFeedback(const DescribeFeedbackRequest &request);
    DescribeInsightResponse * describeInsight(const DescribeInsightRequest &request);
    DescribeResourceCollectionHealthResponse * describeResourceCollectionHealth(const DescribeResourceCollectionHealthRequest &request);
    DescribeServiceIntegrationResponse * describeServiceIntegration(const DescribeServiceIntegrationRequest &request);
    GetCostEstimationResponse * getCostEstimation(const GetCostEstimationRequest &request);
    GetResourceCollectionResponse * getResourceCollection(const GetResourceCollectionRequest &request);
    ListAnomaliesForInsightResponse * listAnomaliesForInsight(const ListAnomaliesForInsightRequest &request);
    ListEventsResponse * listEvents(const ListEventsRequest &request);
    ListInsightsResponse * listInsights(const ListInsightsRequest &request);
    ListNotificationChannelsResponse * listNotificationChannels(const ListNotificationChannelsRequest &request);
    ListRecommendationsResponse * listRecommendations(const ListRecommendationsRequest &request);
    PutFeedbackResponse * putFeedback(const PutFeedbackRequest &request);
    RemoveNotificationChannelResponse * removeNotificationChannel(const RemoveNotificationChannelRequest &request);
    SearchInsightsResponse * searchInsights(const SearchInsightsRequest &request);
    StartCostEstimationResponse * startCostEstimation(const StartCostEstimationRequest &request);
    UpdateResourceCollectionResponse * updateResourceCollection(const UpdateResourceCollectionRequest &request);
    UpdateServiceIntegrationResponse * updateServiceIntegration(const UpdateServiceIntegrationRequest &request);

protected:
    /// @cond internal
    DevOpsGuruClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit DevOpsGuruClient(DevOpsGuruClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(DevOpsGuruClient)
    Q_DISABLE_COPY(DevOpsGuruClient)

};

} // namespace DevOpsGuru
} // namespace QtAws

#endif
