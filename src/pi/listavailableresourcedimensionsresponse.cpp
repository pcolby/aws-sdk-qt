// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listavailableresourcedimensionsresponse.h"
#include "listavailableresourcedimensionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pi {

/*!
 * \class QtAws::Pi::ListAvailableResourceDimensionsResponse
 * \brief The ListAvailableResourceDimensionsResponse class provides an interace for Pi ListAvailableResourceDimensions responses.
 *
 * \inmodule QtAwsPi
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
 *  of your DB instance. Amazon CloudWatch provides the authoritative source for Amazon Web Services service-vended
 *  monitoring metrics. Performance Insights offers a domain-specific view of DB
 * 
 *  load>
 * 
 *  DB load is measured as average active sessions. Performance Insights provides the data to API consumers as a
 *  two-dimensional time-series dataset. The time dimension provides DB load data for each time point in the queried time
 *  range. Each time point decomposes overall load in relation to the requested dimensions, measured at that time point.
 *  Examples include SQL, Wait event, User, and
 * 
 *  Host> <ul> <li>
 * 
 *  To learn more about Performance Insights and Amazon Aurora DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/AuroraUserGuide/USER_PerfInsights.html"> Amazon Aurora User Guide</a>
 *  </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon RDS DB instances, go to the <i> <a
 *  href="https://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/USER_PerfInsights.html"> Amazon RDS User Guide</a> </i>.
 * 
 *  </p </li> <li>
 * 
 *  To learn more about Performance Insights and Amazon DocumentDB clusters, go to the <i> <a
 *  href="https://docs.aws.amazon.com/documentdb/latest/developerguide/performance-insights.html"> Amazon DocumentDB
 *  Developer Guide</a>
 *
 * \sa PiClient::listAvailableResourceDimensions
 */

/*!
 * Constructs a ListAvailableResourceDimensionsResponse object for \a reply to \a request, with parent \a parent.
 */
ListAvailableResourceDimensionsResponse::ListAvailableResourceDimensionsResponse(
        const ListAvailableResourceDimensionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PiResponse(new ListAvailableResourceDimensionsResponsePrivate(this), parent)
{
    setRequest(new ListAvailableResourceDimensionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListAvailableResourceDimensionsRequest * ListAvailableResourceDimensionsResponse::request() const
{
    Q_D(const ListAvailableResourceDimensionsResponse);
    return static_cast<const ListAvailableResourceDimensionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pi ListAvailableResourceDimensions \a response.
 */
void ListAvailableResourceDimensionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListAvailableResourceDimensionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pi::ListAvailableResourceDimensionsResponsePrivate
 * \brief The ListAvailableResourceDimensionsResponsePrivate class provides private implementation for ListAvailableResourceDimensionsResponse.
 * \internal
 *
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a ListAvailableResourceDimensionsResponsePrivate object with public implementation \a q.
 */
ListAvailableResourceDimensionsResponsePrivate::ListAvailableResourceDimensionsResponsePrivate(
    ListAvailableResourceDimensionsResponse * const q) : PiResponsePrivate(q)
{

}

/*!
 * Parses a Pi ListAvailableResourceDimensions response element from \a xml.
 */
void ListAvailableResourceDimensionsResponsePrivate::parseListAvailableResourceDimensionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAvailableResourceDimensionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pi
} // namespace QtAws
