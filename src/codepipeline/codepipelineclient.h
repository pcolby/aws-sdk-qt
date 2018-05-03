/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_CODEPIPELINECLIENT_H
#define QTAWS_CODEPIPELINECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CodePipeline {

class CodePipelineClientPrivate;
class AcknowledgeJobRequest;
class AcknowledgeJobResponse;
class AcknowledgeThirdPartyJobRequest;
class AcknowledgeThirdPartyJobResponse;
class CreateCustomActionTypeRequest;
class CreateCustomActionTypeResponse;
class CreatePipelineRequest;
class CreatePipelineResponse;
class DeleteCustomActionTypeRequest;
class DeleteCustomActionTypeResponse;
class DeletePipelineRequest;
class DeletePipelineResponse;
class DeleteWebhookRequest;
class DeleteWebhookResponse;
class DeregisterWebhookWithThirdPartyRequest;
class DeregisterWebhookWithThirdPartyResponse;
class DisableStageTransitionRequest;
class DisableStageTransitionResponse;
class EnableStageTransitionRequest;
class EnableStageTransitionResponse;
class GetJobDetailsRequest;
class GetJobDetailsResponse;
class GetPipelineRequest;
class GetPipelineResponse;
class GetPipelineExecutionRequest;
class GetPipelineExecutionResponse;
class GetPipelineStateRequest;
class GetPipelineStateResponse;
class GetThirdPartyJobDetailsRequest;
class GetThirdPartyJobDetailsResponse;
class ListActionTypesRequest;
class ListActionTypesResponse;
class ListPipelineExecutionsRequest;
class ListPipelineExecutionsResponse;
class ListPipelinesRequest;
class ListPipelinesResponse;
class ListWebhooksRequest;
class ListWebhooksResponse;
class PollForJobsRequest;
class PollForJobsResponse;
class PollForThirdPartyJobsRequest;
class PollForThirdPartyJobsResponse;
class PutActionRevisionRequest;
class PutActionRevisionResponse;
class PutApprovalResultRequest;
class PutApprovalResultResponse;
class PutJobFailureResultRequest;
class PutJobFailureResultResponse;
class PutJobSuccessResultRequest;
class PutJobSuccessResultResponse;
class PutThirdPartyJobFailureResultRequest;
class PutThirdPartyJobFailureResultResponse;
class PutThirdPartyJobSuccessResultRequest;
class PutThirdPartyJobSuccessResultResponse;
class PutWebhookRequest;
class PutWebhookResponse;
class RegisterWebhookWithThirdPartyRequest;
class RegisterWebhookWithThirdPartyResponse;
class RetryStageExecutionRequest;
class RetryStageExecutionResponse;
class StartPipelineExecutionRequest;
class StartPipelineExecutionResponse;
class UpdatePipelineRequest;
class UpdatePipelineResponse;

class QTAWS_EXPORT CodePipelineClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CodePipelineClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CodePipelineClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AcknowledgeJobResponse * acknowledgeJob(const AcknowledgeJobRequest &request);
    AcknowledgeThirdPartyJobResponse * acknowledgeThirdPartyJob(const AcknowledgeThirdPartyJobRequest &request);
    CreateCustomActionTypeResponse * createCustomActionType(const CreateCustomActionTypeRequest &request);
    CreatePipelineResponse * createPipeline(const CreatePipelineRequest &request);
    DeleteCustomActionTypeResponse * deleteCustomActionType(const DeleteCustomActionTypeRequest &request);
    DeletePipelineResponse * deletePipeline(const DeletePipelineRequest &request);
    DeleteWebhookResponse * deleteWebhook(const DeleteWebhookRequest &request);
    DeregisterWebhookWithThirdPartyResponse * deregisterWebhookWithThirdParty(const DeregisterWebhookWithThirdPartyRequest &request);
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
    ListWebhooksResponse * listWebhooks(const ListWebhooksRequest &request);
    PollForJobsResponse * pollForJobs(const PollForJobsRequest &request);
    PollForThirdPartyJobsResponse * pollForThirdPartyJobs(const PollForThirdPartyJobsRequest &request);
    PutActionRevisionResponse * putActionRevision(const PutActionRevisionRequest &request);
    PutApprovalResultResponse * putApprovalResult(const PutApprovalResultRequest &request);
    PutJobFailureResultResponse * putJobFailureResult(const PutJobFailureResultRequest &request);
    PutJobSuccessResultResponse * putJobSuccessResult(const PutJobSuccessResultRequest &request);
    PutThirdPartyJobFailureResultResponse * putThirdPartyJobFailureResult(const PutThirdPartyJobFailureResultRequest &request);
    PutThirdPartyJobSuccessResultResponse * putThirdPartyJobSuccessResult(const PutThirdPartyJobSuccessResultRequest &request);
    PutWebhookResponse * putWebhook(const PutWebhookRequest &request);
    RegisterWebhookWithThirdPartyResponse * registerWebhookWithThirdParty(const RegisterWebhookWithThirdPartyRequest &request);
    RetryStageExecutionResponse * retryStageExecution(const RetryStageExecutionRequest &request);
    StartPipelineExecutionResponse * startPipelineExecution(const StartPipelineExecutionRequest &request);
    UpdatePipelineResponse * updatePipeline(const UpdatePipelineRequest &request);

private:
    Q_DECLARE_PRIVATE(CodePipelineClient)
    Q_DISABLE_COPY(CodePipelineClient)

};

} // namespace CodePipeline
} // namespace QtAws

#endif
