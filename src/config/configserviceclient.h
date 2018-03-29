/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_CONFIGSERVICECLIENT_H
#define QTAWS_CONFIGSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class QtAws::Core::AwsAbstractClient;
class QtAws::Core::AwsAbstractCredentials;

namespace QtAws {
namespace ConfigService {

class ConfigServiceClientPrivate;
class BatchGetResourceConfigRequest;
class BatchGetResourceConfigResponse;
class DeleteConfigRuleRequest;
class DeleteConfigRuleResponse;
class DeleteConfigurationRecorderRequest;
class DeleteConfigurationRecorderResponse;
class DeleteDeliveryChannelRequest;
class DeleteDeliveryChannelResponse;
class DeleteEvaluationResultsRequest;
class DeleteEvaluationResultsResponse;
class DeliverConfigSnapshotRequest;
class DeliverConfigSnapshotResponse;
class DescribeComplianceByConfigRuleRequest;
class DescribeComplianceByConfigRuleResponse;
class DescribeComplianceByResourceRequest;
class DescribeComplianceByResourceResponse;
class DescribeConfigRuleEvaluationStatusRequest;
class DescribeConfigRuleEvaluationStatusResponse;
class DescribeConfigRulesRequest;
class DescribeConfigRulesResponse;
class DescribeConfigurationRecorderStatusRequest;
class DescribeConfigurationRecorderStatusResponse;
class DescribeConfigurationRecordersRequest;
class DescribeConfigurationRecordersResponse;
class DescribeDeliveryChannelStatusRequest;
class DescribeDeliveryChannelStatusResponse;
class DescribeDeliveryChannelsRequest;
class DescribeDeliveryChannelsResponse;
class GetComplianceDetailsByConfigRuleRequest;
class GetComplianceDetailsByConfigRuleResponse;
class GetComplianceDetailsByResourceRequest;
class GetComplianceDetailsByResourceResponse;
class GetComplianceSummaryByConfigRuleResponse;
class GetComplianceSummaryByResourceTypeRequest;
class GetComplianceSummaryByResourceTypeResponse;
class GetDiscoveredResourceCountsRequest;
class GetDiscoveredResourceCountsResponse;
class GetResourceConfigHistoryRequest;
class GetResourceConfigHistoryResponse;
class ListDiscoveredResourcesRequest;
class ListDiscoveredResourcesResponse;
class PutConfigRuleRequest;
class PutConfigRuleResponse;
class PutConfigurationRecorderRequest;
class PutConfigurationRecorderResponse;
class PutDeliveryChannelRequest;
class PutDeliveryChannelResponse;
class PutEvaluationsRequest;
class PutEvaluationsResponse;
class StartConfigRulesEvaluationRequest;
class StartConfigRulesEvaluationResponse;
class StartConfigurationRecorderRequest;
class StartConfigurationRecorderResponse;
class StopConfigurationRecorderRequest;
class StopConfigurationRecorderResponse;

class QTAWS_EXPORT ConfigServiceClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ConfigServiceClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ConfigServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetResourceConfigResponse * batchGetResourceConfig(const BatchGetResourceConfigRequest &request);
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
} // namespace QtAws

#endif
