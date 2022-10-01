// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECOMMERCEANALYTICSCLIENT_P_H
#define QTAWS_MARKETPLACECOMMERCEANALYTICSCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsClient;

class MarketplaceCommerceAnalyticsClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit MarketplaceCommerceAnalyticsClientPrivate(MarketplaceCommerceAnalyticsClient * const q);

private:
    Q_DECLARE_PUBLIC(MarketplaceCommerceAnalyticsClient)
    Q_DISABLE_COPY(MarketplaceCommerceAnalyticsClientPrivate)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
