// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBSTRATEGYCLIENT_H
#define QTAWS_MIGRATIONHUBSTRATEGYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmigrationhubstrategyglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MigrationHubStrategy {

class MigrationHubStrategyClientPrivate;
class GetApplicationComponentDetailsRequest;
class GetApplicationComponentDetailsResponse;
class GetApplicationComponentStrategiesRequest;
class GetApplicationComponentStrategiesResponse;
class GetAssessmentRequest;
class GetAssessmentResponse;
class GetImportFileTaskRequest;
class GetImportFileTaskResponse;
class GetPortfolioPreferencesRequest;
class GetPortfolioPreferencesResponse;
class GetPortfolioSummaryRequest;
class GetPortfolioSummaryResponse;
class GetRecommendationReportDetailsRequest;
class GetRecommendationReportDetailsResponse;
class GetServerDetailsRequest;
class GetServerDetailsResponse;
class GetServerStrategiesRequest;
class GetServerStrategiesResponse;
class ListApplicationComponentsRequest;
class ListApplicationComponentsResponse;
class ListCollectorsRequest;
class ListCollectorsResponse;
class ListImportFileTaskRequest;
class ListImportFileTaskResponse;
class ListServersRequest;
class ListServersResponse;
class PutPortfolioPreferencesRequest;
class PutPortfolioPreferencesResponse;
class StartAssessmentRequest;
class StartAssessmentResponse;
class StartImportFileTaskRequest;
class StartImportFileTaskResponse;
class StartRecommendationReportGenerationRequest;
class StartRecommendationReportGenerationResponse;
class StopAssessmentRequest;
class StopAssessmentResponse;
class UpdateApplicationComponentConfigRequest;
class UpdateApplicationComponentConfigResponse;
class UpdateServerConfigRequest;
class UpdateServerConfigResponse;

class QTAWSMIGRATIONHUBSTRATEGY_EXPORT MigrationHubStrategyClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MigrationHubStrategyClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MigrationHubStrategyClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    GetApplicationComponentDetailsResponse * getApplicationComponentDetails(const GetApplicationComponentDetailsRequest &request);
    GetApplicationComponentStrategiesResponse * getApplicationComponentStrategies(const GetApplicationComponentStrategiesRequest &request);
    GetAssessmentResponse * getAssessment(const GetAssessmentRequest &request);
    GetImportFileTaskResponse * getImportFileTask(const GetImportFileTaskRequest &request);
    GetPortfolioPreferencesResponse * getPortfolioPreferences(const GetPortfolioPreferencesRequest &request);
    GetPortfolioSummaryResponse * getPortfolioSummary(const GetPortfolioSummaryRequest &request);
    GetRecommendationReportDetailsResponse * getRecommendationReportDetails(const GetRecommendationReportDetailsRequest &request);
    GetServerDetailsResponse * getServerDetails(const GetServerDetailsRequest &request);
    GetServerStrategiesResponse * getServerStrategies(const GetServerStrategiesRequest &request);
    ListApplicationComponentsResponse * listApplicationComponents(const ListApplicationComponentsRequest &request);
    ListCollectorsResponse * listCollectors(const ListCollectorsRequest &request);
    ListImportFileTaskResponse * listImportFileTask(const ListImportFileTaskRequest &request);
    ListServersResponse * listServers(const ListServersRequest &request);
    PutPortfolioPreferencesResponse * putPortfolioPreferences(const PutPortfolioPreferencesRequest &request);
    StartAssessmentResponse * startAssessment(const StartAssessmentRequest &request);
    StartImportFileTaskResponse * startImportFileTask(const StartImportFileTaskRequest &request);
    StartRecommendationReportGenerationResponse * startRecommendationReportGeneration(const StartRecommendationReportGenerationRequest &request);
    StopAssessmentResponse * stopAssessment(const StopAssessmentRequest &request);
    UpdateApplicationComponentConfigResponse * updateApplicationComponentConfig(const UpdateApplicationComponentConfigRequest &request);
    UpdateServerConfigResponse * updateServerConfig(const UpdateServerConfigRequest &request);

private:
    Q_DECLARE_PRIVATE(MigrationHubStrategyClient)
    Q_DISABLE_COPY(MigrationHubStrategyClient)

};

} // namespace MigrationHubStrategy
} // namespace QtAws

#endif
