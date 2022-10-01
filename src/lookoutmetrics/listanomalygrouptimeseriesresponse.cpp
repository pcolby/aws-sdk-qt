// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
