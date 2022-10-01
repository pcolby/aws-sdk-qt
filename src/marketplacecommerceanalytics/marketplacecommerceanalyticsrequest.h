// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECOMMERCEANALYTICSREQUEST_H
#define QTAWS_MARKETPLACECOMMERCEANALYTICSREQUEST_H

#include "core/awsabstractrequest.h"

#include "qtawsmarketplacecommerceanalyticsglobal.h"

#include <QFlags>
#include <QObject>

class QNetworkRequest;

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsRequestPrivate;

class QTAWSMARKETPLACECOMMERCEANALYTICS_EXPORT MarketplaceCommerceAnalyticsRequest : public QtAws::Core::AwsAbstractRequest {

public:
    /// Actions supported by MarketplaceCommerceAnalytics.
    enum Action {
        GenerateDataSetAction,
        StartSupportDataExportAction,
    };
    Q_DECLARE_FLAGS(Actions, Action)

    MarketplaceCommerceAnalyticsRequest(const Action action);
    MarketplaceCommerceAnalyticsRequest(const MarketplaceCommerceAnalyticsRequest &other);
    MarketplaceCommerceAnalyticsRequest &operator=(const MarketplaceCommerceAnalyticsRequest &other);

    Action action() const;
    QString actionString() const;
    QString apiVersion() const;

    void setAction(const Action action);
    void setApiVersion(const QString &version);

    virtual bool operator==(const MarketplaceCommerceAnalyticsRequest &other) const;


protected:
    /// @cond internal
    explicit MarketplaceCommerceAnalyticsRequest(MarketplaceCommerceAnalyticsRequestPrivate * const d);
    /// @endcond

    int clearParameter(const QString &name);
    void clearParameters();
    QVariant parameter(const QString &name, const QVariant &defaultValue = QVariant()) const;
    const QVariantMap &parameters() const;
    void setParameter(const QString &name, const QVariant &value);
    void setParameters(const QVariantMap &parameters);

    virtual QNetworkRequest unsignedRequest(const QUrl &endpoint) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MarketplaceCommerceAnalyticsRequest)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
