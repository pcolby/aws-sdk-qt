// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryforecastresponse.h"
#include "queryforecastresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ForecastQuery {

/*!
 * \class QtAws::ForecastQuery::QueryForecastResponse
 * \brief The QueryForecastResponse class provides an interace for ForecastQuery QueryForecast responses.
 *
 * \inmodule QtAwsForecastQuery
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastQueryClient::queryForecast
 */

/*!
 * Constructs a QueryForecastResponse object for \a reply to \a request, with parent \a parent.
 */
QueryForecastResponse::QueryForecastResponse(
        const QueryForecastRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastQueryResponse(new QueryForecastResponsePrivate(this), parent)
{
    setRequest(new QueryForecastRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const QueryForecastRequest * QueryForecastResponse::request() const
{
    Q_D(const QueryForecastResponse);
    return static_cast<const QueryForecastRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ForecastQuery QueryForecast \a response.
 */
void QueryForecastResponse::parseSuccess(QIODevice &response)
{
    //Q_D(QueryForecastResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ForecastQuery::QueryForecastResponsePrivate
 * \brief The QueryForecastResponsePrivate class provides private implementation for QueryForecastResponse.
 * \internal
 *
 * \inmodule QtAwsForecastQuery
 */

/*!
 * Constructs a QueryForecastResponsePrivate object with public implementation \a q.
 */
QueryForecastResponsePrivate::QueryForecastResponsePrivate(
    QueryForecastResponse * const q) : ForecastQueryResponsePrivate(q)
{

}

/*!
 * Parses a ForecastQuery QueryForecast response element from \a xml.
 */
void QueryForecastResponsePrivate::parseQueryForecastResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryForecastResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ForecastQuery
} // namespace QtAws
