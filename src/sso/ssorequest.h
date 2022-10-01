// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SSOREQUEST_H
#define QTAWS_SSOREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsssoglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Sso {

class SsoRequestPrivate;

class QTAWSSSO_EXPORT SsoRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Sso.
    enum Action {
        GetRoleCredentialsAction,
        ListAccountRolesAction,
        ListAccountsAction,
        LogoutAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SsoRequest(const Action action);
    SsoRequest(const SsoRequest &other);
    SsoRequest &operator=(const SsoRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SsoRequest &other) const;


protected:
    /// @cond internal
    explicit SsoRequest(SsoRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SsoRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
