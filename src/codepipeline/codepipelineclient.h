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

#ifndef QTAWS_CODEPIPELINECLIENT_H
#define QTAWS_CODEPIPELINECLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class CodePipelineClientPrivate;

class QTAWS_EXPORT CodePipelineClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CodePipelineClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodePipelineClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CodePipelineAcknowledgeJobResponse * acknowledgeJob(const CodePipelineAcknowledgeJobRequest &request);
    CodePipelineAcknowledgeThirdPartyJobResponse * acknowledgeThirdPartyJob(const CodePipelineAcknowledgeThirdPartyJobRequest &request);
    CodePipelineCreateCustomActionTypeResponse * createCustomActionType(const CodePipelineCreateCustomActionTypeRequest &request);
    CodePipelineCreatePipelineResponse * createPipeline(const CodePipelineCreatePipelineRequest &request);
    CodePipelineDeleteCustomActionTypeResponse * deleteCustomActionType(const CodePipelineDeleteCustomActionTypeRequest &request);
    CodePipelineDeletePipelineResponse * deletePipeline(const CodePipelineDeletePipelineRequest &request);
    CodePipelineDisableStageTransitionResponse * disableStageTransition(const CodePipelineDisableStageTransitionRequest &request);
    CodePipelineEnableStageTransitionResponse * enableStageTransition(const CodePipelineEnableStageTransitionRequest &request);
    CodePipelineGetJobDetailsResponse * getJobDetails(const CodePipelineGetJobDetailsRequest &request);
    CodePipelineGetPipelineResponse * getPipeline(const CodePipelineGetPipelineRequest &request);
    CodePipelineGetPipelineExecutionResponse * getPipelineExecution(const CodePipelineGetPipelineExecutionRequest &request);
    CodePipelineGetPipelineStateResponse * getPipelineState(const CodePipelineGetPipelineStateRequest &request);
    CodePipelineGetThirdPartyJobDetailsResponse * getThirdPartyJobDetails(const CodePipelineGetThirdPartyJobDetailsRequest &request);
    CodePipelineListActionTypesResponse * listActionTypes(const CodePipelineListActionTypesRequest &request);
    CodePipelineListPipelinesResponse * listPipelines(const CodePipelineListPipelinesRequest &request);
    CodePipelinePollForJobsResponse * pollForJobs(const CodePipelinePollForJobsRequest &request);
    CodePipelinePollForThirdPartyJobsResponse * pollForThirdPartyJobs(const CodePipelinePollForThirdPartyJobsRequest &request);
    CodePipelinePutActionRevisionResponse * putActionRevision(const CodePipelinePutActionRevisionRequest &request);
    CodePipelinePutApprovalResultResponse * putApprovalResult(const CodePipelinePutApprovalResultRequest &request);
    CodePipelinePutJobFailureResultResponse * putJobFailureResult(const CodePipelinePutJobFailureResultRequest &request);
    CodePipelinePutJobSuccessResultResponse * putJobSuccessResult(const CodePipelinePutJobSuccessResultRequest &request);
    CodePipelinePutThirdPartyJobFailureResultResponse * putThirdPartyJobFailureResult(const CodePipelinePutThirdPartyJobFailureResultRequest &request);
    CodePipelinePutThirdPartyJobSuccessResultResponse * putThirdPartyJobSuccessResult(const CodePipelinePutThirdPartyJobSuccessResultRequest &request);
    CodePipelineRetryStageExecutionResponse * retryStageExecution(const CodePipelineRetryStageExecutionRequest &request);
    CodePipelineStartPipelineExecutionResponse * startPipelineExecution(const CodePipelineStartPipelineExecutionRequest &request);
    CodePipelineUpdatePipelineResponse * updatePipeline(const CodePipelineUpdatePipelineRequest &request);

private:
    Q_DECLARE_PRIVATE(CodePipelineClient)
    Q_DISABLE_COPY(CodePipelineClient)

};

QTAWS_END_NAMESPACE

#endif
