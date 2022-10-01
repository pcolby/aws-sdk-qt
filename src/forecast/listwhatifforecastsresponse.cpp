// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
