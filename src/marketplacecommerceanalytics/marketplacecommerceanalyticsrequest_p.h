// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECOMMERCEANALYTICSREQUEST_P_H
#define QTAWS_MARKETPLACECOMMERCEANALYTICSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "marketplacecommerceanalyticsrequest.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsRequest;

class MarketplaceCommerceAnalyticsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    MarketplaceCommerceAnalyticsRequest::Action action; ///< MarketplaceCommerceAnalytics action to be performed.
    QString apiVersion;        ///< MarketplaceCommerceAnalytics API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< MarketplaceCommerceAnalytics request (query string) parameters. @todo?

    MarketplaceCommerceAnalyticsRequestPrivate(const MarketplaceCommerceAnalyticsRequest::Action action, MarketplaceCommerceAnalyticsRequest * const q);
    MarketplaceCommerceAnalyticsRequestPrivate(const MarketplaceCommerceAnalyticsRequestPrivate &other, MarketplaceCommerceAnalyticsRequest * const q);

    static QString toString(const MarketplaceCommerceAnalyticsRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(MarketplaceCommerceAnalyticsRequest)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
