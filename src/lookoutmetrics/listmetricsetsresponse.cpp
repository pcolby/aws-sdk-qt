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

#include "listmetricsetsresponse.h"
#include "listmetricsetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListMetricSetsResponse
 * \brief The ListMetricSetsResponse class provides an interace for LookoutMetrics ListMetricSets responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listMetricSets
 */

/*!
 * Constructs a ListMetricSetsResponse object for \a reply to \a request, with parent \a parent.
 */
ListMetricSetsResponse::ListMetricSetsResponse(
        const ListMetricSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListMetricSetsResponsePrivate(this), parent)
{
    setRequest(new ListMetricSetsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListMetricSetsRequest * ListMetricSetsResponse::request() const
{
    Q_D(const ListMetricSetsResponse);
    return static_cast<const ListMetricSetsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListMetricSets \a response.
 */
void ListMetricSetsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListMetricSetsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListMetricSetsResponsePrivate
 * \brief The ListMetricSetsResponsePrivate class provides private implementation for ListMetricSetsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListMetricSetsResponsePrivate object with public implementation \a q.
 */
ListMetricSetsResponsePrivate::ListMetricSetsResponsePrivate(
    ListMetricSetsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListMetricSets response element from \a xml.
 */
void ListMetricSetsResponsePrivate::parseListMetricSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListMetricSetsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
