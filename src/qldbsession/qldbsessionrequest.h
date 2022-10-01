// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_QLDBSESSIONREQUEST_H
#define QTAWS_QLDBSESSIONREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsqldbsessionglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace QldbSession {

class QldbSessionRequestPrivate;

class QTAWSQLDBSESSION_EXPORT QldbSessionRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by QldbSession.
    enum Action {
        SendCommandAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    QldbSessionRequest(const Action action);
    QldbSessionRequest(const QldbSessionRequest &other);
    QldbSessionRequest &operator=(const QldbSessionRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const QldbSessionRequest &other) const;


protected:
    /// @cond internal
    explicit QldbSessionRequest(QldbSessionRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(QldbSessionRequest)

};

} // namespace QldbSession
} // namespace QtAws

#endif
