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
        AddThingToThingGroupAction,
        AssociateTargetsWithJobAction,
        AttachPolicyAction,
        AttachPrincipalPolicyAction,
        AttachThingPrincipalAction,
        CancelCertificateTransferAction,
        CancelJobAction,
        ClearDefaultAuthorizerAction,
        CreateAuthorizerAction,
        CreateCertificateFromCsrAction,
        CreateJobAction,
        CreateKeysAndCertificateAction,
        CreateOTAUpdateAction,
        CreatePolicyAction,
        CreatePolicyVersionAction,
        CreateRoleAliasAction,
        CreateStreamAction,
        CreateThingAction,
        CreateThingGroupAction,
        CreateThingTypeAction,
        CreateTopicRuleAction,
        DeleteAuthorizerAction,
        DeleteCACertificateAction,
        DeleteCertificateAction,
        DeleteOTAUpdateAction,
        DeletePolicyAction,
        DeletePolicyVersionAction,
        DeleteRegistrationCodeAction,
        DeleteRoleAliasAction,
        DeleteStreamAction,
        DeleteThingAction,
        DeleteThingGroupAction,
        DeleteThingTypeAction,
        DeleteTopicRuleAction,
        DeleteV2LoggingLevelAction,
        DeprecateThingTypeAction,
        DescribeAuthorizerAction,
        DescribeCACertificateAction,
        DescribeCertificateAction,
        DescribeDefaultAuthorizerAction,
        DescribeEndpointAction,
        DescribeEventConfigurationsAction,
        DescribeIndexAction,
        DescribeJobAction,
        DescribeJobExecutionAction,
        DescribeRoleAliasAction,
        DescribeStreamAction,
        DescribeThingAction,
        DescribeThingGroupAction,
        DescribeThingRegistrationTaskAction,
        DescribeThingTypeAction,
        DetachPolicyAction,
        DetachPrincipalPolicyAction,
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
        GetTopicRuleAction,
        GetV2LoggingOptionsAction,
        ListAttachedPoliciesAction,
        ListAuthorizersAction,
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
        ListStreamsAction,
        ListTargetsForPolicyAction,
        ListThingGroupsAction,
        ListThingGroupsForThingAction,
        ListThingPrincipalsAction,
        ListThingRegistrationTaskReportsAction,
        ListThingRegistrationTasksAction,
        ListThingTypesAction,
        ListThingsAction,
        ListThingsInThingGroupAction,
        ListTopicRulesAction,
        ListV2LoggingLevelsAction,
        RegisterCACertificateAction,
        RegisterCertificateAction,
        RegisterThingAction,
        RejectCertificateTransferAction,
        RemoveThingFromThingGroupAction,
        ReplaceTopicRuleAction,
        SearchIndexAction,
        SetDefaultAuthorizerAction,
        SetDefaultPolicyVersionAction,
        SetLoggingOptionsAction,
        SetV2LoggingLevelAction,
        SetV2LoggingOptionsAction,
        StartThingRegistrationTaskAction,
        StopThingRegistrationTaskAction,
        TestAuthorizationAction,
        TestInvokeAuthorizerAction,
        TransferCertificateAction,
        UpdateAuthorizerAction,
        UpdateCACertificateAction,
        UpdateCertificateAction,
        UpdateEventConfigurationsAction,
        UpdateIndexingConfigurationAction,
        UpdateRoleAliasAction,
        UpdateStreamAction,
        UpdateThingAction,
        UpdateThingGroupAction,
        UpdateThingGroupsForThingAction,
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

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const override;

private:
    Q_DECLARE_PRIVATE(IoTRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
