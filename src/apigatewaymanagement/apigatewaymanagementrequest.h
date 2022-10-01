// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APIGATEWAYMANAGEMENTREQUEST_H
#define QTAWS_APIGATEWAYMANAGEMENTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsapigatewaymanagementglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace ApiGatewayManagement {

class ApiGatewayManagementRequestPrivate;

class QTAWSAPIGATEWAYMANAGEMENT_EXPORT ApiGatewayManagementRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by ApiGatewayManagement.
    enum Action {
        DeleteConnectionAction,
        GetConnectionAction,
        PostToConnectionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ApiGatewayManagementRequest(const Action action);
    ApiGatewayManagementRequest(const ApiGatewayManagementRequest &other);
    ApiGatewayManagementRequest &operator=(const ApiGatewayManagementRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ApiGatewayManagementRequest &other) const;


protected:
    /// @cond internal
    explicit ApiGatewayManagementRequest(ApiGatewayManagementRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ApiGatewayManagementRequest)

};

} // namespace ApiGatewayManagement
} // namespace QtAws

#endif
