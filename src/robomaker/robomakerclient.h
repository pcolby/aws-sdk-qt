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

#ifndef QTAWS_ROBOMAKERCLIENT_H
#define QTAWS_ROBOMAKERCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace RoboMaker {

class RoboMakerClientPrivate;
class BatchDeleteWorldsRequest;
class BatchDeleteWorldsResponse;
class BatchDescribeSimulationJobRequest;
class BatchDescribeSimulationJobResponse;
class CancelDeploymentJobRequest;
class CancelDeploymentJobResponse;
class CancelSimulationJobRequest;
class CancelSimulationJobResponse;
class CancelSimulationJobBatchRequest;
class CancelSimulationJobBatchResponse;
class CancelWorldExportJobRequest;
class CancelWorldExportJobResponse;
class CancelWorldGenerationJobRequest;
class CancelWorldGenerationJobResponse;
class CreateDeploymentJobRequest;
class CreateDeploymentJobResponse;
class CreateFleetRequest;
class CreateFleetResponse;
class CreateRobotRequest;
class CreateRobotResponse;
class CreateRobotApplicationRequest;
class CreateRobotApplicationResponse;
class CreateRobotApplicationVersionRequest;
class CreateRobotApplicationVersionResponse;
class CreateSimulationApplicationRequest;
class CreateSimulationApplicationResponse;
class CreateSimulationApplicationVersionRequest;
class CreateSimulationApplicationVersionResponse;
class CreateSimulationJobRequest;
class CreateSimulationJobResponse;
class CreateWorldExportJobRequest;
class CreateWorldExportJobResponse;
class CreateWorldGenerationJobRequest;
class CreateWorldGenerationJobResponse;
class CreateWorldTemplateRequest;
class CreateWorldTemplateResponse;
class DeleteFleetRequest;
class DeleteFleetResponse;
class DeleteRobotRequest;
class DeleteRobotResponse;
class DeleteRobotApplicationRequest;
class DeleteRobotApplicationResponse;
class DeleteSimulationApplicationRequest;
class DeleteSimulationApplicationResponse;
class DeleteWorldTemplateRequest;
class DeleteWorldTemplateResponse;
class DeregisterRobotRequest;
class DeregisterRobotResponse;
class DescribeDeploymentJobRequest;
class DescribeDeploymentJobResponse;
class DescribeFleetRequest;
class DescribeFleetResponse;
class DescribeRobotRequest;
class DescribeRobotResponse;
class DescribeRobotApplicationRequest;
class DescribeRobotApplicationResponse;
class DescribeSimulationApplicationRequest;
class DescribeSimulationApplicationResponse;
class DescribeSimulationJobRequest;
class DescribeSimulationJobResponse;
class DescribeSimulationJobBatchRequest;
class DescribeSimulationJobBatchResponse;
class DescribeWorldRequest;
class DescribeWorldResponse;
class DescribeWorldExportJobRequest;
class DescribeWorldExportJobResponse;
class DescribeWorldGenerationJobRequest;
class DescribeWorldGenerationJobResponse;
class DescribeWorldTemplateRequest;
class DescribeWorldTemplateResponse;
class GetWorldTemplateBodyRequest;
class GetWorldTemplateBodyResponse;
class ListDeploymentJobsRequest;
class ListDeploymentJobsResponse;
class ListFleetsRequest;
class ListFleetsResponse;
class ListRobotApplicationsRequest;
class ListRobotApplicationsResponse;
class ListRobotsRequest;
class ListRobotsResponse;
class ListSimulationApplicationsRequest;
class ListSimulationApplicationsResponse;
class ListSimulationJobBatchesRequest;
class ListSimulationJobBatchesResponse;
class ListSimulationJobsRequest;
class ListSimulationJobsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListWorldExportJobsRequest;
class ListWorldExportJobsResponse;
class ListWorldGenerationJobsRequest;
class ListWorldGenerationJobsResponse;
class ListWorldTemplatesRequest;
class ListWorldTemplatesResponse;
class ListWorldsRequest;
class ListWorldsResponse;
class RegisterRobotRequest;
class RegisterRobotResponse;
class RestartSimulationJobRequest;
class RestartSimulationJobResponse;
class StartSimulationJobBatchRequest;
class StartSimulationJobBatchResponse;
class SyncDeploymentJobRequest;
class SyncDeploymentJobResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateRobotApplicationRequest;
class UpdateRobotApplicationResponse;
class UpdateSimulationApplicationRequest;
class UpdateSimulationApplicationResponse;
class UpdateWorldTemplateRequest;
class UpdateWorldTemplateResponse;

class QTAWS_EXPORT RoboMakerClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    RoboMakerClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    RoboMakerClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchDeleteWorldsResponse * batchDeleteWorlds(const BatchDeleteWorldsRequest &request);
    BatchDescribeSimulationJobResponse * batchDescribeSimulationJob(const BatchDescribeSimulationJobRequest &request);
    CancelDeploymentJobResponse * cancelDeploymentJob(const CancelDeploymentJobRequest &request);
    CancelSimulationJobResponse * cancelSimulationJob(const CancelSimulationJobRequest &request);
    CancelSimulationJobBatchResponse * cancelSimulationJobBatch(const CancelSimulationJobBatchRequest &request);
    CancelWorldExportJobResponse * cancelWorldExportJob(const CancelWorldExportJobRequest &request);
    CancelWorldGenerationJobResponse * cancelWorldGenerationJob(const CancelWorldGenerationJobRequest &request);
    CreateDeploymentJobResponse * createDeploymentJob(const CreateDeploymentJobRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    CreateRobotResponse * createRobot(const CreateRobotRequest &request);
    CreateRobotApplicationResponse * createRobotApplication(const CreateRobotApplicationRequest &request);
    CreateRobotApplicationVersionResponse * createRobotApplicationVersion(const CreateRobotApplicationVersionRequest &request);
    CreateSimulationApplicationResponse * createSimulationApplication(const CreateSimulationApplicationRequest &request);
    CreateSimulationApplicationVersionResponse * createSimulationApplicationVersion(const CreateSimulationApplicationVersionRequest &request);
    CreateSimulationJobResponse * createSimulationJob(const CreateSimulationJobRequest &request);
    CreateWorldExportJobResponse * createWorldExportJob(const CreateWorldExportJobRequest &request);
    CreateWorldGenerationJobResponse * createWorldGenerationJob(const CreateWorldGenerationJobRequest &request);
    CreateWorldTemplateResponse * createWorldTemplate(const CreateWorldTemplateRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DeleteRobotResponse * deleteRobot(const DeleteRobotRequest &request);
    DeleteRobotApplicationResponse * deleteRobotApplication(const DeleteRobotApplicationRequest &request);
    DeleteSimulationApplicationResponse * deleteSimulationApplication(const DeleteSimulationApplicationRequest &request);
    DeleteWorldTemplateResponse * deleteWorldTemplate(const DeleteWorldTemplateRequest &request);
    DeregisterRobotResponse * deregisterRobot(const DeregisterRobotRequest &request);
    DescribeDeploymentJobResponse * describeDeploymentJob(const DescribeDeploymentJobRequest &request);
    DescribeFleetResponse * describeFleet(const DescribeFleetRequest &request);
    DescribeRobotResponse * describeRobot(const DescribeRobotRequest &request);
    DescribeRobotApplicationResponse * describeRobotApplication(const DescribeRobotApplicationRequest &request);
    DescribeSimulationApplicationResponse * describeSimulationApplication(const DescribeSimulationApplicationRequest &request);
    DescribeSimulationJobResponse * describeSimulationJob(const DescribeSimulationJobRequest &request);
    DescribeSimulationJobBatchResponse * describeSimulationJobBatch(const DescribeSimulationJobBatchRequest &request);
    DescribeWorldResponse * describeWorld(const DescribeWorldRequest &request);
    DescribeWorldExportJobResponse * describeWorldExportJob(const DescribeWorldExportJobRequest &request);
    DescribeWorldGenerationJobResponse * describeWorldGenerationJob(const DescribeWorldGenerationJobRequest &request);
    DescribeWorldTemplateResponse * describeWorldTemplate(const DescribeWorldTemplateRequest &request);
    GetWorldTemplateBodyResponse * getWorldTemplateBody(const GetWorldTemplateBodyRequest &request);
    ListDeploymentJobsResponse * listDeploymentJobs(const ListDeploymentJobsRequest &request);
    ListFleetsResponse * listFleets(const ListFleetsRequest &request);
    ListRobotApplicationsResponse * listRobotApplications(const ListRobotApplicationsRequest &request);
    ListRobotsResponse * listRobots(const ListRobotsRequest &request);
    ListSimulationApplicationsResponse * listSimulationApplications(const ListSimulationApplicationsRequest &request);
    ListSimulationJobBatchesResponse * listSimulationJobBatches(const ListSimulationJobBatchesRequest &request);
    ListSimulationJobsResponse * listSimulationJobs(const ListSimulationJobsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListWorldExportJobsResponse * listWorldExportJobs(const ListWorldExportJobsRequest &request);
    ListWorldGenerationJobsResponse * listWorldGenerationJobs(const ListWorldGenerationJobsRequest &request);
    ListWorldTemplatesResponse * listWorldTemplates(const ListWorldTemplatesRequest &request);
    ListWorldsResponse * listWorlds(const ListWorldsRequest &request);
    RegisterRobotResponse * registerRobot(const RegisterRobotRequest &request);
    RestartSimulationJobResponse * restartSimulationJob(const RestartSimulationJobRequest &request);
    StartSimulationJobBatchResponse * startSimulationJobBatch(const StartSimulationJobBatchRequest &request);
    SyncDeploymentJobResponse * syncDeploymentJob(const SyncDeploymentJobRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateRobotApplicationResponse * updateRobotApplication(const UpdateRobotApplicationRequest &request);
    UpdateSimulationApplicationResponse * updateSimulationApplication(const UpdateSimulationApplicationRequest &request);
    UpdateWorldTemplateResponse * updateWorldTemplate(const UpdateWorldTemplateRequest &request);

protected:
    /// @cond internal
    RoboMakerClientPrivate * const d_ptr; ///< Internal d-pointer.
    RoboMakerClient(RoboMakerClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(RoboMakerClient)
    Q_DISABLE_COPY(RoboMakerClient)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
