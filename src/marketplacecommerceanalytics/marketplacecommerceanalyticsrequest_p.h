/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_MARKETPLACECOMMERCEANALYTICSREQUEST_P_H
#define QTAWS_MARKETPLACECOMMERCEANALYTICSREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "marketplacecommerceanalyticsrequest.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsRequest;

class QTAWS_EXPORT MarketplaceCommerceAnalyticsRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

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
