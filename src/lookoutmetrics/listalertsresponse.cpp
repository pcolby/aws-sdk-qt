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

#include "listalertsresponse.h"
#include "listalertsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAlertsResponse
 * \brief The ListAlertsResponse class provides an interace for LookoutMetrics ListAlerts responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAlerts
 */

/*!
 * Constructs a ListAlertsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAlertsResponse::ListAlertsResponse(
        const ListAlertsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListAlertsResponsePrivate(this), parent)
{
    setRequest(new ListAlertsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAlertsRequest * ListAlertsResponse::request() const
{
    return static_cast<const ListAlertsRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListAlerts \a response.
 */
void ListAlertsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAlertsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListAlertsResponsePrivate
 * \brief The ListAlertsResponsePrivate class provides private implementation for ListAlertsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAlertsResponsePrivate object with public implementation \a q.
 */
ListAlertsResponsePrivate::ListAlertsResponsePrivate(
    ListAlertsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListAlerts response element from \a xml.
 */
void ListAlertsResponsePrivate::parseListAlertsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAlertsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
