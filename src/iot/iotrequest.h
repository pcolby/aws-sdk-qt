/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_IOTREQUEST_H
#define QTAWS_IOTREQUEST_H

#include "core/awsabstractrequest.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace IoT {

class IoTRequestPrivate;

class QTAWS_EXPORT IoTRequest : public QtAws::Core::AwsAbstractRequest {

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
        CancelAuditTaskAction,
        CancelCertificateTransferAction,
        CancelJobAction,
        CancelJobExecutionAction,
        ClearDefaultAuthorizerAction,
        CreateAuthorizerAction,
        CreateBillingGroupAction,
        CreateCertificateFromCsrAction,
        CreateDynamicThingGroupAction,
        CreateJobAction,
        CreateKeysAndCertificateAction,
        CreateOTAUpdateAction,
        CreatePolicyAction,
        CreatePolicyVersionAction,
        CreateRoleAliasAction,
        CreateScheduledAuditAction,
        CreateSecurityProfileAction,
        CreateStreamAction,
        CreateThingAction,
        CreateThingGroupAction,
        CreateThingTypeAction,
        CreateTopicRuleAction,
        DeleteAccountAuditConfigurationAction,
        DeleteAuthorizerAction,
        DeleteBillingGroupAction,
        DeleteCACertificateAction,
        DeleteCertificateAction,
        DeleteDynamicThingGroupAction,
        DeleteJobAction,
        DeleteJobExecutionAction,
        DeleteOTAUpdateAction,
        DeletePolicyAction,
        DeletePolicyVersionAction,
        DeleteRegistrationCodeAction,
        DeleteRoleAliasAction,
        DeleteScheduledAuditAction,
        DeleteSecurityProfileAction,
        DeleteStreamAction,
        DeleteThingAction,
        DeleteThingGroupAction,
        DeleteThingTypeAction,
        DeleteTopicRuleAction,
        DeleteV2LoggingLevelAction,
        DeprecateThingTypeAction,
        DescribeAccountAuditConfigurationAction,
        DescribeAuditTaskAction,
        DescribeAuthorizerAction,
        DescribeBillingGroupAction,
        DescribeCACertificateAction,
        DescribeCertificateAction,
        DescribeDefaultAuthorizerAction,
        DescribeEndpointAction,
        DescribeEventConfigurationsAction,
        DescribeIndexAction,
        DescribeJobAction,
        DescribeJobExecutionAction,
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
        GetEffectivePoliciesAction,
        GetIndexingConfigurationAction,
        GetJobDocumentAction,
        GetLoggingOptionsAction,
        GetOTAUpdateAction,
        GetPolicyAction,
        GetPolicyVersionAction,
        GetRegistrationCodeAction,
        GetStatisticsAction,
        GetTopicRuleAction,
        GetV2LoggingOptionsAction,
        ListActiveViolationsAction,
        ListAttachedPoliciesAction,
        ListAuditFindingsAction,
        ListAuditTasksAction,
        ListAuthorizersAction,
        ListBillingGroupsAction,
        ListCACertificatesAction,
        ListCertificatesAction,
        ListCertificatesByCAAction,
        ListIndicesAction,
        ListJobExecutionsForJobAction,
        ListJobExecutionsForThingAction,
        ListJobsAction,
        ListOTAUpdatesAction,
        ListOutgoingCertificatesAction,
        ListPoliciesAction,
        ListPolicyPrincipalsAction,
        ListPolicyVersionsAction,
        ListPrincipalPoliciesAction,
        ListPrincipalThingsAction,
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
        ListTopicRulesAction,
        ListV2LoggingLevelsAction,
        ListViolationEventsAction,
        RegisterCACertificateAction,
        RegisterCertificateAction,
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
        StartOnDemandAuditTaskAction,
        StartThingRegistrationTaskAction,
        StopThingRegistrationTaskAction,
        TagResourceAction,
        TestAuthorizationAction,
        TestInvokeAuthorizerAction,
        TransferCertificateAction,
        UntagResourceAction,
        UpdateAccountAuditConfigurationAction,
        UpdateAuthorizerAction,
        UpdateBillingGroupAction,
        UpdateCACertificateAction,
        UpdateCertificateAction,
        UpdateDynamicThingGroupAction,
        UpdateEventConfigurationsAction,
        UpdateIndexingConfigurationAction,
        UpdateJobAction,
        UpdateRoleAliasAction,
        UpdateScheduledAuditAction,
        UpdateSecurityProfileAction,
        UpdateStreamAction,
        UpdateThingAction,
        UpdateThingGroupAction,
        UpdateThingGroupsForThingAction,
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
    IoTRequest(IoTRequestPrivate * const d);
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
