// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REDSHIFTSERVERLESSREQUEST_H
#define QTAWS_REDSHIFTSERVERLESSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsredshiftserverlessglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace RedshiftServerless {

class RedshiftServerlessRequestPrivate;

class QTAWSREDSHIFTSERVERLESS_EXPORT RedshiftServerlessRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by RedshiftServerless.
    enum Action {
        ConvertRecoveryPointToSnapshotAction,
        CreateEndpointAccessAction,
        CreateNamespaceAction,
        CreateSnapshotAction,
        CreateUsageLimitAction,
        CreateWorkgroupAction,
        DeleteEndpointAccessAction,
        DeleteNamespaceAction,
        DeleteResourcePolicyAction,
        DeleteSnapshotAction,
        DeleteUsageLimitAction,
        DeleteWorkgroupAction,
        GetCredentialsAction,
        GetEndpointAccessAction,
        GetNamespaceAction,
        GetRecoveryPointAction,
        GetResourcePolicyAction,
        GetSnapshotAction,
        GetUsageLimitAction,
        GetWorkgroupAction,
        ListEndpointAccessAction,
        ListNamespacesAction,
        ListRecoveryPointsAction,
        ListSnapshotsAction,
        ListTagsForResourceAction,
        ListUsageLimitsAction,
        ListWorkgroupsAction,
        PutResourcePolicyAction,
        RestoreFromRecoveryPointAction,
        RestoreFromSnapshotAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateEndpointAccessAction,
        UpdateNamespaceAction,
        UpdateSnapshotAction,
        UpdateUsageLimitAction,
        UpdateWorkgroupAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    RedshiftServerlessRequest(const Action action);
    RedshiftServerlessRequest(const RedshiftServerlessRequest &other);
    RedshiftServerlessRequest &operator=(const RedshiftServerlessRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const RedshiftServerlessRequest &other) const;


protected:
    /// @cond internal
    explicit RedshiftServerlessRequest(RedshiftServerlessRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RedshiftServerlessRequest)

};

} // namespace RedshiftServerless
} // namespace QtAws

#endif
