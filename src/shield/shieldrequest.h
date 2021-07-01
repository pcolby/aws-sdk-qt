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
        DisableProactiveEngagementAction,
        DisassociateDRTLogBucketAction,
        DisassociateDRTRoleAction,
        DisassociateHealthCheckAction,
        EnableProactiveEngagementAction,
        GetSubscriptionStateAction,
        ListAttacksAction,
        ListProtectionGroupsAction,
        ListProtectionsAction,
        ListResourcesInProtectionGroupAction,
        ListTagsForResourceAction,
        TagResourceAction,
        UntagResourceAction,
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
    ShieldRequest(ShieldRequestPrivate * const d);
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
