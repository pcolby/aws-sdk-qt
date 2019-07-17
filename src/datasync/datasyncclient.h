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

#ifndef QTAWS_DATASYNCCLIENT_H
#define QTAWS_DATASYNCCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace DataSync {

class DataSyncClientPrivate;
class CancelTaskExecutionRequest;
class CancelTaskExecutionResponse;
class CreateAgentRequest;
class CreateAgentResponse;
class CreateLocationEfsRequest;
class CreateLocationEfsResponse;
class CreateLocationNfsRequest;
class CreateLocationNfsResponse;
class CreateLocationS3Request;
class CreateLocationS3Response;
class CreateTaskRequest;
class CreateTaskResponse;
class DeleteAgentRequest;
class DeleteAgentResponse;
class DeleteLocationRequest;
class DeleteLocationResponse;
class DeleteTaskRequest;
class DeleteTaskResponse;
class DescribeAgentRequest;
class DescribeAgentResponse;
class DescribeLocationEfsRequest;
class DescribeLocationEfsResponse;
class DescribeLocationNfsRequest;
class DescribeLocationNfsResponse;
class DescribeLocationS3Request;
class DescribeLocationS3Response;
class DescribeTaskRequest;
class DescribeTaskResponse;
class DescribeTaskExecutionRequest;
class DescribeTaskExecutionResponse;
class ListAgentsRequest;
class ListAgentsResponse;
class ListLocationsRequest;
class ListLocationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTaskExecutionsRequest;
class ListTaskExecutionsResponse;
class ListTasksRequest;
class ListTasksResponse;
class StartTaskExecutionRequest;
class StartTaskExecutionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateAgentRequest;
class UpdateAgentResponse;
class UpdateTaskRequest;
class UpdateTaskResponse;

class QTAWS_EXPORT DataSyncClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DataSyncClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DataSyncClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelTaskExecutionResponse * cancelTaskExecution(const CancelTaskExecutionRequest &request);
    CreateAgentResponse * createAgent(const CreateAgentRequest &request);
    CreateLocationEfsResponse * createLocationEfs(const CreateLocationEfsRequest &request);
    CreateLocationNfsResponse * createLocationNfs(const CreateLocationNfsRequest &request);
    CreateLocationS3Response * createLocationS3(const CreateLocationS3Request &request);
    CreateTaskResponse * createTask(const CreateTaskRequest &request);
    DeleteAgentResponse * deleteAgent(const DeleteAgentRequest &request);
    DeleteLocationResponse * deleteLocation(const DeleteLocationRequest &request);
    DeleteTaskResponse * deleteTask(const DeleteTaskRequest &request);
    DescribeAgentResponse * describeAgent(const DescribeAgentRequest &request);
    DescribeLocationEfsResponse * describeLocationEfs(const DescribeLocationEfsRequest &request);
    DescribeLocationNfsResponse * describeLocationNfs(const DescribeLocationNfsRequest &request);
    DescribeLocationS3Response * describeLocationS3(const DescribeLocationS3Request &request);
    DescribeTaskResponse * describeTask(const DescribeTaskRequest &request);
    DescribeTaskExecutionResponse * describeTaskExecution(const DescribeTaskExecutionRequest &request);
    ListAgentsResponse * listAgents(const ListAgentsRequest &request);
    ListLocationsResponse * listLocations(const ListLocationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTaskExecutionsResponse * listTaskExecutions(const ListTaskExecutionsRequest &request);
    ListTasksResponse * listTasks(const ListTasksRequest &request);
    StartTaskExecutionResponse * startTaskExecution(const StartTaskExecutionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateAgentResponse * updateAgent(const UpdateAgentRequest &request);
    UpdateTaskResponse * updateTask(const UpdateTaskRequest &request);

private:
    Q_DECLARE_PRIVATE(DataSyncClient)
    Q_DISABLE_COPY(DataSyncClient)

};

} // namespace DataSync
} // namespace QtAws

#endif
