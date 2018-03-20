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

#ifndef QTAWS_CODEPIPELINECLIENT_H
#define QTAWS_CODEPIPELINECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace CodePipeline {

class CodePipelineClientPrivate;
class AcknowledgeJobResponse;
class AcknowledgeThirdPartyJobResponse;
class CreateCustomActionTypeResponse;
class CreatePipelineResponse;
class DeleteCustomActionTypeResponse;
class DeletePipelineResponse;
class DisableStageTransitionResponse;
class EnableStageTransitionResponse;
class GetJobDetailsResponse;
class GetPipelineResponse;
class GetPipelineExecutionResponse;
class GetPipelineStateResponse;
class GetThirdPartyJobDetailsResponse;
class ListActionTypesResponse;
class ListPipelineExecutionsResponse;
class ListPipelinesResponse;
class PollForJobsResponse;
class PollForThirdPartyJobsResponse;
class PutActionRevisionResponse;
class PutApprovalResultResponse;
class PutJobFailureResultResponse;
class PutJobSuccessResultResponse;
class PutThirdPartyJobFailureResultResponse;
class PutThirdPartyJobSuccessResultResponse;
class RetryStageExecutionResponse;
class StartPipelineExecutionResponse;
class UpdatePipelineResponse;

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
    AcknowledgeJobResponse * acknowledgeJob(const AcknowledgeJobRequest &request);
    AcknowledgeThirdPartyJobResponse * acknowledgeThirdPartyJob(const AcknowledgeThirdPartyJobRequest &request);
    CreateCustomActionTypeResponse * createCustomActionType(const CreateCustomActionTypeRequest &request);
    CreatePipelineResponse * createPipeline(const CreatePipelineRequest &request);
    DeleteCustomActionTypeResponse * deleteCustomActionType(const DeleteCustomActionTypeRequest &request);
    DeletePipelineResponse * deletePipeline(const DeletePipelineRequest &request);
    DisableStageTransitionResponse * disableStageTransition(const DisableStageTransitionRequest &request);
    EnableStageTransitionResponse * enableStageTransition(const EnableStageTransitionRequest &request);
    GetJobDetailsResponse * getJobDetails(const GetJobDetailsRequest &request);
    GetPipelineResponse * getPipeline(const GetPipelineRequest &request);
    GetPipelineExecutionResponse * getPipelineExecution(const GetPipelineExecutionRequest &request);
    GetPipelineStateResponse * getPipelineState(const GetPipelineStateRequest &request);
    GetThirdPartyJobDetailsResponse * getThirdPartyJobDetails(const GetThirdPartyJobDetailsRequest &request);
    ListActionTypesResponse * listActionTypes(const ListActionTypesRequest &request);
    ListPipelineExecutionsResponse * listPipelineExecutions(const ListPipelineExecutionsRequest &request);
    ListPipelinesResponse * listPipelines(const ListPipelinesRequest &request);
    PollForJobsResponse * pollForJobs(const PollForJobsRequest &request);
    PollForThirdPartyJobsResponse * pollForThirdPartyJobs(const PollForThirdPartyJobsRequest &request);
    PutActionRevisionResponse * putActionRevision(const PutActionRevisionRequest &request);
    PutApprovalResultResponse * putApprovalResult(const PutApprovalResultRequest &request);
    PutJobFailureResultResponse * putJobFailureResult(const PutJobFailureResultRequest &request);
    PutJobSuccessResultResponse * putJobSuccessResult(const PutJobSuccessResultRequest &request);
    PutThirdPartyJobFailureResultResponse * putThirdPartyJobFailureResult(const PutThirdPartyJobFailureResultRequest &request);
    PutThirdPartyJobSuccessResultResponse * putThirdPartyJobSuccessResult(const PutThirdPartyJobSuccessResultRequest &request);
    RetryStageExecutionResponse * retryStageExecution(const RetryStageExecutionRequest &request);
    StartPipelineExecutionResponse * startPipelineExecution(const StartPipelineExecutionRequest &request);
    UpdatePipelineResponse * updatePipeline(const UpdatePipelineRequest &request);

private:
    Q_DECLARE_PRIVATE(CodePipelineClient)
    Q_DISABLE_COPY(CodePipelineClient)

};

} // namespace CodePipeline
} // namespace AWS

#endif
