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

#ifndef QTAWS_CONFIGSERVICECLIENT_H
#define QTAWS_CONFIGSERVICECLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class ConfigServiceClientPrivate;

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
    ConfigServiceDeleteConfigRuleResponse * deleteConfigRule(const ConfigServiceDeleteConfigRuleRequest &request);
    ConfigServiceDeleteConfigurationRecorderResponse * deleteConfigurationRecorder(const ConfigServiceDeleteConfigurationRecorderRequest &request);
    ConfigServiceDeleteDeliveryChannelResponse * deleteDeliveryChannel(const ConfigServiceDeleteDeliveryChannelRequest &request);
    ConfigServiceDeleteEvaluationResultsResponse * deleteEvaluationResults(const ConfigServiceDeleteEvaluationResultsRequest &request);
    ConfigServiceDeliverConfigSnapshotResponse * deliverConfigSnapshot(const ConfigServiceDeliverConfigSnapshotRequest &request);
    ConfigServiceDescribeComplianceByConfigRuleResponse * describeComplianceByConfigRule(const ConfigServiceDescribeComplianceByConfigRuleRequest &request);
    ConfigServiceDescribeComplianceByResourceResponse * describeComplianceByResource(const ConfigServiceDescribeComplianceByResourceRequest &request);
    ConfigServiceDescribeConfigRuleEvaluationStatusResponse * describeConfigRuleEvaluationStatus(const ConfigServiceDescribeConfigRuleEvaluationStatusRequest &request);
    ConfigServiceDescribeConfigRulesResponse * describeConfigRules(const ConfigServiceDescribeConfigRulesRequest &request);
    ConfigServiceDescribeConfigurationRecorderStatusResponse * describeConfigurationRecorderStatus(const ConfigServiceDescribeConfigurationRecorderStatusRequest &request);
    ConfigServiceDescribeConfigurationRecordersResponse * describeConfigurationRecorders(const ConfigServiceDescribeConfigurationRecordersRequest &request);
    ConfigServiceDescribeDeliveryChannelStatusResponse * describeDeliveryChannelStatus(const ConfigServiceDescribeDeliveryChannelStatusRequest &request);
    ConfigServiceDescribeDeliveryChannelsResponse * describeDeliveryChannels(const ConfigServiceDescribeDeliveryChannelsRequest &request);
    ConfigServiceGetComplianceDetailsByConfigRuleResponse * getComplianceDetailsByConfigRule(const ConfigServiceGetComplianceDetailsByConfigRuleRequest &request);
    ConfigServiceGetComplianceDetailsByResourceResponse * getComplianceDetailsByResource(const ConfigServiceGetComplianceDetailsByResourceRequest &request);
    ConfigServiceGetComplianceSummaryByConfigRuleResponse * getComplianceSummaryByConfigRule();
    ConfigServiceGetComplianceSummaryByResourceTypeResponse * getComplianceSummaryByResourceType(const ConfigServiceGetComplianceSummaryByResourceTypeRequest &request);
    ConfigServiceGetResourceConfigHistoryResponse * getResourceConfigHistory(const ConfigServiceGetResourceConfigHistoryRequest &request);
    ConfigServiceListDiscoveredResourcesResponse * listDiscoveredResources(const ConfigServiceListDiscoveredResourcesRequest &request);
    ConfigServicePutConfigRuleResponse * putConfigRule(const ConfigServicePutConfigRuleRequest &request);
    ConfigServicePutConfigurationRecorderResponse * putConfigurationRecorder(const ConfigServicePutConfigurationRecorderRequest &request);
    ConfigServicePutDeliveryChannelResponse * putDeliveryChannel(const ConfigServicePutDeliveryChannelRequest &request);
    ConfigServicePutEvaluationsResponse * putEvaluations(const ConfigServicePutEvaluationsRequest &request);
    ConfigServiceStartConfigRulesEvaluationResponse * startConfigRulesEvaluation(const ConfigServiceStartConfigRulesEvaluationRequest &request);
    ConfigServiceStartConfigurationRecorderResponse * startConfigurationRecorder(const ConfigServiceStartConfigurationRecorderRequest &request);
    ConfigServiceStopConfigurationRecorderResponse * stopConfigurationRecorder(const ConfigServiceStopConfigurationRecorderRequest &request);

private:
    Q_DECLARE_PRIVATE(ConfigServiceClient)
    Q_DISABLE_COPY(ConfigServiceClient)

};

QTAWS_END_NAMESPACE

#endif
