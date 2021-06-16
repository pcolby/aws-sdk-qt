/*
    Copyright 2013-2021 Paul Colby

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
class BatchGetAggregateResourceConfigRequest;
class BatchGetAggregateResourceConfigResponse;
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
class DeleteConformancePackRequest;
class DeleteConformancePackResponse;
class DeleteDeliveryChannelRequest;
class DeleteDeliveryChannelResponse;
class DeleteEvaluationResultsRequest;
class DeleteEvaluationResultsResponse;
class DeleteOrganizationConfigRuleRequest;
class DeleteOrganizationConfigRuleResponse;
class DeleteOrganizationConformancePackRequest;
class DeleteOrganizationConformancePackResponse;
class DeletePendingAggregationRequestRequest;
class DeletePendingAggregationRequestResponse;
class DeleteRemediationConfigurationRequest;
class DeleteRemediationConfigurationResponse;
class DeleteRemediationExceptionsRequest;
class DeleteRemediationExceptionsResponse;
class DeleteResourceConfigRequest;
class DeleteResourceConfigResponse;
class DeleteRetentionConfigurationRequest;
class DeleteRetentionConfigurationResponse;
class DeleteStoredQueryRequest;
class DeleteStoredQueryResponse;
class DeliverConfigSnapshotRequest;
class DeliverConfigSnapshotResponse;
class DescribeAggregateComplianceByConfigRulesRequest;
class DescribeAggregateComplianceByConfigRulesResponse;
class DescribeAggregateComplianceByConformancePacksRequest;
class DescribeAggregateComplianceByConformancePacksResponse;
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
class DescribeConformancePackComplianceRequest;
class DescribeConformancePackComplianceResponse;
class DescribeConformancePackStatusRequest;
class DescribeConformancePackStatusResponse;
class DescribeConformancePacksRequest;
class DescribeConformancePacksResponse;
class DescribeDeliveryChannelStatusRequest;
class DescribeDeliveryChannelStatusResponse;
class DescribeDeliveryChannelsRequest;
class DescribeDeliveryChannelsResponse;
class DescribeOrganizationConfigRuleStatusesRequest;
class DescribeOrganizationConfigRuleStatusesResponse;
class DescribeOrganizationConfigRulesRequest;
class DescribeOrganizationConfigRulesResponse;
class DescribeOrganizationConformancePackStatusesRequest;
class DescribeOrganizationConformancePackStatusesResponse;
class DescribeOrganizationConformancePacksRequest;
class DescribeOrganizationConformancePacksResponse;
class DescribePendingAggregationRequestsRequest;
class DescribePendingAggregationRequestsResponse;
class DescribeRemediationConfigurationsRequest;
class DescribeRemediationConfigurationsResponse;
class DescribeRemediationExceptionsRequest;
class DescribeRemediationExceptionsResponse;
class DescribeRemediationExecutionStatusRequest;
class DescribeRemediationExecutionStatusResponse;
class DescribeRetentionConfigurationsRequest;
class DescribeRetentionConfigurationsResponse;
class GetAggregateComplianceDetailsByConfigRuleRequest;
class GetAggregateComplianceDetailsByConfigRuleResponse;
class GetAggregateConfigRuleComplianceSummaryRequest;
class GetAggregateConfigRuleComplianceSummaryResponse;
class GetAggregateConformancePackComplianceSummaryRequest;
class GetAggregateConformancePackComplianceSummaryResponse;
class GetAggregateDiscoveredResourceCountsRequest;
class GetAggregateDiscoveredResourceCountsResponse;
class GetAggregateResourceConfigRequest;
class GetAggregateResourceConfigResponse;
class GetComplianceDetailsByConfigRuleRequest;
class GetComplianceDetailsByConfigRuleResponse;
class GetComplianceDetailsByResourceRequest;
class GetComplianceDetailsByResourceResponse;
class GetComplianceSummaryByConfigRuleRequest;
class GetComplianceSummaryByConfigRuleResponse;
class GetComplianceSummaryByResourceTypeRequest;
class GetComplianceSummaryByResourceTypeResponse;
class GetConformancePackComplianceDetailsRequest;
class GetConformancePackComplianceDetailsResponse;
class GetConformancePackComplianceSummaryRequest;
class GetConformancePackComplianceSummaryResponse;
class GetDiscoveredResourceCountsRequest;
class GetDiscoveredResourceCountsResponse;
class GetOrganizationConfigRuleDetailedStatusRequest;
class GetOrganizationConfigRuleDetailedStatusResponse;
class GetOrganizationConformancePackDetailedStatusRequest;
class GetOrganizationConformancePackDetailedStatusResponse;
class GetResourceConfigHistoryRequest;
class GetResourceConfigHistoryResponse;
class GetStoredQueryRequest;
class GetStoredQueryResponse;
class ListAggregateDiscoveredResourcesRequest;
class ListAggregateDiscoveredResourcesResponse;
class ListDiscoveredResourcesRequest;
class ListDiscoveredResourcesResponse;
class ListStoredQueriesRequest;
class ListStoredQueriesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutAggregationAuthorizationRequest;
class PutAggregationAuthorizationResponse;
class PutConfigRuleRequest;
class PutConfigRuleResponse;
class PutConfigurationAggregatorRequest;
class PutConfigurationAggregatorResponse;
class PutConfigurationRecorderRequest;
class PutConfigurationRecorderResponse;
class PutConformancePackRequest;
class PutConformancePackResponse;
class PutDeliveryChannelRequest;
class PutDeliveryChannelResponse;
class PutEvaluationsRequest;
class PutEvaluationsResponse;
class PutExternalEvaluationRequest;
class PutExternalEvaluationResponse;
class PutOrganizationConfigRuleRequest;
class PutOrganizationConfigRuleResponse;
class PutOrganizationConformancePackRequest;
class PutOrganizationConformancePackResponse;
class PutRemediationConfigurationsRequest;
class PutRemediationConfigurationsResponse;
class PutRemediationExceptionsRequest;
class PutRemediationExceptionsResponse;
class PutResourceConfigRequest;
class PutResourceConfigResponse;
class PutRetentionConfigurationRequest;
class PutRetentionConfigurationResponse;
class PutStoredQueryRequest;
class PutStoredQueryResponse;
class SelectAggregateResourceConfigRequest;
class SelectAggregateResourceConfigResponse;
class SelectResourceConfigRequest;
class SelectResourceConfigResponse;
class StartConfigRulesEvaluationRequest;
class StartConfigRulesEvaluationResponse;
class StartConfigurationRecorderRequest;
class StartConfigurationRecorderResponse;
class StartRemediationExecutionRequest;
class StartRemediationExecutionResponse;
class StopConfigurationRecorderRequest;
class StopConfigurationRecorderResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;

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
    BatchGetAggregateResourceConfigResponse * batchGetAggregateResourceConfig(const BatchGetAggregateResourceConfigRequest &request);
    BatchGetResourceConfigResponse * batchGetResourceConfig(const BatchGetResourceConfigRequest &request);
    DeleteAggregationAuthorizationResponse * deleteAggregationAuthorization(const DeleteAggregationAuthorizationRequest &request);
    DeleteConfigRuleResponse * deleteConfigRule(const DeleteConfigRuleRequest &request);
    DeleteConfigurationAggregatorResponse * deleteConfigurationAggregator(const DeleteConfigurationAggregatorRequest &request);
    DeleteConfigurationRecorderResponse * deleteConfigurationRecorder(const DeleteConfigurationRecorderRequest &request);
    DeleteConformancePackResponse * deleteConformancePack(const DeleteConformancePackRequest &request);
    DeleteDeliveryChannelResponse * deleteDeliveryChannel(const DeleteDeliveryChannelRequest &request);
    DeleteEvaluationResultsResponse * deleteEvaluationResults(const DeleteEvaluationResultsRequest &request);
    DeleteOrganizationConfigRuleResponse * deleteOrganizationConfigRule(const DeleteOrganizationConfigRuleRequest &request);
    DeleteOrganizationConformancePackResponse * deleteOrganizationConformancePack(const DeleteOrganizationConformancePackRequest &request);
    DeletePendingAggregationRequestResponse * deletePendingAggregationRequest(const DeletePendingAggregationRequestRequest &request);
    DeleteRemediationConfigurationResponse * deleteRemediationConfiguration(const DeleteRemediationConfigurationRequest &request);
    DeleteRemediationExceptionsResponse * deleteRemediationExceptions(const DeleteRemediationExceptionsRequest &request);
    DeleteResourceConfigResponse * deleteResourceConfig(const DeleteResourceConfigRequest &request);
    DeleteRetentionConfigurationResponse * deleteRetentionConfiguration(const DeleteRetentionConfigurationRequest &request);
    DeleteStoredQueryResponse * deleteStoredQuery(const DeleteStoredQueryRequest &request);
    DeliverConfigSnapshotResponse * deliverConfigSnapshot(const DeliverConfigSnapshotRequest &request);
    DescribeAggregateComplianceByConfigRulesResponse * describeAggregateComplianceByConfigRules(const DescribeAggregateComplianceByConfigRulesRequest &request);
    DescribeAggregateComplianceByConformancePacksResponse * describeAggregateComplianceByConformancePacks(const DescribeAggregateComplianceByConformancePacksRequest &request);
    DescribeAggregationAuthorizationsResponse * describeAggregationAuthorizations(const DescribeAggregationAuthorizationsRequest &request);
    DescribeComplianceByConfigRuleResponse * describeComplianceByConfigRule(const DescribeComplianceByConfigRuleRequest &request);
    DescribeComplianceByResourceResponse * describeComplianceByResource(const DescribeComplianceByResourceRequest &request);
    DescribeConfigRuleEvaluationStatusResponse * describeConfigRuleEvaluationStatus(const DescribeConfigRuleEvaluationStatusRequest &request);
    DescribeConfigRulesResponse * describeConfigRules(const DescribeConfigRulesRequest &request);
    DescribeConfigurationAggregatorSourcesStatusResponse * describeConfigurationAggregatorSourcesStatus(const DescribeConfigurationAggregatorSourcesStatusRequest &request);
    DescribeConfigurationAggregatorsResponse * describeConfigurationAggregators(const DescribeConfigurationAggregatorsRequest &request);
    DescribeConfigurationRecorderStatusResponse * describeConfigurationRecorderStatus(const DescribeConfigurationRecorderStatusRequest &request);
    DescribeConfigurationRecordersResponse * describeConfigurationRecorders(const DescribeConfigurationRecordersRequest &request);
    DescribeConformancePackComplianceResponse * describeConformancePackCompliance(const DescribeConformancePackComplianceRequest &request);
    DescribeConformancePackStatusResponse * describeConformancePackStatus(const DescribeConformancePackStatusRequest &request);
    DescribeConformancePacksResponse * describeConformancePacks(const DescribeConformancePacksRequest &request);
    DescribeDeliveryChannelStatusResponse * describeDeliveryChannelStatus(const DescribeDeliveryChannelStatusRequest &request);
    DescribeDeliveryChannelsResponse * describeDeliveryChannels(const DescribeDeliveryChannelsRequest &request);
    DescribeOrganizationConfigRuleStatusesResponse * describeOrganizationConfigRuleStatuses(const DescribeOrganizationConfigRuleStatusesRequest &request);
    DescribeOrganizationConfigRulesResponse * describeOrganizationConfigRules(const DescribeOrganizationConfigRulesRequest &request);
    DescribeOrganizationConformancePackStatusesResponse * describeOrganizationConformancePackStatuses(const DescribeOrganizationConformancePackStatusesRequest &request);
    DescribeOrganizationConformancePacksResponse * describeOrganizationConformancePacks(const DescribeOrganizationConformancePacksRequest &request);
    DescribePendingAggregationRequestsResponse * describePendingAggregationRequests(const DescribePendingAggregationRequestsRequest &request);
    DescribeRemediationConfigurationsResponse * describeRemediationConfigurations(const DescribeRemediationConfigurationsRequest &request);
    DescribeRemediationExceptionsResponse * describeRemediationExceptions(const DescribeRemediationExceptionsRequest &request);
    DescribeRemediationExecutionStatusResponse * describeRemediationExecutionStatus(const DescribeRemediationExecutionStatusRequest &request);
    DescribeRetentionConfigurationsResponse * describeRetentionConfigurations(const DescribeRetentionConfigurationsRequest &request);
    GetAggregateComplianceDetailsByConfigRuleResponse * getAggregateComplianceDetailsByConfigRule(const GetAggregateComplianceDetailsByConfigRuleRequest &request);
    GetAggregateConfigRuleComplianceSummaryResponse * getAggregateConfigRuleComplianceSummary(const GetAggregateConfigRuleComplianceSummaryRequest &request);
    GetAggregateConformancePackComplianceSummaryResponse * getAggregateConformancePackComplianceSummary(const GetAggregateConformancePackComplianceSummaryRequest &request);
    GetAggregateDiscoveredResourceCountsResponse * getAggregateDiscoveredResourceCounts(const GetAggregateDiscoveredResourceCountsRequest &request);
    GetAggregateResourceConfigResponse * getAggregateResourceConfig(const GetAggregateResourceConfigRequest &request);
    GetComplianceDetailsByConfigRuleResponse * getComplianceDetailsByConfigRule(const GetComplianceDetailsByConfigRuleRequest &request);
    GetComplianceDetailsByResourceResponse * getComplianceDetailsByResource(const GetComplianceDetailsByResourceRequest &request);
    GetComplianceSummaryByConfigRuleResponse * getComplianceSummaryByConfigRule(const GetComplianceSummaryByConfigRuleRequest &request);
    GetComplianceSummaryByConfigRuleResponse * getComplianceSummaryByConfigRule();
    GetComplianceSummaryByResourceTypeResponse * getComplianceSummaryByResourceType(const GetComplianceSummaryByResourceTypeRequest &request);
    GetConformancePackComplianceDetailsResponse * getConformancePackComplianceDetails(const GetConformancePackComplianceDetailsRequest &request);
    GetConformancePackComplianceSummaryResponse * getConformancePackComplianceSummary(const GetConformancePackComplianceSummaryRequest &request);
    GetDiscoveredResourceCountsResponse * getDiscoveredResourceCounts(const GetDiscoveredResourceCountsRequest &request);
    GetOrganizationConfigRuleDetailedStatusResponse * getOrganizationConfigRuleDetailedStatus(const GetOrganizationConfigRuleDetailedStatusRequest &request);
    GetOrganizationConformancePackDetailedStatusResponse * getOrganizationConformancePackDetailedStatus(const GetOrganizationConformancePackDetailedStatusRequest &request);
    GetResourceConfigHistoryResponse * getResourceConfigHistory(const GetResourceConfigHistoryRequest &request);
    GetStoredQueryResponse * getStoredQuery(const GetStoredQueryRequest &request);
    ListAggregateDiscoveredResourcesResponse * listAggregateDiscoveredResources(const ListAggregateDiscoveredResourcesRequest &request);
    ListDiscoveredResourcesResponse * listDiscoveredResources(const ListDiscoveredResourcesRequest &request);
    ListStoredQueriesResponse * listStoredQueries(const ListStoredQueriesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutAggregationAuthorizationResponse * putAggregationAuthorization(const PutAggregationAuthorizationRequest &request);
    PutConfigRuleResponse * putConfigRule(const PutConfigRuleRequest &request);
    PutConfigurationAggregatorResponse * putConfigurationAggregator(const PutConfigurationAggregatorRequest &request);
    PutConfigurationRecorderResponse * putConfigurationRecorder(const PutConfigurationRecorderRequest &request);
    PutConformancePackResponse * putConformancePack(const PutConformancePackRequest &request);
    PutDeliveryChannelResponse * putDeliveryChannel(const PutDeliveryChannelRequest &request);
    PutEvaluationsResponse * putEvaluations(const PutEvaluationsRequest &request);
    PutExternalEvaluationResponse * putExternalEvaluation(const PutExternalEvaluationRequest &request);
    PutOrganizationConfigRuleResponse * putOrganizationConfigRule(const PutOrganizationConfigRuleRequest &request);
    PutOrganizationConformancePackResponse * putOrganizationConformancePack(const PutOrganizationConformancePackRequest &request);
    PutRemediationConfigurationsResponse * putRemediationConfigurations(const PutRemediationConfigurationsRequest &request);
    PutRemediationExceptionsResponse * putRemediationExceptions(const PutRemediationExceptionsRequest &request);
    PutResourceConfigResponse * putResourceConfig(const PutResourceConfigRequest &request);
    PutRetentionConfigurationResponse * putRetentionConfiguration(const PutRetentionConfigurationRequest &request);
    PutStoredQueryResponse * putStoredQuery(const PutStoredQueryRequest &request);
    SelectAggregateResourceConfigResponse * selectAggregateResourceConfig(const SelectAggregateResourceConfigRequest &request);
    SelectResourceConfigResponse * selectResourceConfig(const SelectResourceConfigRequest &request);
    StartConfigRulesEvaluationResponse * startConfigRulesEvaluation(const StartConfigRulesEvaluationRequest &request);
    StartConfigurationRecorderResponse * startConfigurationRecorder(const StartConfigurationRecorderRequest &request);
    StartRemediationExecutionResponse * startRemediationExecution(const StartRemediationExecutionRequest &request);
    StopConfigurationRecorderResponse * stopConfigurationRecorder(const StopConfigurationRecorderRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);

private:
    Q_DECLARE_PRIVATE(ConfigServiceClient)
    Q_DISABLE_COPY(ConfigServiceClient)

};

} // namespace ConfigService
} // namespace QtAws

#endif
