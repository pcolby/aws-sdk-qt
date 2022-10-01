// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IOTREQUEST_H
#define QTAWS_IOTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsiotglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoT {

class IoTRequestPrivate;

class QTAWSIOT_EXPORT IoTRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by IoT.
    enum Action {
        AcceptCertificateTransferAction,
        AddThingToBillingGroupAction,
        AddThingToThingGroupAction,
        AssociateTargetsWithJobAction,
        AttachPolicyAction,
        AttachPrincipalPolicyAction,
        AttachSecurityProfileAction,
        AttachThingPrincipalAction,
        CancelAuditMitigationActionsTaskAction,
        CancelAuditTaskAction,
        CancelCertificateTransferAction,
        CancelDetectMitigationActionsTaskAction,
        CancelJobAction,
        CancelJobExecutionAction,
        ClearDefaultAuthorizerAction,
        ConfirmTopicRuleDestinationAction,
        CreateAuditSuppressionAction,
        CreateAuthorizerAction,
        CreateBillingGroupAction,
        CreateCertificateFromCsrAction,
        CreateCustomMetricAction,
        CreateDimensionAction,
        CreateDomainConfigurationAction,
        CreateDynamicThingGroupAction,
        CreateFleetMetricAction,
        CreateJobAction,
        CreateJobTemplateAction,
        CreateKeysAndCertificateAction,
        CreateMitigationActionAction,
        CreateOTAUpdateAction,
        CreatePolicyAction,
        CreatePolicyVersionAction,
        CreateProvisioningClaimAction,
        CreateProvisioningTemplateAction,
        CreateProvisioningTemplateVersionAction,
        CreateRoleAliasAction,
        CreateScheduledAuditAction,
        CreateSecurityProfileAction,
        CreateStreamAction,
        CreateThingAction,
        CreateThingGroupAction,
        CreateThingTypeAction,
        CreateTopicRuleAction,
        CreateTopicRuleDestinationAction,
        DeleteAccountAuditConfigurationAction,
        DeleteAuditSuppressionAction,
        DeleteAuthorizerAction,
        DeleteBillingGroupAction,
        DeleteCACertificateAction,
        DeleteCertificateAction,
        DeleteCustomMetricAction,
        DeleteDimensionAction,
        DeleteDomainConfigurationAction,
        DeleteDynamicThingGroupAction,
        DeleteFleetMetricAction,
        DeleteJobAction,
        DeleteJobExecutionAction,
        DeleteJobTemplateAction,
        DeleteMitigationActionAction,
        DeleteOTAUpdateAction,
        DeletePolicyAction,
        DeletePolicyVersionAction,
        DeleteProvisioningTemplateAction,
        DeleteProvisioningTemplateVersionAction,
        DeleteRegistrationCodeAction,
        DeleteRoleAliasAction,
        DeleteScheduledAuditAction,
        DeleteSecurityProfileAction,
        DeleteStreamAction,
        DeleteThingAction,
        DeleteThingGroupAction,
        DeleteThingTypeAction,
        DeleteTopicRuleAction,
        DeleteTopicRuleDestinationAction,
        DeleteV2LoggingLevelAction,
        DeprecateThingTypeAction,
        DescribeAccountAuditConfigurationAction,
        DescribeAuditFindingAction,
        DescribeAuditMitigationActionsTaskAction,
        DescribeAuditSuppressionAction,
        DescribeAuditTaskAction,
        DescribeAuthorizerAction,
        DescribeBillingGroupAction,
        DescribeCACertificateAction,
        DescribeCertificateAction,
        DescribeCustomMetricAction,
        DescribeDefaultAuthorizerAction,
        DescribeDetectMitigationActionsTaskAction,
        DescribeDimensionAction,
        DescribeDomainConfigurationAction,
        DescribeEndpointAction,
        DescribeEventConfigurationsAction,
        DescribeFleetMetricAction,
        DescribeIndexAction,
        DescribeJobAction,
        DescribeJobExecutionAction,
        DescribeJobTemplateAction,
        DescribeManagedJobTemplateAction,
        DescribeMitigationActionAction,
        DescribeProvisioningTemplateAction,
        DescribeProvisioningTemplateVersionAction,
        DescribeRoleAliasAction,
        DescribeScheduledAuditAction,
        DescribeSecurityProfileAction,
        DescribeStreamAction,
        DescribeThingAction,
        DescribeThingGroupAction,
        DescribeThingRegistrationTaskAction,
        DescribeThingTypeAction,
        DetachPolicyAction,
        DetachPrincipalPolicyAction,
        DetachSecurityProfileAction,
        DetachThingPrincipalAction,
        DisableTopicRuleAction,
        EnableTopicRuleAction,
        GetBehaviorModelTrainingSummariesAction,
        GetBucketsAggregationAction,
        GetCardinalityAction,
        GetEffectivePoliciesAction,
        GetIndexingConfigurationAction,
        GetJobDocumentAction,
        GetLoggingOptionsAction,
        GetOTAUpdateAction,
        GetPercentilesAction,
        GetPolicyAction,
        GetPolicyVersionAction,
        GetRegistrationCodeAction,
        GetStatisticsAction,
        GetTopicRuleAction,
        GetTopicRuleDestinationAction,
        GetV2LoggingOptionsAction,
        ListActiveViolationsAction,
        ListAttachedPoliciesAction,
        ListAuditFindingsAction,
        ListAuditMitigationActionsExecutionsAction,
        ListAuditMitigationActionsTasksAction,
        ListAuditSuppressionsAction,
        ListAuditTasksAction,
        ListAuthorizersAction,
        ListBillingGroupsAction,
        ListCACertificatesAction,
        ListCertificatesAction,
        ListCertificatesByCAAction,
        ListCustomMetricsAction,
        ListDetectMitigationActionsExecutionsAction,
        ListDetectMitigationActionsTasksAction,
        ListDimensionsAction,
        ListDomainConfigurationsAction,
        ListFleetMetricsAction,
        ListIndicesAction,
        ListJobExecutionsForJobAction,
        ListJobExecutionsForThingAction,
        ListJobTemplatesAction,
        ListJobsAction,
        ListManagedJobTemplatesAction,
        ListMetricValuesAction,
        ListMitigationActionsAction,
        ListOTAUpdatesAction,
        ListOutgoingCertificatesAction,
        ListPoliciesAction,
        ListPolicyPrincipalsAction,
        ListPolicyVersionsAction,
        ListPrincipalPoliciesAction,
        ListPrincipalThingsAction,
        ListProvisioningTemplateVersionsAction,
        ListProvisioningTemplatesAction,
        ListRoleAliasesAction,
        ListScheduledAuditsAction,
        ListSecurityProfilesAction,
        ListSecurityProfilesForTargetAction,
        ListStreamsAction,
        ListTagsForResourceAction,
        ListTargetsForPolicyAction,
        ListTargetsForSecurityProfileAction,
        ListThingGroupsAction,
        ListThingGroupsForThingAction,
        ListThingPrincipalsAction,
        ListThingRegistrationTaskReportsAction,
        ListThingRegistrationTasksAction,
        ListThingTypesAction,
        ListThingsAction,
        ListThingsInBillingGroupAction,
        ListThingsInThingGroupAction,
        ListTopicRuleDestinationsAction,
        ListTopicRulesAction,
        ListV2LoggingLevelsAction,
        ListViolationEventsAction,
        PutVerificationStateOnViolationAction,
        RegisterCACertificateAction,
        RegisterCertificateAction,
        RegisterCertificateWithoutCAAction,
        RegisterThingAction,
        RejectCertificateTransferAction,
        RemoveThingFromBillingGroupAction,
        RemoveThingFromThingGroupAction,
        ReplaceTopicRuleAction,
        SearchIndexAction,
        SetDefaultAuthorizerAction,
        SetDefaultPolicyVersionAction,
        SetLoggingOptionsAction,
        SetV2LoggingLevelAction,
        SetV2LoggingOptionsAction,
        StartAuditMitigationActionsTaskAction,
        StartDetectMitigationActionsTaskAction,
        StartOnDemandAuditTaskAction,
        StartThingRegistrationTaskAction,
        StopThingRegistrationTaskAction,
        TagResourceAction,
        TestAuthorizationAction,
        TestInvokeAuthorizerAction,
        TransferCertificateAction,
        UntagResourceAction,
        UpdateAccountAuditConfigurationAction,
        UpdateAuditSuppressionAction,
        UpdateAuthorizerAction,
        UpdateBillingGroupAction,
        UpdateCACertificateAction,
        UpdateCertificateAction,
        UpdateCustomMetricAction,
        UpdateDimensionAction,
        UpdateDomainConfigurationAction,
        UpdateDynamicThingGroupAction,
        UpdateEventConfigurationsAction,
        UpdateFleetMetricAction,
        UpdateIndexingConfigurationAction,
        UpdateJobAction,
        UpdateMitigationActionAction,
        UpdateProvisioningTemplateAction,
        UpdateRoleAliasAction,
        UpdateScheduledAuditAction,
        UpdateSecurityProfileAction,
        UpdateStreamAction,
        UpdateThingAction,
        UpdateThingGroupAction,
        UpdateThingGroupsForThingAction,
        UpdateTopicRuleDestinationAction,
        ValidateSecurityProfileBehaviorsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    IoTRequest(const Action action);
    IoTRequest(const IoTRequest &other);
    IoTRequest &operator=(const IoTRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const IoTRequest &other) const;


protected:
    /// @cond internal
    explicit IoTRequest(IoTRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(IoTRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
