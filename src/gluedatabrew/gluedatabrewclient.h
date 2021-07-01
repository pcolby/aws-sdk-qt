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

#ifndef QTAWS_GLUEDATABREWCLIENT_H
#define QTAWS_GLUEDATABREWCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsgluedatabrewglobal.h"

class QNetworkReply;

namespace QtAws {
namespace GlueDataBrew {

class GlueDataBrewClientPrivate;
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
class UpdateScheduleRequest;
class UpdateScheduleResponse;

class QTAWSGLUEDATABREW_EXPORT GlueDataBrewClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    GlueDataBrewClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit GlueDataBrewClient(
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
    CreateScheduleResponse * createSchedule(const CreateScheduleRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DeleteJobResponse * deleteJob(const DeleteJobRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteRecipeVersionResponse * deleteRecipeVersion(const DeleteRecipeVersionRequest &request);
    DeleteScheduleResponse * deleteSchedule(const DeleteScheduleRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeJobResponse * describeJob(const DescribeJobRequest &request);
    DescribeJobRunResponse * describeJobRun(const DescribeJobRunRequest &request);
    DescribeProjectResponse * describeProject(const DescribeProjectRequest &request);
    DescribeRecipeResponse * describeRecipe(const DescribeRecipeRequest &request);
    DescribeScheduleResponse * describeSchedule(const DescribeScheduleRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListJobRunsResponse * listJobRuns(const ListJobRunsRequest &request);
    ListJobsResponse * listJobs(const ListJobsRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListRecipeVersionsResponse * listRecipeVersions(const ListRecipeVersionsRequest &request);
    ListRecipesResponse * listRecipes(const ListRecipesRequest &request);
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
    UpdateScheduleResponse * updateSchedule(const UpdateScheduleRequest &request);

private:
    Q_DECLARE_PRIVATE(GlueDataBrewClient)
    Q_DISABLE_COPY(GlueDataBrewClient)

};

} // namespace GlueDataBrew
} // namespace QtAws

#endif
