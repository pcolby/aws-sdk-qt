/*
    Copyright 2013-2019 Paul Colby

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

#include "pricingresponse.h"
#include "pricingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pricing {

/*!
 * \class QtAws::Pricing::PricingResponse
 * \brief The PricingResponse class provides an interface for Pricing responses.
 *
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a PricingResponse object with parent \a parent.
 */
PricingResponse::PricingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new PricingResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a PricingResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from PricingResponsePrivate.
 */
PricingResponse::PricingResponse(PricingResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void PricingResponse::parseFailure(QIODevice &response)
{
    //Q_D(PricingResponse);
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
 * \class QtAws::Pricing::PricingResponsePrivate
 * \brief The PricingResponsePrivate class provides private implementation for PricingResponse.
 * \internal
 *
 * \inmodule QtAwsPricing
 */

/*!
 * Constructs a PricingResponsePrivate object with public implementation \a q.
 */
PricingResponsePrivate::PricingResponsePrivate(
    PricingResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Pricing
} // namespace QtAws
