// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
