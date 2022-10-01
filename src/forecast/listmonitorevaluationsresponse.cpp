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

#include "listmonitorevaluationsresponse.h"
#include "listmonitorevaluationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListMonitorEvaluationsResponse
 * \brief The ListMonitorEvaluationsResponse class provides an interace for Forecast ListMonitorEvaluations responses.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listMonitorEvaluations
 */

/*!
 * Constructs a ListMonitorEvaluationsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMonitorEvaluationsResponse::ListMonitorEvaluationsResponse(
        const ListMonitorEvaluationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ForecastResponse(new ListMonitorEvaluationsResponsePrivate(this), parent)
{
    setRequest(new ListMonitorEvaluationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMonitorEvaluationsRequest * ListMonitorEvaluationsResponse::request() const
{
    Q_D(const ListMonitorEvaluationsResponse);
    return static_cast<const ListMonitorEvaluationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Forecast ListMonitorEvaluations \a response.
 */
void ListMonitorEvaluationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMonitorEvaluationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Forecast::ListMonitorEvaluationsResponsePrivate
 * \brief The ListMonitorEvaluationsResponsePrivate class provides private implementation for ListMonitorEvaluationsResponse.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListMonitorEvaluationsResponsePrivate object with public implementation \a q.
 */
ListMonitorEvaluationsResponsePrivate::ListMonitorEvaluationsResponsePrivate(
    ListMonitorEvaluationsResponse * const q) : ForecastResponsePrivate(q)
{

}

/*!
 * Parses a Forecast ListMonitorEvaluations response element from \a xml.
 */
void ListMonitorEvaluationsResponsePrivate::parseListMonitorEvaluationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMonitorEvaluationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Forecast
} // namespace QtAws
