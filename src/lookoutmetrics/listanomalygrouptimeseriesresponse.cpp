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

#include "listanomalygrouptimeseriesresponse.h"
#include "listanomalygrouptimeseriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupTimeSeriesResponse
 * \brief The ListAnomalyGroupTimeSeriesResponse class provides an interace for LookoutMetrics ListAnomalyGroupTimeSeries responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyGroupTimeSeries
 */

/*!
 * Constructs a ListAnomalyGroupTimeSeriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnomalyGroupTimeSeriesResponse::ListAnomalyGroupTimeSeriesResponse(
        const ListAnomalyGroupTimeSeriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListAnomalyGroupTimeSeriesResponsePrivate(this), parent)
{
    setRequest(new ListAnomalyGroupTimeSeriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnomalyGroupTimeSeriesRequest * ListAnomalyGroupTimeSeriesResponse::request() const
{
    Q_D(const ListAnomalyGroupTimeSeriesResponse);
    return static_cast<const ListAnomalyGroupTimeSeriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListAnomalyGroupTimeSeries \a response.
 */
void ListAnomalyGroupTimeSeriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnomalyGroupTimeSeriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupTimeSeriesResponsePrivate
 * \brief The ListAnomalyGroupTimeSeriesResponsePrivate class provides private implementation for ListAnomalyGroupTimeSeriesResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyGroupTimeSeriesResponsePrivate object with public implementation \a q.
 */
ListAnomalyGroupTimeSeriesResponsePrivate::ListAnomalyGroupTimeSeriesResponsePrivate(
    ListAnomalyGroupTimeSeriesResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListAnomalyGroupTimeSeries response element from \a xml.
 */
void ListAnomalyGroupTimeSeriesResponsePrivate::parseListAnomalyGroupTimeSeriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnomalyGroupTimeSeriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
