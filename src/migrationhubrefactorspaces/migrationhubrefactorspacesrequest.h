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
