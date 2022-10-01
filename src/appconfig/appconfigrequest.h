// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGREQUEST_H
#define QTAWS_APPCONFIGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsappconfigglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AppConfig {

class AppConfigRequestPrivate;

class QTAWSAPPCONFIG_EXPORT AppConfigRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AppConfig.
    enum Action {
        CreateApplicationAction,
        CreateConfigurationProfileAction,
        CreateDeploymentStrategyAction,
        CreateEnvironmentAction,
        CreateExtensionAction,
        CreateExtensionAssociationAction,
        CreateHostedConfigurationVersionAction,
        DeleteApplicationAction,
        DeleteConfigurationProfileAction,
        DeleteDeploymentStrategyAction,
        DeleteEnvironmentAction,
        DeleteExtensionAction,
        DeleteExtensionAssociationAction,
        DeleteHostedConfigurationVersionAction,
        GetApplicationAction,
        GetConfigurationAction,
        GetConfigurationProfileAction,
        GetDeploymentAction,
        GetDeploymentStrategyAction,
        GetEnvironmentAction,
        GetExtensionAction,
        GetExtensionAssociationAction,
        GetHostedConfigurationVersionAction,
        ListApplicationsAction,
        ListConfigurationProfilesAction,
        ListDeploymentStrategiesAction,
        ListDeploymentsAction,
        ListEnvironmentsAction,
        ListExtensionAssociationsAction,
        ListExtensionsAction,
        ListHostedConfigurationVersionsAction,
        ListTagsForResourceAction,
        StartDeploymentAction,
        StopDeploymentAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationAction,
        UpdateConfigurationProfileAction,
        UpdateDeploymentStrategyAction,
        UpdateEnvironmentAction,
        UpdateExtensionAction,
        UpdateExtensionAssociationAction,
        ValidateConfigurationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AppConfigRequest(const Action action);
    AppConfigRequest(const AppConfigRequest &other);
    AppConfigRequest &operator=(const AppConfigRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AppConfigRequest &other) const;


protected:
    /// @cond internal
    explicit AppConfigRequest(AppConfigRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AppConfigRequest)

};

} // namespace AppConfig
} // namespace QtAws

#endif
