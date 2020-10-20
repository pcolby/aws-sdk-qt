/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_CLOUDFORMATIONCLIENT_H
#define QTAWS_CLOUDFORMATIONCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace CloudFormation {

class CloudFormationClientPrivate;
class CancelUpdateStackRequest;
class CancelUpdateStackResponse;
class ContinueUpdateRollbackRequest;
class ContinueUpdateRollbackResponse;
class CreateChangeSetRequest;
class CreateChangeSetResponse;
class CreateStackRequest;
class CreateStackResponse;
class CreateStackInstancesRequest;
class CreateStackInstancesResponse;
class CreateStackSetRequest;
class CreateStackSetResponse;
class DeleteChangeSetRequest;
class DeleteChangeSetResponse;
class DeleteStackRequest;
class DeleteStackResponse;
class DeleteStackInstancesRequest;
class DeleteStackInstancesResponse;
class DeleteStackSetRequest;
class DeleteStackSetResponse;
class DescribeAccountLimitsRequest;
class DescribeAccountLimitsResponse;
class DescribeChangeSetRequest;
class DescribeChangeSetResponse;
class DescribeStackDriftDetectionStatusRequest;
class DescribeStackDriftDetectionStatusResponse;
class DescribeStackEventsRequest;
class DescribeStackEventsResponse;
class DescribeStackInstanceRequest;
class DescribeStackInstanceResponse;
class DescribeStackResourceRequest;
class DescribeStackResourceResponse;
class DescribeStackResourceDriftsRequest;
class DescribeStackResourceDriftsResponse;
class DescribeStackResourcesRequest;
class DescribeStackResourcesResponse;
class DescribeStackSetRequest;
class DescribeStackSetResponse;
class DescribeStackSetOperationRequest;
class DescribeStackSetOperationResponse;
class DescribeStacksRequest;
class DescribeStacksResponse;
class DetectStackDriftRequest;
class DetectStackDriftResponse;
class DetectStackResourceDriftRequest;
class DetectStackResourceDriftResponse;
class EstimateTemplateCostRequest;
class EstimateTemplateCostResponse;
class ExecuteChangeSetRequest;
class ExecuteChangeSetResponse;
class GetStackPolicyRequest;
class GetStackPolicyResponse;
class GetTemplateRequest;
class GetTemplateResponse;
class GetTemplateSummaryRequest;
class GetTemplateSummaryResponse;
class ListChangeSetsRequest;
class ListChangeSetsResponse;
class ListExportsRequest;
class ListExportsResponse;
class ListImportsRequest;
class ListImportsResponse;
class ListStackInstancesRequest;
class ListStackInstancesResponse;
class ListStackResourcesRequest;
class ListStackResourcesResponse;
class ListStackSetOperationResultsRequest;
class ListStackSetOperationResultsResponse;
class ListStackSetOperationsRequest;
class ListStackSetOperationsResponse;
class ListStackSetsRequest;
class ListStackSetsResponse;
class ListStacksRequest;
class ListStacksResponse;
class SetStackPolicyRequest;
class SetStackPolicyResponse;
class SignalResourceRequest;
class SignalResourceResponse;
class StopStackSetOperationRequest;
class StopStackSetOperationResponse;
class UpdateStackRequest;
class UpdateStackResponse;
class UpdateStackInstancesRequest;
class UpdateStackInstancesResponse;
class UpdateStackSetRequest;
class UpdateStackSetResponse;
class UpdateTerminationProtectionRequest;
class UpdateTerminationProtectionResponse;
class ValidateTemplateRequest;
class ValidateTemplateResponse;

class QTAWS_EXPORT CloudFormationClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CloudFormationClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudFormationClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelUpdateStackResponse * cancelUpdateStack(const CancelUpdateStackRequest &request);
    ContinueUpdateRollbackResponse * continueUpdateRollback(const ContinueUpdateRollbackRequest &request);
    CreateChangeSetResponse * createChangeSet(const CreateChangeSetRequest &request);
    CreateStackResponse * createStack(const CreateStackRequest &request);
    CreateStackInstancesResponse * createStackInstances(const CreateStackInstancesRequest &request);
    CreateStackSetResponse * createStackSet(const CreateStackSetRequest &request);
    DeleteChangeSetResponse * deleteChangeSet(const DeleteChangeSetRequest &request);
    DeleteStackResponse * deleteStack(const DeleteStackRequest &request);
    DeleteStackInstancesResponse * deleteStackInstances(const DeleteStackInstancesRequest &request);
    DeleteStackSetResponse * deleteStackSet(const DeleteStackSetRequest &request);
    DescribeAccountLimitsResponse * describeAccountLimits(const DescribeAccountLimitsRequest &request);
    DescribeChangeSetResponse * describeChangeSet(const DescribeChangeSetRequest &request);
    DescribeStackDriftDetectionStatusResponse * describeStackDriftDetectionStatus(const DescribeStackDriftDetectionStatusRequest &request);
    DescribeStackEventsResponse * describeStackEvents(const DescribeStackEventsRequest &request);
    DescribeStackInstanceResponse * describeStackInstance(const DescribeStackInstanceRequest &request);
    DescribeStackResourceResponse * describeStackResource(const DescribeStackResourceRequest &request);
    DescribeStackResourceDriftsResponse * describeStackResourceDrifts(const DescribeStackResourceDriftsRequest &request);
    DescribeStackResourcesResponse * describeStackResources(const DescribeStackResourcesRequest &request);
    DescribeStackSetResponse * describeStackSet(const DescribeStackSetRequest &request);
    DescribeStackSetOperationResponse * describeStackSetOperation(const DescribeStackSetOperationRequest &request);
    DescribeStacksResponse * describeStacks(const DescribeStacksRequest &request);
    DetectStackDriftResponse * detectStackDrift(const DetectStackDriftRequest &request);
    DetectStackResourceDriftResponse * detectStackResourceDrift(const DetectStackResourceDriftRequest &request);
    EstimateTemplateCostResponse * estimateTemplateCost(const EstimateTemplateCostRequest &request);
    ExecuteChangeSetResponse * executeChangeSet(const ExecuteChangeSetRequest &request);
    GetStackPolicyResponse * getStackPolicy(const GetStackPolicyRequest &request);
    GetTemplateResponse * getTemplate(const GetTemplateRequest &request);
    GetTemplateSummaryResponse * getTemplateSummary(const GetTemplateSummaryRequest &request);
    ListChangeSetsResponse * listChangeSets(const ListChangeSetsRequest &request);
    ListExportsResponse * listExports(const ListExportsRequest &request);
    ListImportsResponse * listImports(const ListImportsRequest &request);
    ListStackInstancesResponse * listStackInstances(const ListStackInstancesRequest &request);
    ListStackResourcesResponse * listStackResources(const ListStackResourcesRequest &request);
    ListStackSetOperationResultsResponse * listStackSetOperationResults(const ListStackSetOperationResultsRequest &request);
    ListStackSetOperationsResponse * listStackSetOperations(const ListStackSetOperationsRequest &request);
    ListStackSetsResponse * listStackSets(const ListStackSetsRequest &request);
    ListStacksResponse * listStacks(const ListStacksRequest &request);
    SetStackPolicyResponse * setStackPolicy(const SetStackPolicyRequest &request);
    SignalResourceResponse * signalResource(const SignalResourceRequest &request);
    StopStackSetOperationResponse * stopStackSetOperation(const StopStackSetOperationRequest &request);
    UpdateStackResponse * updateStack(const UpdateStackRequest &request);
    UpdateStackInstancesResponse * updateStackInstances(const UpdateStackInstancesRequest &request);
    UpdateStackSetResponse * updateStackSet(const UpdateStackSetRequest &request);
    UpdateTerminationProtectionResponse * updateTerminationProtection(const UpdateTerminationProtectionRequest &request);
    ValidateTemplateResponse * validateTemplate(const ValidateTemplateRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudFormationClient)
    Q_DISABLE_COPY(CloudFormationClient)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
