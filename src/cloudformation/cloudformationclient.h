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

#ifndef QTAWS_CLOUDFORMATIONCLIENT_H
#define QTAWS_CLOUDFORMATIONCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    CloudFormationCancelUpdateStackResponse * cancelUpdateStack(const CloudFormationCancelUpdateStackRequest &request);
    CloudFormationContinueUpdateRollbackResponse * continueUpdateRollback(const CloudFormationContinueUpdateRollbackRequest &request);
    CloudFormationCreateChangeSetResponse * createChangeSet(const CloudFormationCreateChangeSetRequest &request);
    CloudFormationCreateStackResponse * createStack(const CloudFormationCreateStackRequest &request);
    CloudFormationDeleteChangeSetResponse * deleteChangeSet(const CloudFormationDeleteChangeSetRequest &request);
    CloudFormationDeleteStackResponse * deleteStack(const CloudFormationDeleteStackRequest &request);
    CloudFormationDescribeAccountLimitsResponse * describeAccountLimits(const CloudFormationDescribeAccountLimitsRequest &request);
    CloudFormationDescribeChangeSetResponse * describeChangeSet(const CloudFormationDescribeChangeSetRequest &request);
    CloudFormationDescribeStackEventsResponse * describeStackEvents(const CloudFormationDescribeStackEventsRequest &request);
    CloudFormationDescribeStackResourceResponse * describeStackResource(const CloudFormationDescribeStackResourceRequest &request);
    CloudFormationDescribeStackResourcesResponse * describeStackResources(const CloudFormationDescribeStackResourcesRequest &request);
    CloudFormationDescribeStacksResponse * describeStacks(const CloudFormationDescribeStacksRequest &request);
    CloudFormationEstimateTemplateCostResponse * estimateTemplateCost(const CloudFormationEstimateTemplateCostRequest &request);
    CloudFormationExecuteChangeSetResponse * executeChangeSet(const CloudFormationExecuteChangeSetRequest &request);
    CloudFormationGetStackPolicyResponse * getStackPolicy(const CloudFormationGetStackPolicyRequest &request);
    CloudFormationGetTemplateResponse * getTemplate(const CloudFormationGetTemplateRequest &request);
    CloudFormationGetTemplateSummaryResponse * getTemplateSummary(const CloudFormationGetTemplateSummaryRequest &request);
    CloudFormationListChangeSetsResponse * listChangeSets(const CloudFormationListChangeSetsRequest &request);
    CloudFormationListStackResourcesResponse * listStackResources(const CloudFormationListStackResourcesRequest &request);
    CloudFormationListStacksResponse * listStacks(const CloudFormationListStacksRequest &request);
    CloudFormationSetStackPolicyResponse * setStackPolicy(const CloudFormationSetStackPolicyRequest &request);
    CloudFormationSignalResourceResponse * signalResource(const CloudFormationSignalResourceRequest &request);
    CloudFormationUpdateStackResponse * updateStack(const CloudFormationUpdateStackRequest &request);
    CloudFormationValidateTemplateResponse * validateTemplate(const CloudFormationValidateTemplateRequest &request);

private:
    Q_DECLARE_PRIVATE(CloudFormationClient)
    Q_DISABLE_COPY(CloudFormationClient)

};

QTAWS_END_NAMESPACE

#endif
