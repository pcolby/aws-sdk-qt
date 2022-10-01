// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ROUTE53RECOVERYREADINESSREQUEST_H
#define QTAWS_ROUTE53RECOVERYREADINESSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsroute53recoveryreadinessglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Route53RecoveryReadiness {

class Route53RecoveryReadinessRequestPrivate;

class QTAWSROUTE53RECOVERYREADINESS_EXPORT Route53RecoveryReadinessRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Route53RecoveryReadiness.
    enum Action {
        CreateCellAction,
        CreateCrossAccountAuthorizationAction,
        CreateReadinessCheckAction,
        CreateRecoveryGroupAction,
        CreateResourceSetAction,
        DeleteCellAction,
        DeleteCrossAccountAuthorizationAction,
        DeleteReadinessCheckAction,
        DeleteRecoveryGroupAction,
        DeleteResourceSetAction,
        GetArchitectureRecommendationsAction,
        GetCellAction,
        GetCellReadinessSummaryAction,
        GetReadinessCheckAction,
        GetReadinessCheckResourceStatusAction,
        GetReadinessCheckStatusAction,
        GetRecoveryGroupAction,
        GetRecoveryGroupReadinessSummaryAction,
        GetResourceSetAction,
        ListCellsAction,
        ListCrossAccountAuthorizationsAction,
        ListReadinessChecksAction,
        ListRecoveryGroupsAction,
        ListResourceSetsAction,
        ListRulesAction,
        ListTagsForResourcesAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateCellAction,
        UpdateReadinessCheckAction,
        UpdateRecoveryGroupAction,
        UpdateResourceSetAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    Route53RecoveryReadinessRequest(const Action action);
    Route53RecoveryReadinessRequest(const Route53RecoveryReadinessRequest &other);
    Route53RecoveryReadinessRequest &operator=(const Route53RecoveryReadinessRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const Route53RecoveryReadinessRequest &other) const;


protected:
    /// @cond internal
    explicit Route53RecoveryReadinessRequest(Route53RecoveryReadinessRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(Route53RecoveryReadinessRequest)

};

} // namespace Route53RecoveryReadiness
} // namespace QtAws

#endif
