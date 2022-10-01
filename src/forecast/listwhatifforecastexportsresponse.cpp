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

#include "listwhatifforecastexportsresponse.h"
#include "listwhatifforecastexportsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListWhatIfForecastExportsResponse
 * \brief The ListWhatIfForecastExportsResponse class provides an interace for Forecast ListWhatIfForecastExports responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listWhatIfForecastExports
 */

/*!
 * Constructs a ListWhatIfForecastExportsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWhatIfForecastExportsResponse::ListWhatIfForecastExportsResponse(
        const ListWhatIfForecastExportsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListWhatIfForecastExportsResponsePrivate(this), parent)
{
    setRequest(new ListWhatIfForecastExportsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWhatIfForecastExportsRequest * ListWhatIfForecastExportsResponse::request() const
{
    Q_D(const ListWhatIfForecastExportsResponse);
    return static_cast<const ListWhatIfForecastExportsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListWhatIfForecastExports \a response.
 */
void ListWhatIfForecastExportsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWhatIfForecastExportsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListWhatIfForecastExportsResponsePrivate
 * \brief The ListWhatIfForecastExportsResponsePrivate class provides private implementation for ListWhatIfForecastExportsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListWhatIfForecastExportsResponsePrivate object with public implementation \a q.
 */
ListWhatIfForecastExportsResponsePrivate::ListWhatIfForecastExportsResponsePrivate(
    ListWhatIfForecastExportsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListWhatIfForecastExports response element from \a xml.
 */
void ListWhatIfForecastExportsResponsePrivate::parseListWhatIfForecastExportsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWhatIfForecastExportsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
