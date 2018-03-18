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

#ifndef QTAWS_INSPECTORCLIENT_H
#define QTAWS_INSPECTORCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace Inspector {

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
    AddAttributesToFindingsResponse * addAttributesToFindings(const AddAttributesToFindingsRequest &request);
    CreateAssessmentTargetResponse * createAssessmentTarget(const CreateAssessmentTargetRequest &request);
    CreateAssessmentTemplateResponse * createAssessmentTemplate(const CreateAssessmentTemplateRequest &request);
    CreateResourceGroupResponse * createResourceGroup(const CreateResourceGroupRequest &request);
    DeleteAssessmentRunResponse * deleteAssessmentRun(const DeleteAssessmentRunRequest &request);
    DeleteAssessmentTargetResponse * deleteAssessmentTarget(const DeleteAssessmentTargetRequest &request);
    DeleteAssessmentTemplateResponse * deleteAssessmentTemplate(const DeleteAssessmentTemplateRequest &request);
    DescribeAssessmentRunsResponse * describeAssessmentRuns(const DescribeAssessmentRunsRequest &request);
    DescribeAssessmentTargetsResponse * describeAssessmentTargets(const DescribeAssessmentTargetsRequest &request);
    DescribeAssessmentTemplatesResponse * describeAssessmentTemplates(const DescribeAssessmentTemplatesRequest &request);
    DescribeCrossAccountAccessRoleResponse * describeCrossAccountAccessRole();
    DescribeFindingsResponse * describeFindings(const DescribeFindingsRequest &request);
    DescribeResourceGroupsResponse * describeResourceGroups(const DescribeResourceGroupsRequest &request);
    DescribeRulesPackagesResponse * describeRulesPackages(const DescribeRulesPackagesRequest &request);
    GetAssessmentReportResponse * getAssessmentReport(const GetAssessmentReportRequest &request);
    GetTelemetryMetadataResponse * getTelemetryMetadata(const GetTelemetryMetadataRequest &request);
    ListAssessmentRunAgentsResponse * listAssessmentRunAgents(const ListAssessmentRunAgentsRequest &request);
    ListAssessmentRunsResponse * listAssessmentRuns(const ListAssessmentRunsRequest &request);
    ListAssessmentTargetsResponse * listAssessmentTargets(const ListAssessmentTargetsRequest &request);
    ListAssessmentTemplatesResponse * listAssessmentTemplates(const ListAssessmentTemplatesRequest &request);
    ListEventSubscriptionsResponse * listEventSubscriptions(const ListEventSubscriptionsRequest &request);
    ListFindingsResponse * listFindings(const ListFindingsRequest &request);
    ListRulesPackagesResponse * listRulesPackages(const ListRulesPackagesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PreviewAgentsResponse * previewAgents(const PreviewAgentsRequest &request);
    RegisterCrossAccountAccessRoleResponse * registerCrossAccountAccessRole(const RegisterCrossAccountAccessRoleRequest &request);
    RemoveAttributesFromFindingsResponse * removeAttributesFromFindings(const RemoveAttributesFromFindingsRequest &request);
    SetTagsForResourceResponse * setTagsForResource(const SetTagsForResourceRequest &request);
    StartAssessmentRunResponse * startAssessmentRun(const StartAssessmentRunRequest &request);
    StopAssessmentRunResponse * stopAssessmentRun(const StopAssessmentRunRequest &request);
    SubscribeToEventResponse * subscribeToEvent(const SubscribeToEventRequest &request);
    UnsubscribeFromEventResponse * unsubscribeFromEvent(const UnsubscribeFromEventRequest &request);
    UpdateAssessmentTargetResponse * updateAssessmentTarget(const UpdateAssessmentTargetRequest &request);

private:
    Q_DECLARE_PRIVATE(InspectorClient)
    Q_DISABLE_COPY(InspectorClient)

};

} // namespace Inspector
} // namespace AWS

#endif
