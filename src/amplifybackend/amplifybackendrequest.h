// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_AMPLIFYBACKENDREQUEST_H
#define QTAWS_AMPLIFYBACKENDREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsamplifybackendglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace AmplifyBackend {

class AmplifyBackendRequestPrivate;

class QTAWSAMPLIFYBACKEND_EXPORT AmplifyBackendRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by AmplifyBackend.
    enum Action {
        CloneBackendAction,
        CreateBackendAction,
        CreateBackendAPIAction,
        CreateBackendAuthAction,
        CreateBackendConfigAction,
        CreateBackendStorageAction,
        CreateTokenAction,
        DeleteBackendAction,
        DeleteBackendAPIAction,
        DeleteBackendAuthAction,
        DeleteBackendStorageAction,
        DeleteTokenAction,
        GenerateBackendAPIModelsAction,
        GetBackendAction,
        GetBackendAPIAction,
        GetBackendAPIModelsAction,
        GetBackendAuthAction,
        GetBackendJobAction,
        GetBackendStorageAction,
        GetTokenAction,
        ImportBackendAuthAction,
        ImportBackendStorageAction,
        ListBackendJobsAction,
        ListS3BucketsAction,
        RemoveAllBackendsAction,
        RemoveBackendConfigAction,
        UpdateBackendAPIAction,
        UpdateBackendAuthAction,
        UpdateBackendConfigAction,
        UpdateBackendJobAction,
        UpdateBackendStorageAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    AmplifyBackendRequest(const Action action);
    AmplifyBackendRequest(const AmplifyBackendRequest &other);
    AmplifyBackendRequest &operator=(const AmplifyBackendRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const AmplifyBackendRequest &other) const;


protected:
    /// @cond internal
    explicit AmplifyBackendRequest(AmplifyBackendRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AmplifyBackendRequest)

};

} // namespace AmplifyBackend
} // namespace QtAws

#endif
