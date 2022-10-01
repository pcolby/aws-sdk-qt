// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIGSERVICEREQUEST_H
#define QTAWS_CONFIGSERVICEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsconfigserviceglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ConfigService {

class ConfigServiceRequestPrivate;

class QTAWSCONFIGSERVICE_EXPORT ConfigServiceRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ConfigService.
    enum Action {
        BatchGetAggregateResourceConfigAction,
        BatchGetResourceConfigAction,
        DeleteAggregationAuthorizationAction,
        DeleteConfigRuleAction,
        DeleteConfigurationAggregatorAction,
        DeleteConfigurationRecorderAction,
        DeleteConformancePackAction,
        DeleteDeliveryChannelAction,
        DeleteEvaluationResultsAction,
        DeleteOrganizationConfigRuleAction,
        DeleteOrganizationConformancePackAction,
        DeletePendingAggregationRequestAction,
        DeleteRemediationConfigurationAction,
        DeleteRemediationExceptionsAction,
        DeleteResourceConfigAction,
        DeleteRetentionConfigurationAction,
        DeleteStoredQueryAction,
        DeliverConfigSnapshotAction,
        DescribeAggregateComplianceByConfigRulesAction,
        DescribeAggregateComplianceByConformancePacksAction,
        DescribeAggregationAuthorizationsAction,
        DescribeComplianceByConfigRuleAction,
        DescribeComplianceByResourceAction,
        DescribeConfigRuleEvaluationStatusAction,
        DescribeConfigRulesAction,
        DescribeConfigurationAggregatorSourcesStatusAction,
        DescribeConfigurationAggregatorsAction,
        DescribeConfigurationRecorderStatusAction,
        DescribeConfigurationRecordersAction,
        DescribeConformancePackComplianceAction,
        DescribeConformancePackStatusAction,
        DescribeConformancePacksAction,
        DescribeDeliveryChannelStatusAction,
        DescribeDeliveryChannelsAction,
        DescribeOrganizationConfigRuleStatusesAction,
        DescribeOrganizationConfigRulesAction,
        DescribeOrganizationConformancePackStatusesAction,
        DescribeOrganizationConformancePacksAction,
        DescribePendingAggregationRequestsAction,
        DescribeRemediationConfigurationsAction,
        DescribeRemediationExceptionsAction,
        DescribeRemediationExecutionStatusAction,
        DescribeRetentionConfigurationsAction,
        GetAggregateComplianceDetailsByConfigRuleAction,
        GetAggregateConfigRuleComplianceSummaryAction,
        GetAggregateConformancePackComplianceSummaryAction,
        GetAggregateDiscoveredResourceCountsAction,
        GetAggregateResourceConfigAction,
        GetComplianceDetailsByConfigRuleAction,
        GetComplianceDetailsByResourceAction,
        GetComplianceSummaryByConfigRuleAction,
        GetComplianceSummaryByResourceTypeAction,
        GetConformancePackComplianceDetailsAction,
        GetConformancePackComplianceSummaryAction,
        GetCustomRulePolicyAction,
        GetDiscoveredResourceCountsAction,
        GetOrganizationConfigRuleDetailedStatusAction,
        GetOrganizationConformancePackDetailedStatusAction,
        GetOrganizationCustomRulePolicyAction,
        GetResourceConfigHistoryAction,
        GetStoredQueryAction,
        ListAggregateDiscoveredResourcesAction,
        ListConformancePackComplianceScoresAction,
        ListDiscoveredResourcesAction,
        ListStoredQueriesAction,
        ListTagsForResourceAction,
        PutAggregationAuthorizationAction,
        PutConfigRuleAction,
        PutConfigurationAggregatorAction,
        PutConfigurationRecorderAction,
        PutConformancePackAction,
        PutDeliveryChannelAction,
        PutEvaluationsAction,
        PutExternalEvaluationAction,
        PutOrganizationConfigRuleAction,
        PutOrganizationConformancePackAction,
        PutRemediationConfigurationsAction,
        PutRemediationExceptionsAction,
        PutResourceConfigAction,
        PutRetentionConfigurationAction,
        PutStoredQueryAction,
        SelectAggregateResourceConfigAction,
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
    explicit ConfigServiceRequest(ConfigServiceRequestPrivate * const d);
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
