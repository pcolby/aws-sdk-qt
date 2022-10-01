// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "marketplaceentitlementresponse.h"
#include "marketplaceentitlementresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceEntitlement {

/*!
 * \class QtAws::MarketplaceEntitlement::MarketplaceEntitlementResponse
 * \brief The MarketplaceEntitlementResponse class provides an interface for MarketplaceEntitlement responses.
 *
 * \inmodule QtAwsMarketplaceEntitlement
 */

/*!
 * Constructs a MarketplaceEntitlementResponse object with parent \a parent.
 */
MarketplaceEntitlementResponse::MarketplaceEntitlementResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MarketplaceEntitlementResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MarketplaceEntitlementResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceEntitlementResponsePrivate.
 */
MarketplaceEntitlementResponse::MarketplaceEntitlementResponse(MarketplaceEntitlementResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MarketplaceEntitlementResponse::parseFailure(QIODevice &response)
{
    //Q_D(MarketplaceEntitlementResponse);
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
 * \class QtAws::MarketplaceEntitlement::MarketplaceEntitlementResponsePrivate
 * \brief The MarketplaceEntitlementResponsePrivate class provides private implementation for MarketplaceEntitlementResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceEntitlement
 */

/*!
 * Constructs a MarketplaceEntitlementResponsePrivate object with public implementation \a q.
 */
MarketplaceEntitlementResponsePrivate::MarketplaceEntitlementResponsePrivate(
    MarketplaceEntitlementResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MarketplaceEntitlement
} // namespace QtAws
