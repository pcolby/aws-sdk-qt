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

#ifndef QTAWS_PERSONALIZECLIENT_H
#define QTAWS_PERSONALIZECLIENT_H

#include "core/awsabstractclient.h"

#include "qtawspersonalizeglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Personalize {

class PersonalizeClientPrivate;
class CreateBatchInferenceJobRequest;
class CreateBatchInferenceJobResponse;
class CreateCampaignRequest;
class CreateCampaignResponse;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateDatasetExportJobRequest;
class CreateDatasetExportJobResponse;
class CreateDatasetGroupRequest;
class CreateDatasetGroupResponse;
class CreateDatasetImportJobRequest;
class CreateDatasetImportJobResponse;
class CreateEventTrackerRequest;
class CreateEventTrackerResponse;
class CreateFilterRequest;
class CreateFilterResponse;
class CreateSchemaRequest;
class CreateSchemaResponse;
class CreateSolutionRequest;
class CreateSolutionResponse;
class CreateSolutionVersionRequest;
class CreateSolutionVersionResponse;
class DeleteCampaignRequest;
class DeleteCampaignResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteDatasetGroupRequest;
class DeleteDatasetGroupResponse;
class DeleteEventTrackerRequest;
class DeleteEventTrackerResponse;
class DeleteFilterRequest;
class DeleteFilterResponse;
class DeleteSchemaRequest;
class DeleteSchemaResponse;
class DeleteSolutionRequest;
class DeleteSolutionResponse;
class DescribeAlgorithmRequest;
class DescribeAlgorithmResponse;
class DescribeBatchInferenceJobRequest;
class DescribeBatchInferenceJobResponse;
class DescribeCampaignRequest;
class DescribeCampaignResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeDatasetExportJobRequest;
class DescribeDatasetExportJobResponse;
class DescribeDatasetGroupRequest;
class DescribeDatasetGroupResponse;
class DescribeDatasetImportJobRequest;
class DescribeDatasetImportJobResponse;
class DescribeEventTrackerRequest;
class DescribeEventTrackerResponse;
class DescribeFeatureTransformationRequest;
class DescribeFeatureTransformationResponse;
class DescribeFilterRequest;
class DescribeFilterResponse;
class DescribeRecipeRequest;
class DescribeRecipeResponse;
class DescribeSchemaRequest;
class DescribeSchemaResponse;
class DescribeSolutionRequest;
class DescribeSolutionResponse;
class DescribeSolutionVersionRequest;
class DescribeSolutionVersionResponse;
class GetSolutionMetricsRequest;
class GetSolutionMetricsResponse;
class ListBatchInferenceJobsRequest;
class ListBatchInferenceJobsResponse;
class ListCampaignsRequest;
class ListCampaignsResponse;
class ListDatasetExportJobsRequest;
class ListDatasetExportJobsResponse;
class ListDatasetGroupsRequest;
class ListDatasetGroupsResponse;
class ListDatasetImportJobsRequest;
class ListDatasetImportJobsResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListEventTrackersRequest;
class ListEventTrackersResponse;
class ListFiltersRequest;
class ListFiltersResponse;
class ListRecipesRequest;
class ListRecipesResponse;
class ListSchemasRequest;
class ListSchemasResponse;
class ListSolutionVersionsRequest;
class ListSolutionVersionsResponse;
class ListSolutionsRequest;
class ListSolutionsResponse;
class StopSolutionVersionCreationRequest;
class StopSolutionVersionCreationResponse;
class UpdateCampaignRequest;
class UpdateCampaignResponse;

class QTAWSPERSONALIZE_EXPORT PersonalizeClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    PersonalizeClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit PersonalizeClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateBatchInferenceJobResponse * createBatchInferenceJob(const CreateBatchInferenceJobRequest &request);
    CreateCampaignResponse * createCampaign(const CreateCampaignRequest &request);
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateDatasetExportJobResponse * createDatasetExportJob(const CreateDatasetExportJobRequest &request);
    CreateDatasetGroupResponse * createDatasetGroup(const CreateDatasetGroupRequest &request);
    CreateDatasetImportJobResponse * createDatasetImportJob(const CreateDatasetImportJobRequest &request);
    CreateEventTrackerResponse * createEventTracker(const CreateEventTrackerRequest &request);
    CreateFilterResponse * createFilter(const CreateFilterRequest &request);
    CreateSchemaResponse * createSchema(const CreateSchemaRequest &request);
    CreateSolutionResponse * createSolution(const CreateSolutionRequest &request);
    CreateSolutionVersionResponse * createSolutionVersion(const CreateSolutionVersionRequest &request);
    DeleteCampaignResponse * deleteCampaign(const DeleteCampaignRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteDatasetGroupResponse * deleteDatasetGroup(const DeleteDatasetGroupRequest &request);
    DeleteEventTrackerResponse * deleteEventTracker(const DeleteEventTrackerRequest &request);
    DeleteFilterResponse * deleteFilter(const DeleteFilterRequest &request);
    DeleteSchemaResponse * deleteSchema(const DeleteSchemaRequest &request);
    DeleteSolutionResponse * deleteSolution(const DeleteSolutionRequest &request);
    DescribeAlgorithmResponse * describeAlgorithm(const DescribeAlgorithmRequest &request);
    DescribeBatchInferenceJobResponse * describeBatchInferenceJob(const DescribeBatchInferenceJobRequest &request);
    DescribeCampaignResponse * describeCampaign(const DescribeCampaignRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeDatasetExportJobResponse * describeDatasetExportJob(const DescribeDatasetExportJobRequest &request);
    DescribeDatasetGroupResponse * describeDatasetGroup(const DescribeDatasetGroupRequest &request);
    DescribeDatasetImportJobResponse * describeDatasetImportJob(const DescribeDatasetImportJobRequest &request);
    DescribeEventTrackerResponse * describeEventTracker(const DescribeEventTrackerRequest &request);
    DescribeFeatureTransformationResponse * describeFeatureTransformation(const DescribeFeatureTransformationRequest &request);
    DescribeFilterResponse * describeFilter(const DescribeFilterRequest &request);
    DescribeRecipeResponse * describeRecipe(const DescribeRecipeRequest &request);
    DescribeSchemaResponse * describeSchema(const DescribeSchemaRequest &request);
    DescribeSolutionResponse * describeSolution(const DescribeSolutionRequest &request);
    DescribeSolutionVersionResponse * describeSolutionVersion(const DescribeSolutionVersionRequest &request);
    GetSolutionMetricsResponse * getSolutionMetrics(const GetSolutionMetricsRequest &request);
    ListBatchInferenceJobsResponse * listBatchInferenceJobs(const ListBatchInferenceJobsRequest &request);
    ListCampaignsResponse * listCampaigns(const ListCampaignsRequest &request);
    ListDatasetExportJobsResponse * listDatasetExportJobs(const ListDatasetExportJobsRequest &request);
    ListDatasetGroupsResponse * listDatasetGroups(const ListDatasetGroupsRequest &request);
    ListDatasetImportJobsResponse * listDatasetImportJobs(const ListDatasetImportJobsRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListEventTrackersResponse * listEventTrackers(const ListEventTrackersRequest &request);
    ListFiltersResponse * listFilters(const ListFiltersRequest &request);
    ListRecipesResponse * listRecipes(const ListRecipesRequest &request);
    ListSchemasResponse * listSchemas(const ListSchemasRequest &request);
    ListSolutionVersionsResponse * listSolutionVersions(const ListSolutionVersionsRequest &request);
    ListSolutionsResponse * listSolutions(const ListSolutionsRequest &request);
    StopSolutionVersionCreationResponse * stopSolutionVersionCreation(const StopSolutionVersionCreationRequest &request);
    UpdateCampaignResponse * updateCampaign(const UpdateCampaignRequest &request);

private:
    Q_DECLARE_PRIVATE(PersonalizeClient)
    Q_DISABLE_COPY(PersonalizeClient)

};

} // namespace Personalize
} // namespace QtAws

#endif
