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

#include "describeanomalydetectionexecutionsresponse.h"
#include "describeanomalydetectionexecutionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectionExecutionsResponse
 * \brief The DescribeAnomalyDetectionExecutionsResponse class provides an interace for LookoutMetrics DescribeAnomalyDetectionExecutions responses.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::describeAnomalyDetectionExecutions
 */

/*!
 * Constructs a DescribeAnomalyDetectionExecutionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAnomalyDetectionExecutionsResponse::DescribeAnomalyDetectionExecutionsResponse(
        const DescribeAnomalyDetectionExecutionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LookoutMetricsResponse(new DescribeAnomalyDetectionExecutionsResponsePrivate(this), parent)
{
    setRequest(new DescribeAnomalyDetectionExecutionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAnomalyDetectionExecutionsRequest * DescribeAnomalyDetectionExecutionsResponse::request() const
{
    return static_cast<const DescribeAnomalyDetectionExecutionsRequest *>(LookoutMetricsResponse::request());
}

/*!
 * \reimp
 * Parses a successful LookoutMetrics DescribeAnomalyDetectionExecutions \a response.
 */
void DescribeAnomalyDetectionExecutionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeAnomalyDetectionExecutionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LookoutMetrics::DescribeAnomalyDetectionExecutionsResponsePrivate
 * \brief The DescribeAnomalyDetectionExecutionsResponsePrivate class provides private implementation for DescribeAnomalyDetectionExecutionsResponse.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DescribeAnomalyDetectionExecutionsResponsePrivate object with public implementation \a q.
 */
DescribeAnomalyDetectionExecutionsResponsePrivate::DescribeAnomalyDetectionExecutionsResponsePrivate(
    DescribeAnomalyDetectionExecutionsResponse * const q) : LookoutMetricsResponsePrivate(q)
{

}

/*!
 * Parses a LookoutMetrics DescribeAnomalyDetectionExecutions response element from \a xml.
 */
void DescribeAnomalyDetectionExecutionsResponsePrivate::parseDescribeAnomalyDetectionExecutionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAnomalyDetectionExecutionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LookoutMetrics
} // namespace QtAws
