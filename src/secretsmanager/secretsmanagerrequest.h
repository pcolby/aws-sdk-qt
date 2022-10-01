// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SECRETSMANAGERREQUEST_H
#define QTAWS_SECRETSMANAGERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssecretsmanagerglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SecretsManager {

class SecretsManagerRequestPrivate;

class QTAWSSECRETSMANAGER_EXPORT SecretsManagerRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SecretsManager.
    enum Action {
        CancelRotateSecretAction,
        CreateSecretAction,
        DeleteResourcePolicyAction,
        DeleteSecretAction,
        DescribeSecretAction,
        GetRandomPasswordAction,
        GetResourcePolicyAction,
        GetSecretValueAction,
        ListSecretVersionIdsAction,
        ListSecretsAction,
        PutResourcePolicyAction,
        PutSecretValueAction,
        RemoveRegionsFromReplicationAction,
        ReplicateSecretToRegionsAction,
        RestoreSecretAction,
        RotateSecretAction,
        StopReplicationToReplicaAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateSecretAction,
        UpdateSecretVersionStageAction,
        ValidateResourcePolicyAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SecretsManagerRequest(const Action action);
    SecretsManagerRequest(const SecretsManagerRequest &other);
    SecretsManagerRequest &operator=(const SecretsManagerRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SecretsManagerRequest &other) const;


protected:
    /// @cond internal
    explicit SecretsManagerRequest(SecretsManagerRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SecretsManagerRequest)

};

} // namespace SecretsManager
} // namespace QtAws

#endif
