// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_XRAYCLIENT_H
#define QTAWS_XRAYCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsxrayglobal.h"

class QNetworkReply;

namespace QtAws {
namespace XRay {

class XRayClientPrivate;
class BatchGetTracesRequest;
class BatchGetTracesResponse;
class CreateGroupRequest;
class CreateGroupResponse;
class CreateSamplingRuleRequest;
class CreateSamplingRuleResponse;
class DeleteGroupRequest;
class DeleteGroupResponse;
class DeleteSamplingRuleRequest;
class DeleteSamplingRuleResponse;
class GetEncryptionConfigRequest;
class GetEncryptionConfigResponse;
class GetGroupRequest;
class GetGroupResponse;
class GetGroupsRequest;
class GetGroupsResponse;
class GetInsightRequest;
class GetInsightResponse;
class GetInsightEventsRequest;
class GetInsightEventsResponse;
class GetInsightImpactGraphRequest;
class GetInsightImpactGraphResponse;
class GetInsightSummariesRequest;
class GetInsightSummariesResponse;
class GetSamplingRulesRequest;
class GetSamplingRulesResponse;
class GetSamplingStatisticSummariesRequest;
class GetSamplingStatisticSummariesResponse;
class GetSamplingTargetsRequest;
class GetSamplingTargetsResponse;
class GetServiceGraphRequest;
class GetServiceGraphResponse;
class GetTimeSeriesServiceStatisticsRequest;
class GetTimeSeriesServiceStatisticsResponse;
class GetTraceGraphRequest;
class GetTraceGraphResponse;
class GetTraceSummariesRequest;
class GetTraceSummariesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutEncryptionConfigRequest;
class PutEncryptionConfigResponse;
class PutTelemetryRecordsRequest;
class PutTelemetryRecordsResponse;
class PutTraceSegmentsRequest;
class PutTraceSegmentsResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateGroupRequest;
class UpdateGroupResponse;
class UpdateSamplingRuleRequest;
class UpdateSamplingRuleResponse;

class QTAWSXRAY_EXPORT XRayClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    XRayClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit XRayClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetTracesResponse * batchGetTraces(const BatchGetTracesRequest &request);
    CreateGroupResponse * createGroup(const CreateGroupRequest &request);
    CreateSamplingRuleResponse * createSamplingRule(const CreateSamplingRuleRequest &request);
    DeleteGroupResponse * deleteGroup(const DeleteGroupRequest &request);
    DeleteSamplingRuleResponse * deleteSamplingRule(const DeleteSamplingRuleRequest &request);
    GetEncryptionConfigResponse * getEncryptionConfig(const GetEncryptionConfigRequest &request);
    GetGroupResponse * getGroup(const GetGroupRequest &request);
    GetGroupsResponse * getGroups(const GetGroupsRequest &request);
    GetInsightResponse * getInsight(const GetInsightRequest &request);
    GetInsightEventsResponse * getInsightEvents(const GetInsightEventsRequest &request);
    GetInsightImpactGraphResponse * getInsightImpactGraph(const GetInsightImpactGraphRequest &request);
    GetInsightSummariesResponse * getInsightSummaries(const GetInsightSummariesRequest &request);
    GetSamplingRulesResponse * getSamplingRules(const GetSamplingRulesRequest &request);
    GetSamplingStatisticSummariesResponse * getSamplingStatisticSummaries(const GetSamplingStatisticSummariesRequest &request);
    GetSamplingTargetsResponse * getSamplingTargets(const GetSamplingTargetsRequest &request);
    GetServiceGraphResponse * getServiceGraph(const GetServiceGraphRequest &request);
    GetTimeSeriesServiceStatisticsResponse * getTimeSeriesServiceStatistics(const GetTimeSeriesServiceStatisticsRequest &request);
    GetTraceGraphResponse * getTraceGraph(const GetTraceGraphRequest &request);
    GetTraceSummariesResponse * getTraceSummaries(const GetTraceSummariesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutEncryptionConfigResponse * putEncryptionConfig(const PutEncryptionConfigRequest &request);
    PutTelemetryRecordsResponse * putTelemetryRecords(const PutTelemetryRecordsRequest &request);
    PutTraceSegmentsResponse * putTraceSegments(const PutTraceSegmentsRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateSamplingRuleResponse * updateSamplingRule(const UpdateSamplingRuleRequest &request);

private:
    Q_DECLARE_PRIVATE(XRayClient)
    Q_DISABLE_COPY(XRayClient)

};

} // namespace XRay
} // namespace QtAws

#endif
