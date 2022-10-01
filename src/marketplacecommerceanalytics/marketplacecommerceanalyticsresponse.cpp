// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "marketplacecommerceanalyticsresponse.h"
#include "marketplacecommerceanalyticsresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsResponse
 * \brief The MarketplaceCommerceAnalyticsResponse class provides an interface for MarketplaceCommerceAnalytics responses.
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 */

/*!
 * Constructs a MarketplaceCommerceAnalyticsResponse object with parent \a parent.
 */
MarketplaceCommerceAnalyticsResponse::MarketplaceCommerceAnalyticsResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MarketplaceCommerceAnalyticsResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MarketplaceCommerceAnalyticsResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceCommerceAnalyticsResponsePrivate.
 */
MarketplaceCommerceAnalyticsResponse::MarketplaceCommerceAnalyticsResponse(MarketplaceCommerceAnalyticsResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MarketplaceCommerceAnalyticsResponse::parseFailure(QIODevice &response)
{
    //Q_D(MarketplaceCommerceAnalyticsResponse);
    Q_UNUSED(response);
    /*QXmlStreamReader xml(&response);
    if (xml.readNextStartElement()) {
        if (xml.name() == QLatin1String("ErrorResponse")) {
            d->parseErrorResponse(xml);
        } else {
            qWarning() << "ignoring" << xml.name();
            xml.skipCurrentElement();
        }
    }
    setXmlError(xml);*/
}

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::MarketplaceCommerceAnalyticsResponsePrivate
 * \brief The MarketplaceCommerceAnalyticsResponsePrivate class provides private implementation for MarketplaceCommerceAnalyticsResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 */

/*!
 * Constructs a MarketplaceCommerceAnalyticsResponsePrivate object with public implementation \a q.
 */
MarketplaceCommerceAnalyticsResponsePrivate::MarketplaceCommerceAnalyticsResponsePrivate(
    MarketplaceCommerceAnalyticsResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
