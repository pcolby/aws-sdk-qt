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

#include "listforecastsresponse.h"
#include "listforecastsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListForecastsResponse
 * \brief The ListForecastsResponse class provides an interace for Forecast ListForecasts responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listForecasts
 */

/*!
 * Constructs a ListForecastsResponse object for \a reply to \a request, with parent \a parent.
 */
ListForecastsResponse::ListForecastsResponse(
        const ListForecastsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListForecastsResponsePrivate(this), parent)
{
    setRequest(new ListForecastsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListForecastsRequest * ListForecastsResponse::request() const
{
    Q_D(const ListForecastsResponse);
    return static_cast<const ListForecastsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListForecasts \a response.
 */
void ListForecastsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListForecastsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListForecastsResponsePrivate
 * \brief The ListForecastsResponsePrivate class provides private implementation for ListForecastsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListForecastsResponsePrivate object with public implementation \a q.
 */
ListForecastsResponsePrivate::ListForecastsResponsePrivate(
    ListForecastsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListForecasts response element from \a xml.
 */
void ListForecastsResponsePrivate::parseListForecastsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListForecastsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
