// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CODEDEPLOYREQUEST_H
#define QTAWS_CODEDEPLOYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawscodedeployglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace CodeDeploy {

class CodeDeployRequestPrivate;

class QTAWSCODEDEPLOY_EXPORT CodeDeployRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by CodeDeploy.
    enum Action {
        AddTagsToOnPremisesInstancesAction,
        BatchGetApplicationRevisionsAction,
        BatchGetApplicationsAction,
        BatchGetDeploymentGroupsAction,
        BatchGetDeploymentInstancesAction,
        BatchGetDeploymentTargetsAction,
        BatchGetDeploymentsAction,
        BatchGetOnPremisesInstancesAction,
        ContinueDeploymentAction,
        CreateApplicationAction,
        CreateDeploymentAction,
        CreateDeploymentConfigAction,
        CreateDeploymentGroupAction,
        DeleteApplicationAction,
        DeleteDeploymentConfigAction,
        DeleteDeploymentGroupAction,
        DeleteGitHubAccountTokenAction,
        DeleteResourcesByExternalIdAction,
        DeregisterOnPremisesInstanceAction,
        GetApplicationAction,
        GetApplicationRevisionAction,
        GetDeploymentAction,
        GetDeploymentConfigAction,
        GetDeploymentGroupAction,
        GetDeploymentInstanceAction,
        GetDeploymentTargetAction,
        GetOnPremisesInstanceAction,
        ListApplicationRevisionsAction,
        ListApplicationsAction,
        ListDeploymentConfigsAction,
        ListDeploymentGroupsAction,
        ListDeploymentInstancesAction,
        ListDeploymentTargetsAction,
        ListDeploymentsAction,
        ListGitHubAccountTokenNamesAction,
        ListOnPremisesInstancesAction,
        ListTagsForResourceAction,
        PutLifecycleEventHookExecutionStatusAction,
        RegisterApplicationRevisionAction,
        RegisterOnPremisesInstanceAction,
        RemoveTagsFromOnPremisesInstancesAction,
        SkipWaitTimeForInstanceTerminationAction,
        StopDeploymentAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
        UpdateDeploymentGroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    CodeDeployRequest(const Action action);
    CodeDeployRequest(const CodeDeployRequest &other);
    CodeDeployRequest &operator=(const CodeDeployRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const CodeDeployRequest &other) const;


protected:
    /// @cond internal
    explicit CodeDeployRequest(CodeDeployRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CodeDeployRequest)

};

} // namespace CodeDeploy
} // namespace QtAws

#endif
