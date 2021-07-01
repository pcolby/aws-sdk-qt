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

#ifndef QTAWS_COSTEXPLORERCLIENT_H
#define QTAWS_COSTEXPLORERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscostexplorerglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CostExplorer {

class CostExplorerClientPrivate;
class CreateAnomalyMonitorRequest;
class CreateAnomalyMonitorResponse;
class CreateAnomalySubscriptionRequest;
class CreateAnomalySubscriptionResponse;
class CreateCostCategoryDefinitionRequest;
class CreateCostCategoryDefinitionResponse;
class DeleteAnomalyMonitorRequest;
class DeleteAnomalyMonitorResponse;
class DeleteAnomalySubscriptionRequest;
class DeleteAnomalySubscriptionResponse;
class DeleteCostCategoryDefinitionRequest;
class DeleteCostCategoryDefinitionResponse;
class DescribeCostCategoryDefinitionRequest;
class DescribeCostCategoryDefinitionResponse;
class GetAnomaliesRequest;
class GetAnomaliesResponse;
class GetAnomalyMonitorsRequest;
class GetAnomalyMonitorsResponse;
class GetAnomalySubscriptionsRequest;
class GetAnomalySubscriptionsResponse;
class GetCostAndUsageRequest;
class GetCostAndUsageResponse;
class GetCostAndUsageWithResourcesRequest;
class GetCostAndUsageWithResourcesResponse;
class GetCostCategoriesRequest;
class GetCostCategoriesResponse;
class GetCostForecastRequest;
class GetCostForecastResponse;
class GetDimensionValuesRequest;
class GetDimensionValuesResponse;
class GetReservationCoverageRequest;
class GetReservationCoverageResponse;
class GetReservationPurchaseRecommendationRequest;
class GetReservationPurchaseRecommendationResponse;
class GetReservationUtilizationRequest;
class GetReservationUtilizationResponse;
class GetRightsizingRecommendationRequest;
class GetRightsizingRecommendationResponse;
class GetSavingsPlansCoverageRequest;
class GetSavingsPlansCoverageResponse;
class GetSavingsPlansPurchaseRecommendationRequest;
class GetSavingsPlansPurchaseRecommendationResponse;
class GetSavingsPlansUtilizationRequest;
class GetSavingsPlansUtilizationResponse;
class GetSavingsPlansUtilizationDetailsRequest;
class GetSavingsPlansUtilizationDetailsResponse;
class GetTagsRequest;
class GetTagsResponse;
class GetUsageForecastRequest;
class GetUsageForecastResponse;
class ListCostCategoryDefinitionsRequest;
class ListCostCategoryDefinitionsResponse;
class ProvideAnomalyFeedbackRequest;
class ProvideAnomalyFeedbackResponse;
class UpdateAnomalyMonitorRequest;
class UpdateAnomalyMonitorResponse;
class UpdateAnomalySubscriptionRequest;
class UpdateAnomalySubscriptionResponse;
class UpdateCostCategoryDefinitionRequest;
class UpdateCostCategoryDefinitionResponse;

class QTAWSCOSTEXPLORER_EXPORT CostExplorerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CostExplorerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CostExplorerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAnomalyMonitorResponse * createAnomalyMonitor(const CreateAnomalyMonitorRequest &request);
    CreateAnomalySubscriptionResponse * createAnomalySubscription(const CreateAnomalySubscriptionRequest &request);
    CreateCostCategoryDefinitionResponse * createCostCategoryDefinition(const CreateCostCategoryDefinitionRequest &request);
    DeleteAnomalyMonitorResponse * deleteAnomalyMonitor(const DeleteAnomalyMonitorRequest &request);
    DeleteAnomalySubscriptionResponse * deleteAnomalySubscription(const DeleteAnomalySubscriptionRequest &request);
    DeleteCostCategoryDefinitionResponse * deleteCostCategoryDefinition(const DeleteCostCategoryDefinitionRequest &request);
    DescribeCostCategoryDefinitionResponse * describeCostCategoryDefinition(const DescribeCostCategoryDefinitionRequest &request);
    GetAnomaliesResponse * getAnomalies(const GetAnomaliesRequest &request);
    GetAnomalyMonitorsResponse * getAnomalyMonitors(const GetAnomalyMonitorsRequest &request);
    GetAnomalySubscriptionsResponse * getAnomalySubscriptions(const GetAnomalySubscriptionsRequest &request);
    GetCostAndUsageResponse * getCostAndUsage(const GetCostAndUsageRequest &request);
    GetCostAndUsageWithResourcesResponse * getCostAndUsageWithResources(const GetCostAndUsageWithResourcesRequest &request);
    GetCostCategoriesResponse * getCostCategories(const GetCostCategoriesRequest &request);
    GetCostForecastResponse * getCostForecast(const GetCostForecastRequest &request);
    GetDimensionValuesResponse * getDimensionValues(const GetDimensionValuesRequest &request);
    GetReservationCoverageResponse * getReservationCoverage(const GetReservationCoverageRequest &request);
    GetReservationPurchaseRecommendationResponse * getReservationPurchaseRecommendation(const GetReservationPurchaseRecommendationRequest &request);
    GetReservationUtilizationResponse * getReservationUtilization(const GetReservationUtilizationRequest &request);
    GetRightsizingRecommendationResponse * getRightsizingRecommendation(const GetRightsizingRecommendationRequest &request);
    GetSavingsPlansCoverageResponse * getSavingsPlansCoverage(const GetSavingsPlansCoverageRequest &request);
    GetSavingsPlansPurchaseRecommendationResponse * getSavingsPlansPurchaseRecommendation(const GetSavingsPlansPurchaseRecommendationRequest &request);
    GetSavingsPlansUtilizationResponse * getSavingsPlansUtilization(const GetSavingsPlansUtilizationRequest &request);
    GetSavingsPlansUtilizationDetailsResponse * getSavingsPlansUtilizationDetails(const GetSavingsPlansUtilizationDetailsRequest &request);
    GetTagsResponse * getTags(const GetTagsRequest &request);
    GetUsageForecastResponse * getUsageForecast(const GetUsageForecastRequest &request);
    ListCostCategoryDefinitionsResponse * listCostCategoryDefinitions(const ListCostCategoryDefinitionsRequest &request);
    ProvideAnomalyFeedbackResponse * provideAnomalyFeedback(const ProvideAnomalyFeedbackRequest &request);
    UpdateAnomalyMonitorResponse * updateAnomalyMonitor(const UpdateAnomalyMonitorRequest &request);
    UpdateAnomalySubscriptionResponse * updateAnomalySubscription(const UpdateAnomalySubscriptionRequest &request);
    UpdateCostCategoryDefinitionResponse * updateCostCategoryDefinition(const UpdateCostCategoryDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(CostExplorerClient)
    Q_DISABLE_COPY(CostExplorerClient)

};

} // namespace CostExplorer
} // namespace QtAws

#endif
