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

#ifndef QTAWS_CODEBUILDCLIENT_H
#define QTAWS_CODEBUILDCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscodebuildglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CodeBuild {

class CodeBuildClientPrivate;
class BatchDeleteBuildsRequest;
class BatchDeleteBuildsResponse;
class BatchGetBuildBatchesRequest;
class BatchGetBuildBatchesResponse;
class BatchGetBuildsRequest;
class BatchGetBuildsResponse;
class BatchGetProjectsRequest;
class BatchGetProjectsResponse;
class BatchGetReportGroupsRequest;
class BatchGetReportGroupsResponse;
class BatchGetReportsRequest;
class BatchGetReportsResponse;
class CreateProjectRequest;
class CreateProjectResponse;
class CreateReportGroupRequest;
class CreateReportGroupResponse;
class CreateWebhookRequest;
class CreateWebhookResponse;
class DeleteBuildBatchRequest;
class DeleteBuildBatchResponse;
class DeleteProjectRequest;
class DeleteProjectResponse;
class DeleteReportRequest;
class DeleteReportResponse;
class DeleteReportGroupRequest;
class DeleteReportGroupResponse;
class DeleteResourcePolicyRequest;
class DeleteResourcePolicyResponse;
class DeleteSourceCredentialsRequest;
class DeleteSourceCredentialsResponse;
class DeleteWebhookRequest;
class DeleteWebhookResponse;
class DescribeCodeCoveragesRequest;
class DescribeCodeCoveragesResponse;
class DescribeTestCasesRequest;
class DescribeTestCasesResponse;
class GetReportGroupTrendRequest;
class GetReportGroupTrendResponse;
class GetResourcePolicyRequest;
class GetResourcePolicyResponse;
class ImportSourceCredentialsRequest;
class ImportSourceCredentialsResponse;
class InvalidateProjectCacheRequest;
class InvalidateProjectCacheResponse;
class ListBuildBatchesRequest;
class ListBuildBatchesResponse;
class ListBuildBatchesForProjectRequest;
class ListBuildBatchesForProjectResponse;
class ListBuildsRequest;
class ListBuildsResponse;
class ListBuildsForProjectRequest;
class ListBuildsForProjectResponse;
class ListCuratedEnvironmentImagesRequest;
class ListCuratedEnvironmentImagesResponse;
class ListProjectsRequest;
class ListProjectsResponse;
class ListReportGroupsRequest;
class ListReportGroupsResponse;
class ListReportsRequest;
class ListReportsResponse;
class ListReportsForReportGroupRequest;
class ListReportsForReportGroupResponse;
class ListSharedProjectsRequest;
class ListSharedProjectsResponse;
class ListSharedReportGroupsRequest;
class ListSharedReportGroupsResponse;
class ListSourceCredentialsRequest;
class ListSourceCredentialsResponse;
class PutResourcePolicyRequest;
class PutResourcePolicyResponse;
class RetryBuildRequest;
class RetryBuildResponse;
class RetryBuildBatchRequest;
class RetryBuildBatchResponse;
class StartBuildRequest;
class StartBuildResponse;
class StartBuildBatchRequest;
class StartBuildBatchResponse;
class StopBuildRequest;
class StopBuildResponse;
class StopBuildBatchRequest;
class StopBuildBatchResponse;
class UpdateProjectRequest;
class UpdateProjectResponse;
class UpdateReportGroupRequest;
class UpdateReportGroupResponse;
class UpdateWebhookRequest;
class UpdateWebhookResponse;

class QTAWSCODEBUILD_EXPORT CodeBuildClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodeBuildClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodeBuildClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDeleteBuildsResponse * batchDeleteBuilds(const BatchDeleteBuildsRequest &request);
    BatchGetBuildBatchesResponse * batchGetBuildBatches(const BatchGetBuildBatchesRequest &request);
    BatchGetBuildsResponse * batchGetBuilds(const BatchGetBuildsRequest &request);
    BatchGetProjectsResponse * batchGetProjects(const BatchGetProjectsRequest &request);
    BatchGetReportGroupsResponse * batchGetReportGroups(const BatchGetReportGroupsRequest &request);
    BatchGetReportsResponse * batchGetReports(const BatchGetReportsRequest &request);
    CreateProjectResponse * createProject(const CreateProjectRequest &request);
    CreateReportGroupResponse * createReportGroup(const CreateReportGroupRequest &request);
    CreateWebhookResponse * createWebhook(const CreateWebhookRequest &request);
    DeleteBuildBatchResponse * deleteBuildBatch(const DeleteBuildBatchRequest &request);
    DeleteProjectResponse * deleteProject(const DeleteProjectRequest &request);
    DeleteReportResponse * deleteReport(const DeleteReportRequest &request);
    DeleteReportGroupResponse * deleteReportGroup(const DeleteReportGroupRequest &request);
    DeleteResourcePolicyResponse * deleteResourcePolicy(const DeleteResourcePolicyRequest &request);
    DeleteSourceCredentialsResponse * deleteSourceCredentials(const DeleteSourceCredentialsRequest &request);
    DeleteWebhookResponse * deleteWebhook(const DeleteWebhookRequest &request);
    DescribeCodeCoveragesResponse * describeCodeCoverages(const DescribeCodeCoveragesRequest &request);
    DescribeTestCasesResponse * describeTestCases(const DescribeTestCasesRequest &request);
    GetReportGroupTrendResponse * getReportGroupTrend(const GetReportGroupTrendRequest &request);
    GetResourcePolicyResponse * getResourcePolicy(const GetResourcePolicyRequest &request);
    ImportSourceCredentialsResponse * importSourceCredentials(const ImportSourceCredentialsRequest &request);
    InvalidateProjectCacheResponse * invalidateProjectCache(const InvalidateProjectCacheRequest &request);
    ListBuildBatchesResponse * listBuildBatches(const ListBuildBatchesRequest &request);
    ListBuildBatchesForProjectResponse * listBuildBatchesForProject(const ListBuildBatchesForProjectRequest &request);
    ListBuildsResponse * listBuilds(const ListBuildsRequest &request);
    ListBuildsForProjectResponse * listBuildsForProject(const ListBuildsForProjectRequest &request);
    ListCuratedEnvironmentImagesResponse * listCuratedEnvironmentImages(const ListCuratedEnvironmentImagesRequest &request);
    ListProjectsResponse * listProjects(const ListProjectsRequest &request);
    ListReportGroupsResponse * listReportGroups(const ListReportGroupsRequest &request);
    ListReportsResponse * listReports(const ListReportsRequest &request);
    ListReportsForReportGroupResponse * listReportsForReportGroup(const ListReportsForReportGroupRequest &request);
    ListSharedProjectsResponse * listSharedProjects(const ListSharedProjectsRequest &request);
    ListSharedReportGroupsResponse * listSharedReportGroups(const ListSharedReportGroupsRequest &request);
    ListSourceCredentialsResponse * listSourceCredentials(const ListSourceCredentialsRequest &request);
    PutResourcePolicyResponse * putResourcePolicy(const PutResourcePolicyRequest &request);
    RetryBuildResponse * retryBuild(const RetryBuildRequest &request);
    RetryBuildBatchResponse * retryBuildBatch(const RetryBuildBatchRequest &request);
    StartBuildResponse * startBuild(const StartBuildRequest &request);
    StartBuildBatchResponse * startBuildBatch(const StartBuildBatchRequest &request);
    StopBuildResponse * stopBuild(const StopBuildRequest &request);
    StopBuildBatchResponse * stopBuildBatch(const StopBuildBatchRequest &request);
    UpdateProjectResponse * updateProject(const UpdateProjectRequest &request);
    UpdateReportGroupResponse * updateReportGroup(const UpdateReportGroupRequest &request);
    UpdateWebhookResponse * updateWebhook(const UpdateWebhookRequest &request);

protected:
    /// @cond internal
    CodeBuildClientPrivate * const d_ptr; ///< Internal d-pointer.
    CodeBuildClient(CodeBuildClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(CodeBuildClient)
    Q_DISABLE_COPY(CodeBuildClient)

};

} // namespace CodeBuild
} // namespace QtAws

#endif
