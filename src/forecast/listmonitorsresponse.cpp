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

#include "listmonitorsresponse.h"
#include "listmonitorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListMonitorsResponse
 * \brief The ListMonitorsResponse class provides an interace for Forecast ListMonitors responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listMonitors
 */

/*!
 * Constructs a ListMonitorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMonitorsResponse::ListMonitorsResponse(
        const ListMonitorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListMonitorsResponsePrivate(this), parent)
{
    setRequest(new ListMonitorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMonitorsRequest * ListMonitorsResponse::request() const
{
    Q_D(const ListMonitorsResponse);
    return static_cast<const ListMonitorsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListMonitors \a response.
 */
void ListMonitorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMonitorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListMonitorsResponsePrivate
 * \brief The ListMonitorsResponsePrivate class provides private implementation for ListMonitorsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListMonitorsResponsePrivate object with public implementation \a q.
 */
ListMonitorsResponsePrivate::ListMonitorsResponsePrivate(
    ListMonitorsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListMonitors response element from \a xml.
 */
void ListMonitorsResponsePrivate::parseListMonitorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMonitorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
