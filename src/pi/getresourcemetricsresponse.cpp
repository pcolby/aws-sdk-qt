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

#include "getresourcemetricsresponse.h"
#include "getresourcemetricsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace PI {

/*!
 * \class QtAws::PI::GetResourceMetricsResponse
 * \brief The GetResourceMetricsResponse class provides an interace for PI GetResourceMetrics responses.
 *
 * \inmodule QtAwsPI
 *
 *  <fullname>Amazon RDS Performance Insights</fullname>
 * 
 *  Amazon RDS Performance Insights enables you to monitor and explore different dimensions of database load based on data
 *  captured from a running DB instance. The guide provides detailed information about Performance Insights data types,
 *  parameters and
 * 
 *  errors>
 * 
 *  When Performance Insights is enabled, the Amazon RDS Performance Insights API provides visibility into the performance
 *  of your DB instance. Amazon CloudWatch provides the authoritative source for AWS service-vended monitoring metrics.
 *  Performance Insights offers a domain-specific view of DB load.
 * 
 *  </p
 * 
 *  DB load is measured as Average Active Sessions. Performance Insights provides the data to API consumers as a
 *  two-dimensional time-series dataset. The time dimension provides DB load data for each time point in the queried time
 *  range. Each time point decomposes overall load in relation to the requested dimensions, measured at that time point.
 *  Examples include SQL, Wait event, User, and
 * 
 *  Host> <ul> <li>
 * 
 *  To learn more about Performance Insights and Amazon Aurora DB instances, go to the <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html">Amazon Aurora User
 * 
 *  Guide</a>> </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon RDS DB instances, go to the <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html">Amazon RDS User
 *
 * \sa PiClient::getResourceMetrics
 */

/*!
 * Constructs a GetResourceMetricsResponse object for \a reply to \a request, with parent \a parent.
 */
GetResourceMetricsResponse::GetResourceMetricsResponse(
        const GetResourceMetricsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PiResponse(new GetResourceMetricsResponsePrivate(this), parent)
{
    setRequest(new GetResourceMetricsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetResourceMetricsRequest * GetResourceMetricsResponse::request() const
{
    Q_D(const GetResourceMetricsResponse);
    return static_cast<const GetResourceMetricsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful PI GetResourceMetrics \a response.
 */
void GetResourceMetricsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetResourceMetricsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::PI::GetResourceMetricsResponsePrivate
 * \brief The GetResourceMetricsResponsePrivate class provides private implementation for GetResourceMetricsResponse.
 * \internal
 *
 * \inmodule QtAwsPI
 */

/*!
 * Constructs a GetResourceMetricsResponsePrivate object with public implementation \a q.
 */
GetResourceMetricsResponsePrivate::GetResourceMetricsResponsePrivate(
    GetResourceMetricsResponse * const q) : PiResponsePrivate(q)
{

}

/*!
 * Parses a PI GetResourceMetrics response element from \a xml.
 */
void GetResourceMetricsResponsePrivate::parseGetResourceMetricsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetResourceMetricsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace PI
} // namespace QtAws
