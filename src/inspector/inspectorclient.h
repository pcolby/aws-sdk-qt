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

#ifndef QTAWS_INSPECTORCLIENT_H
#define QTAWS_INSPECTORCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class InspectorClientPrivate;

class QTAWS_EXPORT InspectorClient : public AwsAbstractClient {
    Q_OBJECT

public:
    InspectorClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    InspectorClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    InspectorAddAttributesToFindingsResponse * addAttributesToFindings(const InspectorAddAttributesToFindingsRequest &request);
    InspectorCreateAssessmentTargetResponse * createAssessmentTarget(const InspectorCreateAssessmentTargetRequest &request);
    InspectorCreateAssessmentTemplateResponse * createAssessmentTemplate(const InspectorCreateAssessmentTemplateRequest &request);
    InspectorCreateResourceGroupResponse * createResourceGroup(const InspectorCreateResourceGroupRequest &request);
    InspectorDeleteAssessmentRunResponse * deleteAssessmentRun(const InspectorDeleteAssessmentRunRequest &request);
    InspectorDeleteAssessmentTargetResponse * deleteAssessmentTarget(const InspectorDeleteAssessmentTargetRequest &request);
    InspectorDeleteAssessmentTemplateResponse * deleteAssessmentTemplate(const InspectorDeleteAssessmentTemplateRequest &request);
    InspectorDescribeAssessmentRunsResponse * describeAssessmentRuns(const InspectorDescribeAssessmentRunsRequest &request);
    InspectorDescribeAssessmentTargetsResponse * describeAssessmentTargets(const InspectorDescribeAssessmentTargetsRequest &request);
    InspectorDescribeAssessmentTemplatesResponse * describeAssessmentTemplates(const InspectorDescribeAssessmentTemplatesRequest &request);
    InspectorDescribeCrossAccountAccessRoleResponse * describeCrossAccountAccessRole();
    InspectorDescribeFindingsResponse * describeFindings(const InspectorDescribeFindingsRequest &request);
    InspectorDescribeResourceGroupsResponse * describeResourceGroups(const InspectorDescribeResourceGroupsRequest &request);
    InspectorDescribeRulesPackagesResponse * describeRulesPackages(const InspectorDescribeRulesPackagesRequest &request);
    InspectorGetTelemetryMetadataResponse * getTelemetryMetadata(const InspectorGetTelemetryMetadataRequest &request);
    InspectorListAssessmentRunAgentsResponse * listAssessmentRunAgents(const InspectorListAssessmentRunAgentsRequest &request);
    InspectorListAssessmentRunsResponse * listAssessmentRuns(const InspectorListAssessmentRunsRequest &request);
    InspectorListAssessmentTargetsResponse * listAssessmentTargets(const InspectorListAssessmentTargetsRequest &request);
    InspectorListAssessmentTemplatesResponse * listAssessmentTemplates(const InspectorListAssessmentTemplatesRequest &request);
    InspectorListEventSubscriptionsResponse * listEventSubscriptions(const InspectorListEventSubscriptionsRequest &request);
    InspectorListFindingsResponse * listFindings(const InspectorListFindingsRequest &request);
    InspectorListRulesPackagesResponse * listRulesPackages(const InspectorListRulesPackagesRequest &request);
    InspectorListTagsForResourceResponse * listTagsForResource(const InspectorListTagsForResourceRequest &request);
    InspectorPreviewAgentsResponse * previewAgents(const InspectorPreviewAgentsRequest &request);
    InspectorRegisterCrossAccountAccessRoleResponse * registerCrossAccountAccessRole(const InspectorRegisterCrossAccountAccessRoleRequest &request);
    InspectorRemoveAttributesFromFindingsResponse * removeAttributesFromFindings(const InspectorRemoveAttributesFromFindingsRequest &request);
    InspectorSetTagsForResourceResponse * setTagsForResource(const InspectorSetTagsForResourceRequest &request);
    InspectorStartAssessmentRunResponse * startAssessmentRun(const InspectorStartAssessmentRunRequest &request);
    InspectorStopAssessmentRunResponse * stopAssessmentRun(const InspectorStopAssessmentRunRequest &request);
    InspectorSubscribeToEventResponse * subscribeToEvent(const InspectorSubscribeToEventRequest &request);
    InspectorUnsubscribeFromEventResponse * unsubscribeFromEvent(const InspectorUnsubscribeFromEventRequest &request);
    InspectorUpdateAssessmentTargetResponse * updateAssessmentTarget(const InspectorUpdateAssessmentTargetRequest &request);

private:
    Q_DECLARE_PRIVATE(InspectorClient)
    Q_DISABLE_COPY(InspectorClient)

};

QTAWS_END_NAMESPACE

#endif
