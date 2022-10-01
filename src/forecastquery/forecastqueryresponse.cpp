// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "forecastqueryresponse.h"
#include "forecastqueryresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastQuery {

/*!
 * \class QtAws::ForecastQuery::ForecastQueryResponse
 * \brief The ForecastQueryResponse class provides an interface for ForecastQuery responses.
 *
 * \inmodule QtAwsForecastQuery
 */

/*!
 * Constructs a ForecastQueryResponse object with parent \a parent.
 */
ForecastQueryResponse::ForecastQueryResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ForecastQueryResponsePrivate(this), parent)
{

}

/*!
 * \internal
 * Constructs a ForecastQueryResponse object with private implementation \a d,
 * and parent \a parent.
 *
 * This overload allows derived classes to provide their own private class
 * implementation that inherits from ForecastQueryResponsePrivate.
 */
ForecastQueryResponse::ForecastQueryResponse(ForecastQueryResponsePrivate * const d, QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(d, parent)
{

}

/*!
 * \reimp
 */
void ForecastQueryResponse::parseFailure(QIODevice &response)
{
    //Q_D(ForecastQueryResponse);
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
 * \class QtAws::ForecastQuery::ForecastQueryResponsePrivate
 * \brief The ForecastQueryResponsePrivate class provides private implementation for ForecastQueryResponse.
 * \internal
 *
 * \inmodule QtAwsForecastQuery
 */

/*!
 * Constructs a ForecastQueryResponsePrivate object with public implementation \a q.
 */
ForecastQueryResponsePrivate::ForecastQueryResponsePrivate(
    ForecastQueryResponse * const q) : QtAws::Core::AwsAbstractResponsePrivate(q)
{

}

} // namespace ForecastQuery
} // namespace QtAws
