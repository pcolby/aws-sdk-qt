/*
    Copyright 2013-2016 Paul Colby

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

#ifndef QTAWS_DATAPIPELINECLIENT_H
#define QTAWS_DATAPIPELINECLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class DataPipelineClientPrivate;

class QTAWS_EXPORT DataPipelineClient : public AwsAbstractClient {
    Q_OBJECT

public:
    DataPipelineClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    DataPipelineClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DataPipelineActivatePipelineResponse * activatePipeline(const DataPipelineActivatePipelineRequest &request);
    DataPipelineAddTagsResponse * addTags(const DataPipelineAddTagsRequest &request);
    DataPipelineCreatePipelineResponse * createPipeline(const DataPipelineCreatePipelineRequest &request);
    DataPipelineDeactivatePipelineResponse * deactivatePipeline(const DataPipelineDeactivatePipelineRequest &request);
    DataPipelineDeletePipelineResponse * deletePipeline(const DataPipelineDeletePipelineRequest &request);
    DataPipelineDescribeObjectsResponse * describeObjects(const DataPipelineDescribeObjectsRequest &request);
    DataPipelineDescribePipelinesResponse * describePipelines(const DataPipelineDescribePipelinesRequest &request);
    DataPipelineEvaluateExpressionResponse * evaluateExpression(const DataPipelineEvaluateExpressionRequest &request);
    DataPipelineGetPipelineDefinitionResponse * getPipelineDefinition(const DataPipelineGetPipelineDefinitionRequest &request);
    DataPipelineListPipelinesResponse * listPipelines(const DataPipelineListPipelinesRequest &request);
    DataPipelinePollForTaskResponse * pollForTask(const DataPipelinePollForTaskRequest &request);
    DataPipelinePutPipelineDefinitionResponse * putPipelineDefinition(const DataPipelinePutPipelineDefinitionRequest &request);
    DataPipelineQueryObjectsResponse * queryObjects(const DataPipelineQueryObjectsRequest &request);
    DataPipelineRemoveTagsResponse * removeTags(const DataPipelineRemoveTagsRequest &request);
    DataPipelineReportTaskProgressResponse * reportTaskProgress(const DataPipelineReportTaskProgressRequest &request);
    DataPipelineReportTaskRunnerHeartbeatResponse * reportTaskRunnerHeartbeat(const DataPipelineReportTaskRunnerHeartbeatRequest &request);
    DataPipelineSetStatusResponse * setStatus(const DataPipelineSetStatusRequest &request);
    DataPipelineSetTaskStatusResponse * setTaskStatus(const DataPipelineSetTaskStatusRequest &request);
    DataPipelineValidatePipelineDefinitionResponse * validatePipelineDefinition(const DataPipelineValidatePipelineDefinitionRequest &request);

private:
    Q_DECLARE_PRIVATE(DataPipelineClient)
    Q_DISABLE_COPY(DataPipelineClient)

};

QTAWS_END_NAMESPACE

#endif
