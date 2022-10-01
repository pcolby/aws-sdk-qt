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

#include "describeforecastresponse.h"
#include "describeforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeForecastResponse
 * \brief The DescribeForecastResponse class provides an interace for Forecast DescribeForecast responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeForecast
 */

/*!
 * Constructs a DescribeForecastResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeForecastResponse::DescribeForecastResponse(
        const DescribeForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new DescribeForecastResponsePrivate(this), parent)
{
    setRequest(new DescribeForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeForecastRequest * DescribeForecastResponse::request() const
{
    Q_D(const DescribeForecastResponse);
    return static_cast<const DescribeForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast DescribeForecast \a response.
 */
void DescribeForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::DescribeForecastResponsePrivate
 * \brief The DescribeForecastResponsePrivate class provides private implementation for DescribeForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeForecastResponsePrivate object with public implementation \a q.
 */
DescribeForecastResponsePrivate::DescribeForecastResponsePrivate(
    DescribeForecastResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast DescribeForecast response element from \a xml.
 */
void DescribeForecastResponsePrivate::parseDescribeForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
