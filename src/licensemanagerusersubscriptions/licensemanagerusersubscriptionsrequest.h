// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSREQUEST_H
#define QTAWS_LICENSEMANAGERUSERSUBSCRIPTIONSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawslicensemanagerusersubscriptionsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace LicenseManagerUserSubscriptions {

class LicenseManagerUserSubscriptionsRequestPrivate;

class QTAWSLICENSEMANAGERUSERSUBSCRIPTIONS_EXPORT LicenseManagerUserSubscriptionsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by LicenseManagerUserSubscriptions.
    enum Action {
        AssociateUserAction,
        DeregisterIdentityProviderAction,
        DisassociateUserAction,
        ListIdentityProvidersAction,
        ListInstancesAction,
        ListProductSubscriptionsAction,
        ListUserAssociationsAction,
        RegisterIdentityProviderAction,
        StartProductSubscriptionAction,
        StopProductSubscriptionAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    LicenseManagerUserSubscriptionsRequest(const Action action);
    LicenseManagerUserSubscriptionsRequest(const LicenseManagerUserSubscriptionsRequest &other);
    LicenseManagerUserSubscriptionsRequest &operator=(const LicenseManagerUserSubscriptionsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const LicenseManagerUserSubscriptionsRequest &other) const;


protected:
    /// @cond internal
    explicit LicenseManagerUserSubscriptionsRequest(LicenseManagerUserSubscriptionsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(LicenseManagerUserSubscriptionsRequest)

};

} // namespace LicenseManagerUserSubscriptions
} // namespace QtAws

#endif
