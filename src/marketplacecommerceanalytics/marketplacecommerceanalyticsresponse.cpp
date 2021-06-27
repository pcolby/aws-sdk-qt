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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(new MarketplaceCommerceAnalyticsResponsePrivate(this))
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
    : QtAws::Core::AwsAbstractResponse(parent), d_ptr(d)
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
    MarketplaceCommerceAnalyticsResponse * const q) : q_ptr(q)
{

}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
