/*
    Copyright 2013-2018 Paul Colby

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

#include "marketplaceentitlementserviceresponse.h"
#include "marketplaceentitlementserviceresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceEntitlementService {

/*!
 * \class QtAws::MarketplaceEntitlementService::MarketplaceEntitlementServiceResponse
 * \brief The MarketplaceEntitlementServiceResponse class provides an interface for MarketplaceEntitlementService responses.
 *
 * \inmodule QtAwsMarketplaceEntitlementService
 */

/*!
 * Constructs a MarketplaceEntitlementServiceResponse object with parent \a parent.
 */
MarketplaceEntitlementServiceResponse::MarketplaceEntitlementServiceResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new MarketplaceEntitlementServiceResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a MarketplaceEntitlementServiceResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from MarketplaceEntitlementServiceResponsePrivate.
 */
MarketplaceEntitlementServiceResponse::MarketplaceEntitlementServiceResponse(MarketplaceEntitlementServiceResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void MarketplaceEntitlementServiceResponse::parseFailure(QIODevice &response)
{
    //Q_D(MarketplaceEntitlementServiceResponse);
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
 * \class QtAws::MarketplaceEntitlementService::MarketplaceEntitlementServiceResponsePrivate
 * \brief The MarketplaceEntitlementServiceResponsePrivate class provides private implementation for MarketplaceEntitlementServiceResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceEntitlementService
 */

/*!
 * Constructs a MarketplaceEntitlementServiceResponsePrivate object with public implementation \a q.
 */
MarketplaceEntitlementServiceResponsePrivate::MarketplaceEntitlementServiceResponsePrivate(
    MarketplaceEntitlementServiceResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace MarketplaceEntitlementService
} // namespace QtAws
