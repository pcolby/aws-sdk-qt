/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_SFNCLIENT_H
#define QTAWS_SFNCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace SFN {

class SfnClientPrivate;
class CreateActivityResponse;
class CreateStateMachineResponse;
class DeleteActivityResponse;
class DeleteStateMachineResponse;
class DescribeActivityResponse;
class DescribeExecutionResponse;
class DescribeStateMachineResponse;
class DescribeStateMachineForExecutionResponse;
class GetActivityTaskResponse;
class GetExecutionHistoryResponse;
class ListActivitiesResponse;
class ListExecutionsResponse;
class ListStateMachinesResponse;
class SendTaskFailureResponse;
class SendTaskHeartbeatResponse;
class SendTaskSuccessResponse;
class StartExecutionResponse;
class StopExecutionResponse;
class UpdateStateMachineResponse;

class QTAWS_EXPORT SfnClient : public AwsAbstractClient {
    Q_OBJECT

public:
    SfnClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SfnClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateActivityResponse * createActivity(const CreateActivityRequest &request);
    CreateStateMachineResponse * createStateMachine(const CreateStateMachineRequest &request);
    DeleteActivityResponse * deleteActivity(const DeleteActivityRequest &request);
    DeleteStateMachineResponse * deleteStateMachine(const DeleteStateMachineRequest &request);
    DescribeActivityResponse * describeActivity(const DescribeActivityRequest &request);
    DescribeExecutionResponse * describeExecution(const DescribeExecutionRequest &request);
    DescribeStateMachineResponse * describeStateMachine(const DescribeStateMachineRequest &request);
    DescribeStateMachineForExecutionResponse * describeStateMachineForExecution(const DescribeStateMachineForExecutionRequest &request);
    GetActivityTaskResponse * getActivityTask(const GetActivityTaskRequest &request);
    GetExecutionHistoryResponse * getExecutionHistory(const GetExecutionHistoryRequest &request);
    ListActivitiesResponse * listActivities(const ListActivitiesRequest &request);
    ListExecutionsResponse * listExecutions(const ListExecutionsRequest &request);
    ListStateMachinesResponse * listStateMachines(const ListStateMachinesRequest &request);
    SendTaskFailureResponse * sendTaskFailure(const SendTaskFailureRequest &request);
    SendTaskHeartbeatResponse * sendTaskHeartbeat(const SendTaskHeartbeatRequest &request);
    SendTaskSuccessResponse * sendTaskSuccess(const SendTaskSuccessRequest &request);
    StartExecutionResponse * startExecution(const StartExecutionRequest &request);
    StopExecutionResponse * stopExecution(const StopExecutionRequest &request);
    UpdateStateMachineResponse * updateStateMachine(const UpdateStateMachineRequest &request);

private:
    Q_DECLARE_PRIVATE(SfnClient)
    Q_DISABLE_COPY(SfnClient)

};

} // namespace SFN
} // namespace AWS

#endif
