// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "marketplacecatalogresponse.h"
#include "marketplacecatalogresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceCatalog {

/*!
 * \class QtAws::MarketplaceCatalog::MarketplaceCatalogResponse
 * \brief The MarketplaceCatalogResponse class provides an interface for MarketplaceCatalog responses.
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a MarketplaceCatalogResponse object with parent \a parent.
 */
MarketplaceCatalogResponse::MarketplaceCatalogResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MarketplaceCatalogResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MarketplaceCatalogResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceCatalogResponsePrivate.
 */
MarketplaceCatalogResponse::MarketplaceCatalogResponse(MarketplaceCatalogResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MarketplaceCatalogResponse::parseFailure(QIODevice &response)
{
    //Q_D(MarketplaceCatalogResponse);
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
 * \class QtAws::MarketplaceCatalog::MarketplaceCatalogResponsePrivate
 * \brief The MarketplaceCatalogResponsePrivate class provides private implementation for MarketplaceCatalogResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCatalog
 */

/*!
 * Constructs a MarketplaceCatalogResponsePrivate object with public implementation \a q.
 */
MarketplaceCatalogResponsePrivate::MarketplaceCatalogResponsePrivate(
    MarketplaceCatalogResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MarketplaceCatalog
} // namespace QtAws
