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

#ifndef QTAWS_SSOREQUEST_H
#define QTAWS_SSOREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsssoglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SSO {

class SsoRequestPrivate;

class QTAWSSSO_EXPORT SsoRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SSO.
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

} // namespace SSO
} // namespace QtAws

#endif
