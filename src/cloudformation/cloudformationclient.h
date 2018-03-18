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

#ifndef QTAWS_CLOUDFORMATIONCLIENT_H
#define QTAWS_CLOUDFORMATIONCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace CloudFormation {

class CloudFormationClientPrivate;

class QTAWS_EXPORT CloudFormationClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CloudFormationClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CloudFormationClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
    DescribeStackEventsResponse * describeStackEvents(const DescribeStackEventsRequest &request);
    DescribeStackInstanceResponse * describeStackInstance(const DescribeStackInstanceRequest &request);
    DescribeStackResourceResponse * describeStackResource(const DescribeStackResourceRequest &request);
    DescribeStackResourcesResponse * describeStackResources(const DescribeStackResourcesRequest &request);
    DescribeStackSetResponse * describeStackSet(const DescribeStackSetRequest &request);
    DescribeStackSetOperationResponse * describeStackSetOperation(const DescribeStackSetOperationRequest &request);
    DescribeStacksResponse * describeStacks(const DescribeStacksRequest &request);
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
} // namespace AWS

#endif
