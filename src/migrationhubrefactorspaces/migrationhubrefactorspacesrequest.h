// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MIGRATIONHUBREFACTORSPACESREQUEST_H
#define QTAWS_MIGRATIONHUBREFACTORSPACESREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmigrationhubrefactorspacesglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MigrationHubRefactorSpaces {

class MigrationHubRefactorSpacesRequestPrivate;

class QTAWSMIGRATIONHUBREFACTORSPACES_EXPORT MigrationHubRefactorSpacesRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MigrationHubRefactorSpaces.
    enum Action {
        CreateApplicationAction,
        CreateEnvironmentAction,
        CreateRouteAction,
        CreateServiceAction,
        DeleteApplicationAction,
        DeleteEnvironmentAction,
        DeleteResourcePolicyAction,
        DeleteRouteAction,
        DeleteServiceAction,
        GetApplicationAction,
        GetEnvironmentAction,
        GetResourcePolicyAction,
        GetRouteAction,
        GetServiceAction,
        ListApplicationsAction,
        ListEnvironmentVpcsAction,
        ListEnvironmentsAction,
        ListRoutesAction,
        ListServicesAction,
        ListTagsForResourceAction,
        PutResourcePolicyAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateRouteAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MigrationHubRefactorSpacesRequest(const Action action);
    MigrationHubRefactorSpacesRequest(const MigrationHubRefactorSpacesRequest &other);
    MigrationHubRefactorSpacesRequest &operator=(const MigrationHubRefactorSpacesRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MigrationHubRefactorSpacesRequest &other) const;


protected:
    /// @cond internal
    explicit MigrationHubRefactorSpacesRequest(MigrationHubRefactorSpacesRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MigrationHubRefactorSpacesRequest)

};

} // namespace MigrationHubRefactorSpaces
} // namespace QtAws

#endif
