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

#include "queryforecastresponse.h"
#include "queryforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastQueryService {

/*!
 * \class QtAws::ForecastQueryService::QueryForecastResponse
 * \brief The QueryForecastResponse class provides an interace for ForecastQueryService QueryForecast responses.
 *
 * \inmodule QtAwsForecastQueryService
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastQueryServiceClient::queryForecast
 */

/*!
 * Constructs a QueryForecastResponse object for \a reply to \a request, with parent \a parent.
 */
QueryForecastResponse::QueryForecastResponse(
        const QueryForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastQueryServiceResponse(new QueryForecastResponsePrivate(this), parent)
{
    setRequest(new QueryForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryForecastRequest * QueryForecastResponse::request() const
{
    return static_cast<const QueryForecastRequest *>(ForecastQueryServiceResponse::request());
}

/*!
 * \reimp
 * Parses a successful ForecastQueryService QueryForecast \a response.
 */
void QueryForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastQueryService::QueryForecastResponsePrivate
 * \brief The QueryForecastResponsePrivate class provides private implementation for QueryForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecastQueryService
 */

/*!
 * Constructs a QueryForecastResponsePrivate object with public implementation \a q.
 */
QueryForecastResponsePrivate::QueryForecastResponsePrivate(
    QueryForecastResponse * const q) : ForecastQueryServiceResponsePrivate(q)
{

}

/*!
 * Parses a ForecastQueryService QueryForecast response element from \a xml.
 */
void QueryForecastResponsePrivate::parseQueryForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastQueryService
} // namespace QtAws
