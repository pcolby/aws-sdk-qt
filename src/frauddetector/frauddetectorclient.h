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

#ifndef QTAWS_FRAUDDETECTORCLIENT_H
#define QTAWS_FRAUDDETECTORCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfrauddetectorglobal.h"

class QNetworkReply;

namespace QtAws {
namespace FraudDetector {

class FraudDetectorClientPrivate;
class BatchCreateVariableRequest;
class BatchCreateVariableResponse;
class BatchGetVariableRequest;
class BatchGetVariableResponse;
class CancelBatchPredictionJobRequest;
class CancelBatchPredictionJobResponse;
class CreateBatchPredictionJobRequest;
class CreateBatchPredictionJobResponse;
class CreateDetectorVersionRequest;
class CreateDetectorVersionResponse;
class CreateModelRequest;
class CreateModelResponse;
class CreateModelVersionRequest;
class CreateModelVersionResponse;
class CreateRuleRequest;
class CreateRuleResponse;
class CreateVariableRequest;
class CreateVariableResponse;
class DeleteBatchPredictionJobRequest;
class DeleteBatchPredictionJobResponse;
class DeleteDetectorRequest;
class DeleteDetectorResponse;
class DeleteDetectorVersionRequest;
class DeleteDetectorVersionResponse;
class DeleteEntityTypeRequest;
class DeleteEntityTypeResponse;
class DeleteEventRequest;
class DeleteEventResponse;
class DeleteEventTypeRequest;
class DeleteEventTypeResponse;
class DeleteExternalModelRequest;
class DeleteExternalModelResponse;
class DeleteLabelRequest;
class DeleteLabelResponse;
class DeleteModelRequest;
class DeleteModelResponse;
class DeleteModelVersionRequest;
class DeleteModelVersionResponse;
class DeleteOutcomeRequest;
class DeleteOutcomeResponse;
class DeleteRuleRequest;
class DeleteRuleResponse;
class DeleteVariableRequest;
class DeleteVariableResponse;
class DescribeDetectorRequest;
class DescribeDetectorResponse;
class DescribeModelVersionsRequest;
class DescribeModelVersionsResponse;
class GetBatchPredictionJobsRequest;
class GetBatchPredictionJobsResponse;
class GetDetectorVersionRequest;
class GetDetectorVersionResponse;
class GetDetectorsRequest;
class GetDetectorsResponse;
class GetEntityTypesRequest;
class GetEntityTypesResponse;
class GetEventPredictionRequest;
class GetEventPredictionResponse;
class GetEventTypesRequest;
class GetEventTypesResponse;
class GetExternalModelsRequest;
class GetExternalModelsResponse;
class GetKMSEncryptionKeyRequest;
class GetKMSEncryptionKeyResponse;
class GetLabelsRequest;
class GetLabelsResponse;
class GetModelVersionRequest;
class GetModelVersionResponse;
class GetModelsRequest;
class GetModelsResponse;
class GetOutcomesRequest;
class GetOutcomesResponse;
class GetRulesRequest;
class GetRulesResponse;
class GetVariablesRequest;
class GetVariablesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutDetectorRequest;
class PutDetectorResponse;
class PutEntityTypeRequest;
class PutEntityTypeResponse;
class PutEventTypeRequest;
class PutEventTypeResponse;
class PutExternalModelRequest;
class PutExternalModelResponse;
class PutKMSEncryptionKeyRequest;
class PutKMSEncryptionKeyResponse;
class PutLabelRequest;
class PutLabelResponse;
class PutOutcomeRequest;
class PutOutcomeResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDetectorVersionRequest;
class UpdateDetectorVersionResponse;
class UpdateDetectorVersionMetadataRequest;
class UpdateDetectorVersionMetadataResponse;
class UpdateDetectorVersionStatusRequest;
class UpdateDetectorVersionStatusResponse;
class UpdateModelRequest;
class UpdateModelResponse;
class UpdateModelVersionRequest;
class UpdateModelVersionResponse;
class UpdateModelVersionStatusRequest;
class UpdateModelVersionStatusResponse;
class UpdateRuleMetadataRequest;
class UpdateRuleMetadataResponse;
class UpdateRuleVersionRequest;
class UpdateRuleVersionResponse;
class UpdateVariableRequest;
class UpdateVariableResponse;

class QTAWSFRAUDDETECTOR_EXPORT FraudDetectorClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FraudDetectorClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit FraudDetectorClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchCreateVariableResponse * batchCreateVariable(const BatchCreateVariableRequest &request);
    BatchGetVariableResponse * batchGetVariable(const BatchGetVariableRequest &request);
    CancelBatchPredictionJobResponse * cancelBatchPredictionJob(const CancelBatchPredictionJobRequest &request);
    CreateBatchPredictionJobResponse * createBatchPredictionJob(const CreateBatchPredictionJobRequest &request);
    CreateDetectorVersionResponse * createDetectorVersion(const CreateDetectorVersionRequest &request);
    CreateModelResponse * createModel(const CreateModelRequest &request);
    CreateModelVersionResponse * createModelVersion(const CreateModelVersionRequest &request);
    CreateRuleResponse * createRule(const CreateRuleRequest &request);
    CreateVariableResponse * createVariable(const CreateVariableRequest &request);
    DeleteBatchPredictionJobResponse * deleteBatchPredictionJob(const DeleteBatchPredictionJobRequest &request);
    DeleteDetectorResponse * deleteDetector(const DeleteDetectorRequest &request);
    DeleteDetectorVersionResponse * deleteDetectorVersion(const DeleteDetectorVersionRequest &request);
    DeleteEntityTypeResponse * deleteEntityType(const DeleteEntityTypeRequest &request);
    DeleteEventResponse * deleteEvent(const DeleteEventRequest &request);
    DeleteEventTypeResponse * deleteEventType(const DeleteEventTypeRequest &request);
    DeleteExternalModelResponse * deleteExternalModel(const DeleteExternalModelRequest &request);
    DeleteLabelResponse * deleteLabel(const DeleteLabelRequest &request);
    DeleteModelResponse * deleteModel(const DeleteModelRequest &request);
    DeleteModelVersionResponse * deleteModelVersion(const DeleteModelVersionRequest &request);
    DeleteOutcomeResponse * deleteOutcome(const DeleteOutcomeRequest &request);
    DeleteRuleResponse * deleteRule(const DeleteRuleRequest &request);
    DeleteVariableResponse * deleteVariable(const DeleteVariableRequest &request);
    DescribeDetectorResponse * describeDetector(const DescribeDetectorRequest &request);
    DescribeModelVersionsResponse * describeModelVersions(const DescribeModelVersionsRequest &request);
    GetBatchPredictionJobsResponse * getBatchPredictionJobs(const GetBatchPredictionJobsRequest &request);
    GetDetectorVersionResponse * getDetectorVersion(const GetDetectorVersionRequest &request);
    GetDetectorsResponse * getDetectors(const GetDetectorsRequest &request);
    GetEntityTypesResponse * getEntityTypes(const GetEntityTypesRequest &request);
    GetEventPredictionResponse * getEventPrediction(const GetEventPredictionRequest &request);
    GetEventTypesResponse * getEventTypes(const GetEventTypesRequest &request);
    GetExternalModelsResponse * getExternalModels(const GetExternalModelsRequest &request);
    GetKMSEncryptionKeyResponse * getKMSEncryptionKey(const GetKMSEncryptionKeyRequest &request);
    GetKMSEncryptionKeyResponse * getKMSEncryptionKey();
    GetLabelsResponse * getLabels(const GetLabelsRequest &request);
    GetModelVersionResponse * getModelVersion(const GetModelVersionRequest &request);
    GetModelsResponse * getModels(const GetModelsRequest &request);
    GetOutcomesResponse * getOutcomes(const GetOutcomesRequest &request);
    GetRulesResponse * getRules(const GetRulesRequest &request);
    GetVariablesResponse * getVariables(const GetVariablesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutDetectorResponse * putDetector(const PutDetectorRequest &request);
    PutEntityTypeResponse * putEntityType(const PutEntityTypeRequest &request);
    PutEventTypeResponse * putEventType(const PutEventTypeRequest &request);
    PutExternalModelResponse * putExternalModel(const PutExternalModelRequest &request);
    PutKMSEncryptionKeyResponse * putKMSEncryptionKey(const PutKMSEncryptionKeyRequest &request);
    PutLabelResponse * putLabel(const PutLabelRequest &request);
    PutOutcomeResponse * putOutcome(const PutOutcomeRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDetectorVersionResponse * updateDetectorVersion(const UpdateDetectorVersionRequest &request);
    UpdateDetectorVersionMetadataResponse * updateDetectorVersionMetadata(const UpdateDetectorVersionMetadataRequest &request);
    UpdateDetectorVersionStatusResponse * updateDetectorVersionStatus(const UpdateDetectorVersionStatusRequest &request);
    UpdateModelResponse * updateModel(const UpdateModelRequest &request);
    UpdateModelVersionResponse * updateModelVersion(const UpdateModelVersionRequest &request);
    UpdateModelVersionStatusResponse * updateModelVersionStatus(const UpdateModelVersionStatusRequest &request);
    UpdateRuleMetadataResponse * updateRuleMetadata(const UpdateRuleMetadataRequest &request);
    UpdateRuleVersionResponse * updateRuleVersion(const UpdateRuleVersionRequest &request);
    UpdateVariableResponse * updateVariable(const UpdateVariableRequest &request);

protected:
    /// @cond internal
    FraudDetectorClientPrivate * const d_ptr; ///< Internal d-pointer.
    explicit FraudDetectorClient(FraudDetectorClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(FraudDetectorClient)
    Q_DISABLE_COPY(FraudDetectorClient)

};

} // namespace FraudDetector
} // namespace QtAws

#endif
