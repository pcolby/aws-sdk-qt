// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEENTITLEMENTREQUEST_H
#define QTAWS_MARKETPLACEENTITLEMENTREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmarketplaceentitlementglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MarketplaceEntitlement {

class MarketplaceEntitlementRequestPrivate;

class QTAWSMARKETPLACEENTITLEMENT_EXPORT MarketplaceEntitlementRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MarketplaceEntitlement.
    enum Action {
        GetEntitlementsAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MarketplaceEntitlementRequest(const Action action);
    MarketplaceEntitlementRequest(const MarketplaceEntitlementRequest &other);
    MarketplaceEntitlementRequest &operator=(const MarketplaceEntitlementRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MarketplaceEntitlementRequest &other) const;


protected:
    /// @cond internal
    explicit MarketplaceEntitlementRequest(MarketplaceEntitlementRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarketplaceEntitlementRequest)

};

} // namespace MarketplaceEntitlement
} // namespace QtAws

#endif
