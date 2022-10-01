// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABREWCLIENT_H
#define QTAWS_DATABREWCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsdatabrewglobal.h"

class QNetworkReply;

namespace QtAws {
namespace DataBrew {

class DataBrewClientPrivate;
class BatchDeleteRecipeVersionRequest;
class BatchDeleteRecipeVersionResponse;
class CreateDatasetRequest;
class CreateDatasetResponse;
class CreateProfileJobRequest;
class CreateProfileJobResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class CreateRecipeRequest;
class CreateRecipeResponse;
class CreateRecipeJobRequest;
class CreateRecipeJobResponse;
class CreateRulesetRequest;
class CreateRulesetResponse;
class CreateScheduleRequest;
class CreateScheduleResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DeleteJobRequest;
class DeleteJobResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteRecipeVersionRequest;
class DeleteRecipeVersionResponse;
class DeleteRulesetRequest;
class DeleteRulesetResponse;
class DeleteScheduleRequest;
class DeleteScheduleResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeJobRequest;
class DescribeJobResponse;
class DescribeJobRunRequest;
class DescribeJobRunResponse;
class DescribeProjectRequest;
class DescribeProjectResponse;
class DescribeRecipeRequest;
class DescribeRecipeResponse;
class DescribeRulesetRequest;
class DescribeRulesetResponse;
class DescribeScheduleRequest;
class DescribeScheduleResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListJobRunsRequest;
class ListJobRunsResponse;
class ListJobsRequest;
class ListJobsResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListRecipeVersionsRequest;
class ListRecipeVersionsResponse;
class ListRecipesRequest;
class ListRecipesResponse;
class ListRulesetsRequest;
class ListRulesetsResponse;
class ListSchedulesRequest;
class ListSchedulesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PublishRecipeRequest;
class PublishRecipeResponse;
class SendProjectSessionActionRequest;
class SendProjectSessionActionResponse;
class StartJobRunRequest;
class StartJobRunResponse;
class StartProjectSessionRequest;
class StartProjectSessionResponse;
class StopJobRunRequest;
class StopJobRunResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDatasetRequest;
class UpdateDatasetResponse;
class UpdateProfileJobRequest;
class UpdateProfileJobResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;
class UpdateRecipeRequest;
class UpdateRecipeResponse;
class UpdateRecipeJobRequest;
class UpdateRecipeJobResponse;
class UpdateRulesetRequest;
class UpdateRulesetResponse;
class UpdateScheduleRequest;
class UpdateScheduleResponse;

class QTAWSDATABREW_EXPORT DataBrewClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DataBrewClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit DataBrewClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDeleteRecipeVersionResponse * batchDeleteRecipeVersion(const BatchDeleteRecipeVersionRequest &request);
    CreateDatasetResponse * createDataset(const CreateDatasetRequest &request);
    CreateProfileJobResponse * createProfileJob(const CreateProfileJobRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateRecipeResponse * createRecipe(const CreateRecipeRequest &request);
    CreateRecipeJobResponse * createRecipeJob(const CreateRecipeJobRequest &request);
    CreateRulesetResponse * createRuleset(const CreateRulesetRequest &request);
    CreateScheduleResponse * createSchedule(const CreateScheduleRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteRecipeVersionResponse * deleteRecipeVersion(const DeleteRecipeVersionRequest &request);
    DeleteRulesetResponse * deleteRuleset(const DeleteRulesetRequest &request);
    DeleteScheduleResponse * deleteSchedule(const DeleteScheduleRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeJobResponse * describeJob(const DescribeJobRequest &request);
    DescribeJobRunResponse * describeJobRun(const DescribeJobRunRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    DescribeRecipeResponse * describeRecipe(const DescribeRecipeRequest &request);
    DescribeRulesetResponse * describeRuleset(const DescribeRulesetRequest &request);
    DescribeScheduleResponse * describeSchedule(const DescribeScheduleRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListJobRunsResponse * listJobRuns(const ListJobRunsRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListRecipeVersionsResponse * listRecipeVersions(const ListRecipeVersionsRequest &request);
    ListRecipesResponse * listRecipes(const ListRecipesRequest &request);
    ListRulesetsResponse * listRulesets(const ListRulesetsRequest &request);
    ListSchedulesResponse * listSchedules(const ListSchedulesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PublishRecipeResponse * publishRecipe(const PublishRecipeRequest &request);
    SendProjectSessionActionResponse * sendProjectSessionAction(const SendProjectSessionActionRequest &request);
    StartJobRunResponse * startJobRun(const StartJobRunRequest &request);
    StartProjectSessionResponse * startProjectSession(const StartProjectSessionRequest &request);
    StopJobRunResponse * stopJobRun(const StopJobRunRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDatasetResponse * updateDataset(const UpdateDatasetRequest &request);
    UpdateProfileJobResponse * updateProfileJob(const UpdateProfileJobRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);
    UpdateRecipeResponse * updateRecipe(const UpdateRecipeRequest &request);
    UpdateRecipeJobResponse * updateRecipeJob(const UpdateRecipeJobRequest &request);
    UpdateRulesetResponse * updateRuleset(const UpdateRulesetRequest &request);
    UpdateScheduleResponse * updateSchedule(const UpdateScheduleRequest &request);

private:
    Q_DECLARE_PRIVATE(DataBrewClient)
    Q_DISABLE_COPY(DataBrewClient)

};

} // namespace DataBrew
} // namespace QtAws

#endif
