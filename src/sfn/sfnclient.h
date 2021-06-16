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

#ifndef QTAWS_SFNCLIENT_H
#define QTAWS_SFNCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace SFN {

class SfnClientPrivate;
class CreateActivityRequest;
class CreateActivityResponse;
class CreateStateMachineRequest;
class CreateStateMachineResponse;
class DeleteActivityRequest;
class DeleteActivityResponse;
class DeleteStateMachineRequest;
class DeleteStateMachineResponse;
class DescribeActivityRequest;
class DescribeActivityResponse;
class DescribeExecutionRequest;
class DescribeExecutionResponse;
class DescribeStateMachineRequest;
class DescribeStateMachineResponse;
class DescribeStateMachineForExecutionRequest;
class DescribeStateMachineForExecutionResponse;
class GetActivityTaskRequest;
class GetActivityTaskResponse;
class GetExecutionHistoryRequest;
class GetExecutionHistoryResponse;
class ListActivitiesRequest;
class ListActivitiesResponse;
class ListExecutionsRequest;
class ListExecutionsResponse;
class ListStateMachinesRequest;
class ListStateMachinesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class SendTaskFailureRequest;
class SendTaskFailureResponse;
class SendTaskHeartbeatRequest;
class SendTaskHeartbeatResponse;
class SendTaskSuccessRequest;
class SendTaskSuccessResponse;
class StartExecutionRequest;
class StartExecutionResponse;
class StopExecutionRequest;
class StopExecutionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateStateMachineRequest;
class UpdateStateMachineResponse;

class QTAWS_EXPORT SfnClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    SfnClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    SfnClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    SendTaskFailureResponse * sendTaskFailure(const SendTaskFailureRequest &request);
    SendTaskHeartbeatResponse * sendTaskHeartbeat(const SendTaskHeartbeatRequest &request);
    SendTaskSuccessResponse * sendTaskSuccess(const SendTaskSuccessRequest &request);
    StartExecutionResponse * startExecution(const StartExecutionRequest &request);
    StopExecutionResponse * stopExecution(const StopExecutionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateStateMachineResponse * updateStateMachine(const UpdateStateMachineRequest &request);

private:
    Q_DECLARE_PRIVATE(SfnClient)
    Q_DISABLE_COPY(SfnClient)

};

} // namespace SFN
} // namespace QtAws

#endif
