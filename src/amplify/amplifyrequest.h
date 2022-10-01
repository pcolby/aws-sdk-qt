// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYREQUEST_H
#define QTAWS_AMPLIFYREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsamplifyglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Amplify {

class AmplifyRequestPrivate;

class QTAWSAMPLIFY_EXPORT AmplifyRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Amplify.
    enum Action {
        CreateAppAction,
        CreateBackendEnvironmentAction,
        CreateBranchAction,
        CreateDeploymentAction,
        CreateDomainAssociationAction,
        CreateWebhookAction,
        DeleteAppAction,
        DeleteBackendEnvironmentAction,
        DeleteBranchAction,
        DeleteDomainAssociationAction,
        DeleteJobAction,
        DeleteWebhookAction,
        GenerateAccessLogsAction,
        GetAppAction,
        GetArtifactUrlAction,
        GetBackendEnvironmentAction,
        GetBranchAction,
        GetDomainAssociationAction,
        GetJobAction,
        GetWebhookAction,
        ListAppsAction,
        ListArtifactsAction,
        ListBackendEnvironmentsAction,
        ListBranchesAction,
        ListDomainAssociationsAction,
        ListJobsAction,
        ListTagsForResourceAction,
        ListWebhooksAction,
        StartDeploymentAction,
        StartJobAction,
        StopJobAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateAppAction,
        UpdateBranchAction,
        UpdateDomainAssociationAction,
        UpdateWebhookAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AmplifyRequest(const Action action);
    AmplifyRequest(const AmplifyRequest &other);
    AmplifyRequest &operator=(const AmplifyRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AmplifyRequest &other) const;


protected:
    /// @cond internal
    explicit AmplifyRequest(AmplifyRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AmplifyRequest)

};

} // namespace Amplify
} // namespace QtAws

#endif
