// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SHIELDREQUEST_H
#define QTAWS_SHIELDREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsshieldglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace Shield {

class ShieldRequestPrivate;

class QTAWSSHIELD_EXPORT ShieldRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by Shield.
    enum Action {
        AssociateDRTLogBucketAction,
        AssociateDRTRoleAction,
        AssociateHealthCheckAction,
        AssociateProactiveEngagementDetailsAction,
        CreateProtectionAction,
        CreateProtectionGroupAction,
        CreateSubscriptionAction,
        DeleteProtectionAction,
        DeleteProtectionGroupAction,
        DeleteSubscriptionAction,
        DescribeAttackAction,
        DescribeAttackStatisticsAction,
        DescribeDRTAccessAction,
        DescribeEmergencyContactSettingsAction,
        DescribeProtectionAction,
        DescribeProtectionGroupAction,
        DescribeSubscriptionAction,
        DisableApplicationLayerAutomaticResponseAction,
        DisableProactiveEngagementAction,
        DisassociateDRTLogBucketAction,
        DisassociateDRTRoleAction,
        DisassociateHealthCheckAction,
        EnableApplicationLayerAutomaticResponseAction,
        EnableProactiveEngagementAction,
        GetSubscriptionStateAction,
        ListAttacksAction,
        ListProtectionGroupsAction,
        ListProtectionsAction,
        ListResourcesInProtectionGroupAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
        UpdateApplicationLayerAutomaticResponseAction,
        UpdateEmergencyContactSettingsAction,
        UpdateProtectionGroupAction,
        UpdateSubscriptionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    ShieldRequest(const Action action);
    ShieldRequest(const ShieldRequest &other);
    ShieldRequest &operator=(const ShieldRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const ShieldRequest &other) const;


protected:
    /// @cond internal
    explicit ShieldRequest(ShieldRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ShieldRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
