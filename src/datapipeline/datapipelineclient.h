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

#ifndef QTAWS_DATAPIPELINECLIENT_H
#define QTAWS_DATAPIPELINECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace DataPipeline {

class DataPipelineClientPrivate;
class ActivatePipelineRequest;
class ActivatePipelineResponse;
class AddTagsRequest;
class AddTagsResponse;
class CreatePipelineRequest;
class CreatePipelineResponse;
class DeactivatePipelineRequest;
class DeactivatePipelineResponse;
class DeletePipelineRequest;
class DeletePipelineResponse;
class DescribeObjectsRequest;
class DescribeObjectsResponse;
class DescribePipelinesRequest;
class DescribePipelinesResponse;
class EvaluateExpressionRequest;
class EvaluateExpressionResponse;
class GetPipelineDefinitionRequest;
class GetPipelineDefinitionResponse;
class ListPipelinesRequest;
class ListPipelinesResponse;
class PollForTaskRequest;
class PollForTaskResponse;
class PutPipelineDefinitionRequest;
class PutPipelineDefinitionResponse;
class QueryObjectsRequest;
class QueryObjectsResponse;
class RemoveTagsRequest;
class RemoveTagsResponse;
class ReportTaskProgressRequest;
class ReportTaskProgressResponse;
class ReportTaskRunnerHeartbeatRequest;
class ReportTaskRunnerHeartbeatResponse;
class SetStatusRequest;
class SetStatusResponse;
class SetTaskStatusRequest;
class SetTaskStatusResponse;
class ValidatePipelineDefinitionRequest;
class ValidatePipelineDefinitionResponse;

class QTAWS_EXPORT DataPipelineClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    DataPipelineClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DataPipelineClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ActivatePipelineResponse * activatePipeline(const ActivatePipelineRequest &request);
    AddTagsResponse * addTags(const AddTagsRequest &request);
    CreatePipelineResponse * createPipeline(const CreatePipelineRequest &request);
    DeactivatePipelineResponse * deactivatePipeline(const DeactivatePipelineRequest &request);
    DeletePipelineResponse * deletePipeline(const DeletePipelineRequest &request);
    DescribeObjectsResponse * describeObjects(const DescribeObjectsRequest &request);
    DescribePipelinesResponse * describePipelines(const DescribePipelinesRequest &request);
    EvaluateExpressionResponse * evaluateExpression(const EvaluateExpressionRequest &request);
    GetPipelineDefinitionResponse * getPipelineDefinition(const GetPipelineDefinitionRequest &request);
    ListPipelinesResponse * listPipelines(const ListPipelinesRequest &request);
    PollForTaskResponse * pollForTask(const PollForTaskRequest &request);
    PutPipelineDefinitionResponse * putPipelineDefinition(const PutPipelineDefinitionRequest &request);
    QueryObjectsResponse * queryObjects(const QueryObjectsRequest &request);
    RemoveTagsResponse * removeTags(const RemoveTagsRequest &request);
    ReportTaskProgressResponse * reportTaskProgress(const ReportTaskProgressRequest &request);
    ReportTaskRunnerHeartbeatResponse * reportTaskRunnerHeartbeat(const ReportTaskRunnerHeartbeatRequest &request);
    SetStatusResponse * setStatus(const SetStatusRequest &request);
    SetTaskStatusResponse * setTaskStatus(const SetTaskStatusRequest &request);
    ValidatePipelineDefinitionResponse * validatePipelineDefinition(const ValidatePipelineDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(DataPipelineClient)
    Q_DISABLE_COPY(DataPipelineClient)

};

} // namespace DataPipeline
} // namespace QtAws

#endif
