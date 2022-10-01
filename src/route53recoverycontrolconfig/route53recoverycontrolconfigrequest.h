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

#ifndef QTAWS_ROUTE53RECOVERYCONTROLCONFIGREQUEST_H
#define QTAWS_ROUTE53RECOVERYCONTROLCONFIGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsroute53recoverycontrolconfigglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Route53RecoveryControlConfig {

class Route53RecoveryControlConfigRequestPrivate;

class QTAWSROUTE53RECOVERYCONTROLCONFIG_EXPORT Route53RecoveryControlConfigRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Route53RecoveryControlConfig.
    enum Action {
        CreateClusterAction,
        CreateControlPanelAction,
        CreateRoutingControlAction,
        CreateSafetyRuleAction,
        DeleteClusterAction,
        DeleteControlPanelAction,
        DeleteRoutingControlAction,
        DeleteSafetyRuleAction,
        DescribeClusterAction,
        DescribeControlPanelAction,
        DescribeRoutingControlAction,
        DescribeSafetyRuleAction,
        ListAssociatedRoute53HealthChecksAction,
        ListClustersAction,
        ListControlPanelsAction,
        ListRoutingControlsAction,
        ListSafetyRulesAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateControlPanelAction,
        UpdateRoutingControlAction,
        UpdateSafetyRuleAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Route53RecoveryControlConfigRequest(const Action action);
    Route53RecoveryControlConfigRequest(const Route53RecoveryControlConfigRequest &other);
    Route53RecoveryControlConfigRequest &operator=(const Route53RecoveryControlConfigRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Route53RecoveryControlConfigRequest &other) const;


protected:
    /// @cond internal
    explicit Route53RecoveryControlConfigRequest(Route53RecoveryControlConfigRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53RecoveryControlConfigRequest)

};

} // namespace Route53RecoveryControlConfig
} // namespace QtAws

#endif
