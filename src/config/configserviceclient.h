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

#ifndef QTAWS_CONFIGSERVICECLIENT_H
#define QTAWS_CONFIGSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace ConfigService {

class ConfigServiceClientPrivate;
class DeleteConfigRuleResponse;
class DeleteConfigurationRecorderResponse;
class DeleteDeliveryChannelResponse;
class DeleteEvaluationResultsResponse;
class DeliverConfigSnapshotResponse;
class DescribeComplianceByConfigRuleResponse;
class DescribeComplianceByResourceResponse;
class DescribeConfigRuleEvaluationStatusResponse;
class DescribeConfigRulesResponse;
class DescribeConfigurationRecorderStatusResponse;
class DescribeConfigurationRecordersResponse;
class DescribeDeliveryChannelStatusResponse;
class DescribeDeliveryChannelsResponse;
class GetComplianceDetailsByConfigRuleResponse;
class GetComplianceDetailsByResourceResponse;
class GetComplianceSummaryByConfigRuleResponse;
class GetComplianceSummaryByResourceTypeResponse;
class GetDiscoveredResourceCountsResponse;
class GetResourceConfigHistoryResponse;
class ListDiscoveredResourcesResponse;
class PutConfigRuleResponse;
class PutConfigurationRecorderResponse;
class PutDeliveryChannelResponse;
class PutEvaluationsResponse;
class StartConfigRulesEvaluationResponse;
class StartConfigurationRecorderResponse;
class StopConfigurationRecorderResponse;

class QTAWS_EXPORT ConfigServiceClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ConfigServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ConfigServiceClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    DeleteConfigRuleResponse * deleteConfigRule(const DeleteConfigRuleRequest &request);
    DeleteConfigurationRecorderResponse * deleteConfigurationRecorder(const DeleteConfigurationRecorderRequest &request);
    DeleteDeliveryChannelResponse * deleteDeliveryChannel(const DeleteDeliveryChannelRequest &request);
    DeleteEvaluationResultsResponse * deleteEvaluationResults(const DeleteEvaluationResultsRequest &request);
    DeliverConfigSnapshotResponse * deliverConfigSnapshot(const DeliverConfigSnapshotRequest &request);
    DescribeComplianceByConfigRuleResponse * describeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest &request);
    DescribeComplianceByResourceResponse * describeComplianceByResource(const DescribeComplianceByResourceRequest &request);
    DescribeConfigRuleEvaluationStatusResponse * describeConfigRuleEvaluationStatus(const DescribeConfigRuleEvaluationStatusRequest &request);
    DescribeConfigRulesResponse * describeConfigRules(const DescribeConfigRulesRequest &request);
    DescribeConfigurationRecorderStatusResponse * describeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest &request);
    DescribeConfigurationRecordersResponse * describeConfigurationRecorders(const DescribeConfigurationRecordersRequest &request);
    DescribeDeliveryChannelStatusResponse * describeDeliveryChannelStatus(const DescribeDeliveryChannelStatusRequest &request);
    DescribeDeliveryChannelsResponse * describeDeliveryChannels(const DescribeDeliveryChannelsRequest &request);
    GetComplianceDetailsByConfigRuleResponse * getComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest &request);
    GetComplianceDetailsByResourceResponse * getComplianceDetailsByResource(const GetComplianceDetailsByResourceRequest &request);
    GetComplianceSummaryByConfigRuleResponse * getComplianceSummaryByConfigRule();
    GetComplianceSummaryByResourceTypeResponse * getComplianceSummaryByResourceType(const GetComplianceSummaryByResourceTypeRequest &request);
    GetDiscoveredResourceCountsResponse * getDiscoveredResourceCounts(const GetDiscoveredResourceCountsRequest &request);
    GetResourceConfigHistoryResponse * getResourceConfigHistory(const GetResourceConfigHistoryRequest &request);
    ListDiscoveredResourcesResponse * listDiscoveredResources(const ListDiscoveredResourcesRequest &request);
    PutConfigRuleResponse * putConfigRule(const PutConfigRuleRequest &request);
    PutConfigurationRecorderResponse * putConfigurationRecorder(const PutConfigurationRecorderRequest &request);
    PutDeliveryChannelResponse * putDeliveryChannel(const PutDeliveryChannelRequest &request);
    PutEvaluationsResponse * putEvaluations(const PutEvaluationsRequest &request);
    StartConfigRulesEvaluationResponse * startConfigRulesEvaluation(const StartConfigRulesEvaluationRequest &request);
    StartConfigurationRecorderResponse * startConfigurationRecorder(const StartConfigurationRecorderRequest &request);
    StopConfigurationRecorderResponse * stopConfigurationRecorder(const StopConfigurationRecorderRequest &request);

private:
    Q_DECLARE_PRIVATE(ConfigServiceClient)
    Q_DISABLE_COPY(ConfigServiceClient)

};

} // namespace ConfigService
} // namespace AWS

#endif
