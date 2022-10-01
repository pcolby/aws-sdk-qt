// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOOIDCREQUEST_H
#define QTAWS_SSOOIDCREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsssooidcglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SsoOidc {

class SsoOidcRequestPrivate;

class QTAWSSSOOIDC_EXPORT SsoOidcRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SsoOidc.
    enum Action {
        CreateTokenAction,
        RegisterClientAction,
        StartDeviceAuthorizationAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SsoOidcRequest(const Action action);
    SsoOidcRequest(const SsoOidcRequest &other);
    SsoOidcRequest &operator=(const SsoOidcRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SsoOidcRequest &other) const;


protected:
    /// @cond internal
    explicit SsoOidcRequest(SsoOidcRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsoOidcRequest)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
