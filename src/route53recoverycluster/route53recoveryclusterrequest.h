// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYCLUSTERREQUEST_H
#define QTAWS_ROUTE53RECOVERYCLUSTERREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsroute53recoveryclusterglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Route53RecoveryCluster {

class Route53RecoveryClusterRequestPrivate;

class QTAWSROUTE53RECOVERYCLUSTER_EXPORT Route53RecoveryClusterRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Route53RecoveryCluster.
    enum Action {
        GetRoutingControlStateAction,
        ListRoutingControlsAction,
        UpdateRoutingControlStateAction,
        UpdateRoutingControlStatesAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Route53RecoveryClusterRequest(const Action action);
    Route53RecoveryClusterRequest(const Route53RecoveryClusterRequest &other);
    Route53RecoveryClusterRequest &operator=(const Route53RecoveryClusterRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Route53RecoveryClusterRequest &other) const;


protected:
    /// @cond internal
    explicit Route53RecoveryClusterRequest(Route53RecoveryClusterRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53RecoveryClusterRequest)

};

} // namespace Route53RecoveryCluster
} // namespace QtAws

#endif
