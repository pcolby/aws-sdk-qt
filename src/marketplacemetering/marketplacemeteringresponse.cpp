// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "marketplacemeteringresponse.h"
#include "marketplacemeteringresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::MarketplaceMeteringResponse
 * \brief The MarketplaceMeteringResponse class provides an interface for MarketplaceMetering responses.
 *
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 * Constructs a MarketplaceMeteringResponse object with parent \a parent.
 */
MarketplaceMeteringResponse::MarketplaceMeteringResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MarketplaceMeteringResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MarketplaceMeteringResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceMeteringResponsePrivate.
 */
MarketplaceMeteringResponse::MarketplaceMeteringResponse(MarketplaceMeteringResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MarketplaceMeteringResponse::parseFailure(QIODevice &response)
{
    //Q_D(MarketplaceMeteringResponse);
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
 * \class QtAws::MarketplaceMetering::MarketplaceMeteringResponsePrivate
 * \brief The MarketplaceMeteringResponsePrivate class provides private implementation for MarketplaceMeteringResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 * Constructs a MarketplaceMeteringResponsePrivate object with public implementation \a q.
 */
MarketplaceMeteringResponsePrivate::MarketplaceMeteringResponsePrivate(
    MarketplaceMeteringResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MarketplaceMetering
} // namespace QtAws
