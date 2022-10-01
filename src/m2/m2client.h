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

#ifndef QTAWS_M2CLIENT_H
#define QTAWS_M2CLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsm2global.h"

class QNetworkReply;

namespace QtAws {
namespace M2 {

class M2ClientPrivate;
class CancelBatchJobExecutionRequest;
class CancelBatchJobExecutionResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateDataSetImportTaskRequest;
class CreateDataSetImportTaskResponse;
class CreateDeploymentRequest;
class CreateDeploymentResponse;
class CreateEnvironmentRequest;
class CreateEnvironmentResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteApplicationFromEnvironmentRequest;
class DeleteApplicationFromEnvironmentResponse;
class DeleteEnvironmentRequest;
class DeleteEnvironmentResponse;
class GetApplicationRequest;
class GetApplicationResponse;
class GetApplicationVersionRequest;
class GetApplicationVersionResponse;
class GetBatchJobExecutionRequest;
class GetBatchJobExecutionResponse;
class GetDataSetDetailsRequest;
class GetDataSetDetailsResponse;
class GetDataSetImportTaskRequest;
class GetDataSetImportTaskResponse;
class GetDeploymentRequest;
class GetDeploymentResponse;
class GetEnvironmentRequest;
class GetEnvironmentResponse;
class ListApplicationVersionsRequest;
class ListApplicationVersionsResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListBatchJobDefinitionsRequest;
class ListBatchJobDefinitionsResponse;
class ListBatchJobExecutionsRequest;
class ListBatchJobExecutionsResponse;
class ListDataSetImportHistoryRequest;
class ListDataSetImportHistoryResponse;
class ListDataSetsRequest;
class ListDataSetsResponse;
class ListDeploymentsRequest;
class ListDeploymentsResponse;
class ListEngineVersionsRequest;
class ListEngineVersionsResponse;
class ListEnvironmentsRequest;
class ListEnvironmentsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartApplicationRequest;
class StartApplicationResponse;
class StartBatchJobRequest;
class StartBatchJobResponse;
class StopApplicationRequest;
class StopApplicationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;
class UpdateEnvironmentRequest;
class UpdateEnvironmentResponse;

class QTAWSM2_EXPORT M2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    M2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit M2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelBatchJobExecutionResponse * cancelBatchJobExecution(const CancelBatchJobExecutionRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateDataSetImportTaskResponse * createDataSetImportTask(const CreateDataSetImportTaskRequest &request);
    CreateDeploymentResponse * createDeployment(const CreateDeploymentRequest &request);
    CreateEnvironmentResponse * createEnvironment(const CreateEnvironmentRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteApplicationFromEnvironmentResponse * deleteApplicationFromEnvironment(const DeleteApplicationFromEnvironmentRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetApplicationVersionResponse * getApplicationVersion(const GetApplicationVersionRequest &request);
    GetBatchJobExecutionResponse * getBatchJobExecution(const GetBatchJobExecutionRequest &request);
    GetDataSetDetailsResponse * getDataSetDetails(const GetDataSetDetailsRequest &request);
    GetDataSetImportTaskResponse * getDataSetImportTask(const GetDataSetImportTaskRequest &request);
    GetDeploymentResponse * getDeployment(const GetDeploymentRequest &request);
    GetEnvironmentResponse * getEnvironment(const GetEnvironmentRequest &request);
    ListApplicationVersionsResponse * listApplicationVersions(const ListApplicationVersionsRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListBatchJobDefinitionsResponse * listBatchJobDefinitions(const ListBatchJobDefinitionsRequest &request);
    ListBatchJobExecutionsResponse * listBatchJobExecutions(const ListBatchJobExecutionsRequest &request);
    ListDataSetImportHistoryResponse * listDataSetImportHistory(const ListDataSetImportHistoryRequest &request);
    ListDataSetsResponse * listDataSets(const ListDataSetsRequest &request);
    ListDeploymentsResponse * listDeployments(const ListDeploymentsRequest &request);
    ListEngineVersionsResponse * listEngineVersions(const ListEngineVersionsRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartApplicationResponse * startApplication(const StartApplicationRequest &request);
    StartBatchJobResponse * startBatchJob(const StartBatchJobRequest &request);
    StopApplicationResponse * stopApplication(const StopApplicationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);

private:
    Q_DECLARE_PRIVATE(M2Client)
    Q_DISABLE_COPY(M2Client)

};

} // namespace M2
} // namespace QtAws

#endif
