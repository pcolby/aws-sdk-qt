// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forecastresponse.h"
#include "forecastresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ForecastResponse
 * \brief The ForecastResponse class provides an interface for Forecast responses.
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ForecastResponse object with parent \a parent.
 */
ForecastResponse::ForecastResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ForecastResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ForecastResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ForecastResponsePrivate.
 */
ForecastResponse::ForecastResponse(ForecastResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ForecastResponse::parseFailure(QIODevice &response)
{
    //Q_D(ForecastResponse);
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
 * \class QtAws::Forecast::ForecastResponsePrivate
 * \brief The ForecastResponsePrivate class provides private implementation for ForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ForecastResponsePrivate object with public implementation \a q.
 */
ForecastResponsePrivate::ForecastResponsePrivate(
    ForecastResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace Forecast
} // namespace QtAws
