// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CLOUDFORMATIONREQUEST_H
#define QTAWS_CLOUDFORMATIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscloudformationglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CloudFormation {

class CloudFormationRequestPrivate;

class QTAWSCLOUDFORMATION_EXPORT CloudFormationRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CloudFormation.
    enum Action {
        ActivateTypeAction,
        BatchDescribeTypeConfigurationsAction,
        CancelUpdateStackAction,
        ContinueUpdateRollbackAction,
        CreateChangeSetAction,
        CreateStackAction,
        CreateStackInstancesAction,
        CreateStackSetAction,
        DeactivateTypeAction,
        DeleteChangeSetAction,
        DeleteStackAction,
        DeleteStackInstancesAction,
        DeleteStackSetAction,
        DeregisterTypeAction,
        DescribeAccountLimitsAction,
        DescribeChangeSetAction,
        DescribeChangeSetHooksAction,
        DescribePublisherAction,
        DescribeStackDriftDetectionStatusAction,
        DescribeStackEventsAction,
        DescribeStackInstanceAction,
        DescribeStackResourceAction,
        DescribeStackResourceDriftsAction,
        DescribeStackResourcesAction,
        DescribeStackSetAction,
        DescribeStackSetOperationAction,
        DescribeStacksAction,
        DescribeTypeAction,
        DescribeTypeRegistrationAction,
        DetectStackDriftAction,
        DetectStackResourceDriftAction,
        DetectStackSetDriftAction,
        EstimateTemplateCostAction,
        ExecuteChangeSetAction,
        GetStackPolicyAction,
        GetTemplateAction,
        GetTemplateSummaryAction,
        ImportStacksToStackSetAction,
        ListChangeSetsAction,
        ListExportsAction,
        ListImportsAction,
        ListStackInstancesAction,
        ListStackResourcesAction,
        ListStackSetOperationResultsAction,
        ListStackSetOperationsAction,
        ListStackSetsAction,
        ListStacksAction,
        ListTypeRegistrationsAction,
        ListTypeVersionsAction,
        ListTypesAction,
        PublishTypeAction,
        RecordHandlerProgressAction,
        RegisterPublisherAction,
        RegisterTypeAction,
        RollbackStackAction,
        SetStackPolicyAction,
        SetTypeConfigurationAction,
        SetTypeDefaultVersionAction,
        SignalResourceAction,
        StopStackSetOperationAction,
        TestTypeAction,
        UpdateStackAction,
        UpdateStackInstancesAction,
        UpdateStackSetAction,
        UpdateTerminationProtectionAction,
        ValidateTemplateAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CloudFormationRequest(const Action action);
    CloudFormationRequest(const CloudFormationRequest &other);
    CloudFormationRequest &operator=(const CloudFormationRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CloudFormationRequest &other) const;


protected:
    /// @cond internal
    explicit CloudFormationRequest(CloudFormationRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CloudFormationRequest)

};

} // namespace CloudFormation
} // namespace QtAws

#endif
