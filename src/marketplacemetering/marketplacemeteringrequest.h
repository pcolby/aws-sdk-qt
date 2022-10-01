// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACEMETERINGREQUEST_H
#define QTAWS_MARKETPLACEMETERINGREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmarketplacemeteringglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MarketplaceMetering {

class MarketplaceMeteringRequestPrivate;

class QTAWSMARKETPLACEMETERING_EXPORT MarketplaceMeteringRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MarketplaceMetering.
    enum Action {
        BatchMeterUsageAction,
        MeterUsageAction,
        RegisterUsageAction,
        ResolveCustomerAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MarketplaceMeteringRequest(const Action action);
    MarketplaceMeteringRequest(const MarketplaceMeteringRequest &other);
    MarketplaceMeteringRequest &operator=(const MarketplaceMeteringRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MarketplaceMeteringRequest &other) const;


protected:
    /// @cond internal
    explicit MarketplaceMeteringRequest(MarketplaceMeteringRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarketplaceMeteringRequest)

};

} // namespace MarketplaceMetering
} // namespace QtAws

#endif
