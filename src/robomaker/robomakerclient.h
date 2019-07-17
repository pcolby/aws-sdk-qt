/*
    Copyright 2013-2019 Paul Colby

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
class BatchDescribeSimulationJobRequest;
class BatchDescribeSimulationJobResponse;
class CancelSimulationJobRequest;
class CancelSimulationJobResponse;
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
class DeleteFleetRequest;
class DeleteFleetResponse;
class DeleteRobotRequest;
class DeleteRobotResponse;
class DeleteRobotApplicationRequest;
class DeleteRobotApplicationResponse;
class DeleteSimulationApplicationRequest;
class DeleteSimulationApplicationResponse;
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
class ListSimulationJobsRequest;
class ListSimulationJobsResponse;
class RegisterRobotRequest;
class RegisterRobotResponse;
class RestartSimulationJobRequest;
class RestartSimulationJobResponse;
class SyncDeploymentJobRequest;
class SyncDeploymentJobResponse;
class UpdateRobotApplicationRequest;
class UpdateRobotApplicationResponse;
class UpdateSimulationApplicationRequest;
class UpdateSimulationApplicationResponse;

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
    BatchDescribeSimulationJobResponse * batchDescribeSimulationJob(const BatchDescribeSimulationJobRequest &request);
    CancelSimulationJobResponse * cancelSimulationJob(const CancelSimulationJobRequest &request);
    CreateDeploymentJobResponse * createDeploymentJob(const CreateDeploymentJobRequest &request);
    CreateFleetResponse * createFleet(const CreateFleetRequest &request);
    CreateRobotResponse * createRobot(const CreateRobotRequest &request);
    CreateRobotApplicationResponse * createRobotApplication(const CreateRobotApplicationRequest &request);
    CreateRobotApplicationVersionResponse * createRobotApplicationVersion(const CreateRobotApplicationVersionRequest &request);
    CreateSimulationApplicationResponse * createSimulationApplication(const CreateSimulationApplicationRequest &request);
    CreateSimulationApplicationVersionResponse * createSimulationApplicationVersion(const CreateSimulationApplicationVersionRequest &request);
    CreateSimulationJobResponse * createSimulationJob(const CreateSimulationJobRequest &request);
    DeleteFleetResponse * deleteFleet(const DeleteFleetRequest &request);
    DeleteRobotResponse * deleteRobot(const DeleteRobotRequest &request);
    DeleteRobotApplicationResponse * deleteRobotApplication(const DeleteRobotApplicationRequest &request);
    DeleteSimulationApplicationResponse * deleteSimulationApplication(const DeleteSimulationApplicationRequest &request);
    DeregisterRobotResponse * deregisterRobot(const DeregisterRobotRequest &request);
    DescribeDeploymentJobResponse * describeDeploymentJob(const DescribeDeploymentJobRequest &request);
    DescribeFleetResponse * describeFleet(const DescribeFleetRequest &request);
    DescribeRobotResponse * describeRobot(const DescribeRobotRequest &request);
    DescribeRobotApplicationResponse * describeRobotApplication(const DescribeRobotApplicationRequest &request);
    DescribeSimulationApplicationResponse * describeSimulationApplication(const DescribeSimulationApplicationRequest &request);
    DescribeSimulationJobResponse * describeSimulationJob(const DescribeSimulationJobRequest &request);
    ListDeploymentJobsResponse * listDeploymentJobs(const ListDeploymentJobsRequest &request);
    ListFleetsResponse * listFleets(const ListFleetsRequest &request);
    ListRobotApplicationsResponse * listRobotApplications(const ListRobotApplicationsRequest &request);
    ListRobotsResponse * listRobots(const ListRobotsRequest &request);
    ListSimulationApplicationsResponse * listSimulationApplications(const ListSimulationApplicationsRequest &request);
    ListSimulationJobsResponse * listSimulationJobs(const ListSimulationJobsRequest &request);
    RegisterRobotResponse * registerRobot(const RegisterRobotRequest &request);
    RestartSimulationJobResponse * restartSimulationJob(const RestartSimulationJobRequest &request);
    SyncDeploymentJobResponse * syncDeploymentJob(const SyncDeploymentJobRequest &request);
    UpdateRobotApplicationResponse * updateRobotApplication(const UpdateRobotApplicationRequest &request);
    UpdateSimulationApplicationResponse * updateSimulationApplication(const UpdateSimulationApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(RoboMakerClient)
    Q_DISABLE_COPY(RoboMakerClient)

};

} // namespace RoboMaker
} // namespace QtAws

#endif
