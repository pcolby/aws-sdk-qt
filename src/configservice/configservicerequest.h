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

#ifndef QTAWS_CONFIGSERVICEREQUEST_H
#define QTAWS_CONFIGSERVICEREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ConfigService {

class ConfigServiceRequestPrivate;

class QTAWS_EXPORT ConfigServiceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ConfigService.
    enum Action {
        BatchGetAggregateResourceConfigAction,
        BatchGetResourceConfigAction,
        DeleteAggregationAuthorizationAction,
        DeleteConfigRuleAction,
        DeleteConfigurationAggregatorAction,
        DeleteConfigurationRecorderAction,
        DeleteDeliveryChannelAction,
        DeleteEvaluationResultsAction,
        DeleteOrganizationConfigRuleAction,
        DeletePendingAggregationRequestAction,
        DeleteRemediationConfigurationAction,
        DeleteRetentionConfigurationAction,
        DeliverConfigSnapshotAction,
        DescribeAggregateComplianceByConfigRulesAction,
        DescribeAggregationAuthorizationsAction,
        DescribeComplianceByConfigRuleAction,
        DescribeComplianceByResourceAction,
        DescribeConfigRuleEvaluationStatusAction,
        DescribeConfigRulesAction,
        DescribeConfigurationAggregatorSourcesStatusAction,
        DescribeConfigurationAggregatorsAction,
        DescribeConfigurationRecorderStatusAction,
        DescribeConfigurationRecordersAction,
        DescribeDeliveryChannelStatusAction,
        DescribeDeliveryChannelsAction,
        DescribeOrganizationConfigRuleStatusesAction,
        DescribeOrganizationConfigRulesAction,
        DescribePendingAggregationRequestsAction,
        DescribeRemediationConfigurationsAction,
        DescribeRemediationExecutionStatusAction,
        DescribeRetentionConfigurationsAction,
        GetAggregateComplianceDetailsByConfigRuleAction,
        GetAggregateConfigRuleComplianceSummaryAction,
        GetAggregateDiscoveredResourceCountsAction,
        GetAggregateResourceConfigAction,
        GetComplianceDetailsByConfigRuleAction,
        GetComplianceDetailsByResourceAction,
        GetComplianceSummaryByConfigRuleAction,
        GetComplianceSummaryByResourceTypeAction,
        GetDiscoveredResourceCountsAction,
        GetOrganizationConfigRuleDetailedStatusAction,
        GetResourceConfigHistoryAction,
        ListAggregateDiscoveredResourcesAction,
        ListDiscoveredResourcesAction,
        ListTagsForResourceAction,
        PutAggregationAuthorizationAction,
        PutConfigRuleAction,
        PutConfigurationAggregatorAction,
        PutConfigurationRecorderAction,
        PutDeliveryChannelAction,
        PutEvaluationsAction,
        PutOrganizationConfigRuleAction,
        PutRemediationConfigurationsAction,
        PutRetentionConfigurationAction,
        SelectResourceConfigAction,
        StartConfigRulesEvaluationAction,
        StartConfigurationRecorderAction,
        StartRemediationExecutionAction,
        StopConfigurationRecorderAction,
        TagResourceAction,
        UntagResourceAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ConfigServiceRequest(const Action action);
    ConfigServiceRequest(const ConfigServiceRequest &other);
    ConfigServiceRequest &operator=(const ConfigServiceRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ConfigServiceRequest &other) const;


protected:
    /// @cond internal
    ConfigServiceRequest(ConfigServiceRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfigServiceRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
