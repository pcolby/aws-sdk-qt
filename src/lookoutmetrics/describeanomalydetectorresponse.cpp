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

#include "describeanomalydetectorresponse.h"
#include "describeanomalydetectorresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectorResponse
 * \brief The DescribeAnomalyDetectorResponse class provides an interace for LookoutMetrics DescribeAnomalyDetector responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeAnomalyDetector
 */

/*!
 * Constructs a DescribeAnomalyDetectorResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAnomalyDetectorResponse::DescribeAnomalyDetectorResponse(
        const DescribeAnomalyDetectorRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DescribeAnomalyDetectorResponsePrivate(this), parent)
{
    setRequest(new DescribeAnomalyDetectorRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAnomalyDetectorRequest * DescribeAnomalyDetectorResponse::request() const
{
    return static_cast<const DescribeAnomalyDetectorRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DescribeAnomalyDetector \a response.
 */
void DescribeAnomalyDetectorResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAnomalyDetectorResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectorResponsePrivate
 * \brief The DescribeAnomalyDetectorResponsePrivate class provides private implementation for DescribeAnomalyDetectorResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeAnomalyDetectorResponsePrivate object with public implementation \a q.
 */
DescribeAnomalyDetectorResponsePrivate::DescribeAnomalyDetectorResponsePrivate(
    DescribeAnomalyDetectorResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DescribeAnomalyDetector response element from \a xml.
 */
void DescribeAnomalyDetectorResponsePrivate::parseDescribeAnomalyDetectorResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnomalyDetectorResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
