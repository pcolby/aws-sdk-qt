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

#include "describemetricsetresponse.h"
#include "describemetricsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeMetricSetResponse
 * \brief The DescribeMetricSetResponse class provides an interace for LookoutMetrics DescribeMetricSet responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeMetricSet
 */

/*!
 * Constructs a DescribeMetricSetResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMetricSetResponse::DescribeMetricSetResponse(
        const DescribeMetricSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DescribeMetricSetResponsePrivate(this), parent)
{
    setRequest(new DescribeMetricSetRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMetricSetRequest * DescribeMetricSetResponse::request() const
{
    return static_cast<const DescribeMetricSetRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DescribeMetricSet \a response.
 */
void DescribeMetricSetResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMetricSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DescribeMetricSetResponsePrivate
 * \brief The DescribeMetricSetResponsePrivate class provides private implementation for DescribeMetricSetResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeMetricSetResponsePrivate object with public implementation \a q.
 */
DescribeMetricSetResponsePrivate::DescribeMetricSetResponsePrivate(
    DescribeMetricSetResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DescribeMetricSet response element from \a xml.
 */
void DescribeMetricSetResponsePrivate::parseDescribeMetricSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMetricSetResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
