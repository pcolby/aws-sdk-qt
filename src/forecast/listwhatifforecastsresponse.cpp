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

#include "listwhatifforecastsresponse.h"
#include "listwhatifforecastsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListWhatIfForecastsResponse
 * \brief The ListWhatIfForecastsResponse class provides an interace for Forecast ListWhatIfForecasts responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listWhatIfForecasts
 */

/*!
 * Constructs a ListWhatIfForecastsResponse object for \a reply to \a request, with parent \a parent.
 */
ListWhatIfForecastsResponse::ListWhatIfForecastsResponse(
        const ListWhatIfForecastsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListWhatIfForecastsResponsePrivate(this), parent)
{
    setRequest(new ListWhatIfForecastsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListWhatIfForecastsRequest * ListWhatIfForecastsResponse::request() const
{
    Q_D(const ListWhatIfForecastsResponse);
    return static_cast<const ListWhatIfForecastsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListWhatIfForecasts \a response.
 */
void ListWhatIfForecastsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListWhatIfForecastsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListWhatIfForecastsResponsePrivate
 * \brief The ListWhatIfForecastsResponsePrivate class provides private implementation for ListWhatIfForecastsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListWhatIfForecastsResponsePrivate object with public implementation \a q.
 */
ListWhatIfForecastsResponsePrivate::ListWhatIfForecastsResponsePrivate(
    ListWhatIfForecastsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListWhatIfForecasts response element from \a xml.
 */
void ListWhatIfForecastsResponsePrivate::parseListWhatIfForecastsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListWhatIfForecastsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
