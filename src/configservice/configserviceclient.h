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

#ifndef QTAWS_CONFIGSERVICECLIENT_H
#define QTAWS_CONFIGSERVICECLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ConfigService {

class ConfigServiceClientPrivate;
class BatchGetResourceConfigRequest;
class BatchGetResourceConfigResponse;
class DeleteAggregationAuthorizationRequest;
class DeleteAggregationAuthorizationResponse;
class DeleteConfigRuleRequest;
class DeleteConfigRuleResponse;
class DeleteConfigurationAggregatorRequest;
class DeleteConfigurationAggregatorResponse;
class DeleteConfigurationRecorderRequest;
class DeleteConfigurationRecorderResponse;
class DeleteDeliveryChannelRequest;
class DeleteDeliveryChannelResponse;
class DeleteEvaluationResultsRequest;
class DeleteEvaluationResultsResponse;
class DeletePendingAggregationRequestRequest;
class DeletePendingAggregationRequestResponse;
class DeliverConfigSnapshotRequest;
class DeliverConfigSnapshotResponse;
class DescribeAggregateComplianceByConfigRulesRequest;
class DescribeAggregateComplianceByConfigRulesResponse;
class DescribeAggregationAuthorizationsRequest;
class DescribeAggregationAuthorizationsResponse;
class DescribeComplianceByConfigRuleRequest;
class DescribeComplianceByConfigRuleResponse;
class DescribeComplianceByResourceRequest;
class DescribeComplianceByResourceResponse;
class DescribeConfigRuleEvaluationStatusRequest;
class DescribeConfigRuleEvaluationStatusResponse;
class DescribeConfigRulesRequest;
class DescribeConfigRulesResponse;
class DescribeConfigurationAggregatorSourcesStatusRequest;
class DescribeConfigurationAggregatorSourcesStatusResponse;
class DescribeConfigurationAggregatorsRequest;
class DescribeConfigurationAggregatorsResponse;
class DescribeConfigurationRecorderStatusRequest;
class DescribeConfigurationRecorderStatusResponse;
class DescribeConfigurationRecordersRequest;
class DescribeConfigurationRecordersResponse;
class DescribeDeliveryChannelStatusRequest;
class DescribeDeliveryChannelStatusResponse;
class DescribeDeliveryChannelsRequest;
class DescribeDeliveryChannelsResponse;
class DescribePendingAggregationRequestsRequest;
class DescribePendingAggregationRequestsResponse;
class GetAggregateComplianceDetailsByConfigRuleRequest;
class GetAggregateComplianceDetailsByConfigRuleResponse;
class GetAggregateConfigRuleComplianceSummaryRequest;
class GetAggregateConfigRuleComplianceSummaryResponse;
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
class PutAggregationAuthorizationRequest;
class PutAggregationAuthorizationResponse;
class PutConfigRuleRequest;
class PutConfigRuleResponse;
class PutConfigurationAggregatorRequest;
class PutConfigurationAggregatorResponse;
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
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ConfigServiceClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BatchGetResourceConfigResponse * batchGetResourceConfig(const BatchGetResourceConfigRequest &request);
    DeleteAggregationAuthorizationResponse * deleteAggregationAuthorization(const DeleteAggregationAuthorizationRequest &request);
    DeleteConfigRuleResponse * deleteConfigRule(const DeleteConfigRuleRequest &request);
    DeleteConfigurationAggregatorResponse * deleteConfigurationAggregator(const DeleteConfigurationAggregatorRequest &request);
    DeleteConfigurationRecorderResponse * deleteConfigurationRecorder(const DeleteConfigurationRecorderRequest &request);
    DeleteDeliveryChannelResponse * deleteDeliveryChannel(const DeleteDeliveryChannelRequest &request);
    DeleteEvaluationResultsResponse * deleteEvaluationResults(const DeleteEvaluationResultsRequest &request);
    DeletePendingAggregationRequestResponse * deletePendingAggregationRequest(const DeletePendingAggregationRequestRequest &request);
    DeliverConfigSnapshotResponse * deliverConfigSnapshot(const DeliverConfigSnapshotRequest &request);
    DescribeAggregateComplianceByConfigRulesResponse * describeAggregateComplianceByConfigRules(const DescribeAggregateComplianceByConfigRulesRequest &request);
    DescribeAggregationAuthorizationsResponse * describeAggregationAuthorizations(const DescribeAggregationAuthorizationsRequest &request);
    DescribeComplianceByConfigRuleResponse * describeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest &request);
    DescribeComplianceByResourceResponse * describeComplianceByResource(const DescribeComplianceByResourceRequest &request);
    DescribeConfigRuleEvaluationStatusResponse * describeConfigRuleEvaluationStatus(const DescribeConfigRuleEvaluationStatusRequest &request);
    DescribeConfigRulesResponse * describeConfigRules(const DescribeConfigRulesRequest &request);
    DescribeConfigurationAggregatorSourcesStatusResponse * describeConfigurationAggregatorSourcesStatus(const DescribeConfigurationAggregatorSourcesStatusRequest &request);
    DescribeConfigurationAggregatorsResponse * describeConfigurationAggregators(const DescribeConfigurationAggregatorsRequest &request);
    DescribeConfigurationRecorderStatusResponse * describeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest &request);
    DescribeConfigurationRecordersResponse * describeConfigurationRecorders(const DescribeConfigurationRecordersRequest &request);
    DescribeDeliveryChannelStatusResponse * describeDeliveryChannelStatus(const DescribeDeliveryChannelStatusRequest &request);
    DescribeDeliveryChannelsResponse * describeDeliveryChannels(const DescribeDeliveryChannelsRequest &request);
    DescribePendingAggregationRequestsResponse * describePendingAggregationRequests(const DescribePendingAggregationRequestsRequest &request);
    GetAggregateComplianceDetailsByConfigRuleResponse * getAggregateComplianceDetailsByConfigRule(const GetAggregateComplianceDetailsByConfigRuleRequest &request);
    GetAggregateConfigRuleComplianceSummaryResponse * getAggregateConfigRuleComplianceSummary(const GetAggregateConfigRuleComplianceSummaryRequest &request);
    GetComplianceDetailsByConfigRuleResponse * getComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest &request);
    GetComplianceDetailsByResourceResponse * getComplianceDetailsByResource(const GetComplianceDetailsByResourceRequest &request);
    GetComplianceSummaryByConfigRuleResponse * getComplianceSummaryByConfigRule();
    GetComplianceSummaryByResourceTypeResponse * getComplianceSummaryByResourceType(const GetComplianceSummaryByResourceTypeRequest &request);
    GetDiscoveredResourceCountsResponse * getDiscoveredResourceCounts(const GetDiscoveredResourceCountsRequest &request);
    GetResourceConfigHistoryResponse * getResourceConfigHistory(const GetResourceConfigHistoryRequest &request);
    ListDiscoveredResourcesResponse * listDiscoveredResources(const ListDiscoveredResourcesRequest &request);
    PutAggregationAuthorizationResponse * putAggregationAuthorization(const PutAggregationAuthorizationRequest &request);
    PutConfigRuleResponse * putConfigRule(const PutConfigRuleRequest &request);
    PutConfigurationAggregatorResponse * putConfigurationAggregator(const PutConfigurationAggregatorRequest &request);
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
