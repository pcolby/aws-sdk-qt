// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SAGEMAKEREDGEREQUEST_H
#define QTAWS_SAGEMAKEREDGEREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawssagemakeredgeglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace SagemakerEdge {

class SagemakerEdgeRequestPrivate;

class QTAWSSAGEMAKEREDGE_EXPORT SagemakerEdgeRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by SagemakerEdge.
    enum Action {
        GetDeploymentsAction,
        GetDeviceRegistrationAction,
        SendHeartbeatAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    SagemakerEdgeRequest(const Action action);
    SagemakerEdgeRequest(const SagemakerEdgeRequest &other);
    SagemakerEdgeRequest &operator=(const SagemakerEdgeRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const SagemakerEdgeRequest &other) const;


protected:
    /// @cond internal
    explicit SagemakerEdgeRequest(SagemakerEdgeRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(SagemakerEdgeRequest)

};

} // namespace SagemakerEdge
} // namespace QtAws

#endif
