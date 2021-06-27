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

#include "listanomalydetectorsresponse.h"
#include "listanomalydetectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyDetectorsResponse
 * \brief The ListAnomalyDetectorsResponse class provides an interace for LookoutMetrics ListAnomalyDetectors responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::listAnomalyDetectors
 */

/*!
 * Constructs a ListAnomalyDetectorsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAnomalyDetectorsResponse::ListAnomalyDetectorsResponse(
        const ListAnomalyDetectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new ListAnomalyDetectorsResponsePrivate(this), parent)
{
    setRequest(new ListAnomalyDetectorsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAnomalyDetectorsRequest * ListAnomalyDetectorsResponse::request() const
{
    return static_cast<const ListAnomalyDetectorsRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics ListAnomalyDetectors \a response.
 */
void ListAnomalyDetectorsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAnomalyDetectorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::ListAnomalyDetectorsResponsePrivate
 * \brief The ListAnomalyDetectorsResponsePrivate class provides private implementation for ListAnomalyDetectorsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a ListAnomalyDetectorsResponsePrivate object with public implementation \a q.
 */
ListAnomalyDetectorsResponsePrivate::ListAnomalyDetectorsResponsePrivate(
    ListAnomalyDetectorsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics ListAnomalyDetectors response element from \a xml.
 */
void ListAnomalyDetectorsResponsePrivate::parseListAnomalyDetectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAnomalyDetectorsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
