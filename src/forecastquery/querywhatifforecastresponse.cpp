// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
