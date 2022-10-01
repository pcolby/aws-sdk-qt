// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MARKETPLACECOMMERCEANALYTICSRESPONSE_P_H
#define QTAWS_MARKETPLACECOMMERCEANALYTICSRESPONSE_P_H

#include "core/awsabstractresponse_p.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

class MarketplaceCommerceAnalyticsResponse;

class MarketplaceCommerceAnalyticsResponsePrivate : public QtAws::Core::AwsAbstractResponsePrivate {

public:

    explicit MarketplaceCommerceAnalyticsResponsePrivate(MarketplaceCommerceAnalyticsResponse * const q);

    //void parseErrorResponse(QXmlStreamReader &xml);
    //void parseResponseMetadata(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(MarketplaceCommerceAnalyticsResponse)
    Q_DISABLE_COPY(MarketplaceCommerceAnalyticsResponsePrivate)

};

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws

#endif
