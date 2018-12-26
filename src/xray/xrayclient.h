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

#ifndef QTAWS_XRAYCLIENT_H
#define QTAWS_XRAYCLIENT_H

#include "core/awsabstractclient.h"

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
class GetSamplingRulesRequest;
class GetSamplingRulesResponse;
class GetSamplingStatisticSummariesRequest;
class GetSamplingStatisticSummariesResponse;
class GetSamplingTargetsRequest;
class GetSamplingTargetsResponse;
class GetServiceGraphRequest;
class GetServiceGraphResponse;
class GetTraceGraphRequest;
class GetTraceGraphResponse;
class GetTraceSummariesRequest;
class GetTraceSummariesResponse;
class PutEncryptionConfigRequest;
class PutEncryptionConfigResponse;
class PutTelemetryRecordsRequest;
class PutTelemetryRecordsResponse;
class PutTraceSegmentsRequest;
class PutTraceSegmentsResponse;
class UpdateGroupRequest;
class UpdateGroupResponse;
class UpdateSamplingRuleRequest;
class UpdateSamplingRuleResponse;

class QTAWS_EXPORT XRayClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    XRayClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    XRayClient(
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
    GetSamplingRulesResponse * getSamplingRules(const GetSamplingRulesRequest &request);
    GetSamplingStatisticSummariesResponse * getSamplingStatisticSummaries(const GetSamplingStatisticSummariesRequest &request);
    GetSamplingTargetsResponse * getSamplingTargets(const GetSamplingTargetsRequest &request);
    GetServiceGraphResponse * getServiceGraph(const GetServiceGraphRequest &request);
    GetTraceGraphResponse * getTraceGraph(const GetTraceGraphRequest &request);
    GetTraceSummariesResponse * getTraceSummaries(const GetTraceSummariesRequest &request);
    PutEncryptionConfigResponse * putEncryptionConfig(const PutEncryptionConfigRequest &request);
    PutTelemetryRecordsResponse * putTelemetryRecords(const PutTelemetryRecordsRequest &request);
    PutTraceSegmentsResponse * putTraceSegments(const PutTraceSegmentsRequest &request);
    UpdateGroupResponse * updateGroup(const UpdateGroupRequest &request);
    UpdateSamplingRuleResponse * updateSamplingRule(const UpdateSamplingRuleRequest &request);

private:
    Q_DECLARE_PRIVATE(XRayClient)
    Q_DISABLE_COPY(XRayClient)

};

} // namespace XRay
} // namespace QtAws

#endif
