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

#include "querywhatifforecastresponse.h"
#include "querywhatifforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastQuery {

/*!
 * \class QtAws::ForecastQuery::QueryWhatIfForecastResponse
 * \brief The QueryWhatIfForecastResponse class provides an interace for ForecastQuery QueryWhatIfForecast responses.
 *
 * \inmodule QtAwsForecastQuery
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastQueryClient::queryWhatIfForecast
 */

/*!
 * Constructs a QueryWhatIfForecastResponse object for \a reply to \a request, with parent \a parent.
 */
QueryWhatIfForecastResponse::QueryWhatIfForecastResponse(
        const QueryWhatIfForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastQueryResponse(new QueryWhatIfForecastResponsePrivate(this), parent)
{
    setRequest(new QueryWhatIfForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryWhatIfForecastRequest * QueryWhatIfForecastResponse::request() const
{
    Q_D(const QueryWhatIfForecastResponse);
    return static_cast<const QueryWhatIfForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastQuery QueryWhatIfForecast \a response.
 */
void QueryWhatIfForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryWhatIfForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastQuery::QueryWhatIfForecastResponsePrivate
 * \brief The QueryWhatIfForecastResponsePrivate class provides private implementation for QueryWhatIfForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecastQuery
 */

/*!
 * Constructs a QueryWhatIfForecastResponsePrivate object with public implementation \a q.
 */
QueryWhatIfForecastResponsePrivate::QueryWhatIfForecastResponsePrivate(
    QueryWhatIfForecastResponse * const q) : ForecastQueryResponsePrivate(q)
{

}

/*!
 * Parses a ForecastQuery QueryWhatIfForecast response element from \a xml.
 */
void QueryWhatIfForecastResponsePrivate::parseQueryWhatIfForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryWhatIfForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastQuery
} // namespace QtAws
