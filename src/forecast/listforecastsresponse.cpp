// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
