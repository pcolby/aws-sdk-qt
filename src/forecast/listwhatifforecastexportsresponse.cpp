// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
