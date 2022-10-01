// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRAFANAREQUEST_H
#define QTAWS_GRAFANAREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsgrafanaglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Grafana {

class GrafanaRequestPrivate;

class QTAWSGRAFANA_EXPORT GrafanaRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Grafana.
    enum Action {
        AssociateLicenseAction,
        CreateWorkspaceAction,
        CreateWorkspaceApiKeyAction,
        DeleteWorkspaceAction,
        DeleteWorkspaceApiKeyAction,
        DescribeWorkspaceAction,
        DescribeWorkspaceAuthenticationAction,
        DisassociateLicenseAction,
        ListPermissionsAction,
        ListTagsForResourceAction,
        ListWorkspacesAction,
        TagResourceAction,
        UntagResourceAction,
        UpdatePermissionsAction,
        UpdateWorkspaceAction,
        UpdateWorkspaceAuthenticationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    GrafanaRequest(const Action action);
    GrafanaRequest(const GrafanaRequest &other);
    GrafanaRequest &operator=(const GrafanaRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const GrafanaRequest &other) const;


protected:
    /// @cond internal
    explicit GrafanaRequest(GrafanaRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GrafanaRequest)

};

} // namespace Grafana
} // namespace QtAws

#endif
