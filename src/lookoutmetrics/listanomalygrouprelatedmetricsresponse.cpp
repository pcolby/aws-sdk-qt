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

#include "listanomalygrouprelatedmetricsresponse.h"
#include "listanomalygrouprelatedmetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupRelatedMetricsResponse
 * \brief The ListAnomalyGroupRelatedMetricsResponse class provides an interace for LookoutMetrics ListAnomalyGroupRelatedMetrics responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyGroupRelatedMetrics
 */

/*!
 * Constructs a ListAnomalyGroupRelatedMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnomalyGroupRelatedMetricsResponse::ListAnomalyGroupRelatedMetricsResponse(
        const ListAnomalyGroupRelatedMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListAnomalyGroupRelatedMetricsResponsePrivate(this), parent)
{
    setRequest(new ListAnomalyGroupRelatedMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnomalyGroupRelatedMetricsRequest * ListAnomalyGroupRelatedMetricsResponse::request() const
{
    Q_D(const ListAnomalyGroupRelatedMetricsResponse);
    return static_cast<const ListAnomalyGroupRelatedMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListAnomalyGroupRelatedMetrics \a response.
 */
void ListAnomalyGroupRelatedMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnomalyGroupRelatedMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyGroupRelatedMetricsResponsePrivate
 * \brief The ListAnomalyGroupRelatedMetricsResponsePrivate class provides private implementation for ListAnomalyGroupRelatedMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyGroupRelatedMetricsResponsePrivate object with public implementation \a q.
 */
ListAnomalyGroupRelatedMetricsResponsePrivate::ListAnomalyGroupRelatedMetricsResponsePrivate(
    ListAnomalyGroupRelatedMetricsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListAnomalyGroupRelatedMetrics response element from \a xml.
 */
void ListAnomalyGroupRelatedMetricsResponsePrivate::parseListAnomalyGroupRelatedMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnomalyGroupRelatedMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
