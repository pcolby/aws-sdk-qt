// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedimensionkeysresponse.h"
#include "describedimensionkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Pi {

/*!
 * \class QtAws::Pi::DescribeDimensionKeysResponse
 * \brief The DescribeDimensionKeysResponse class provides an interace for Pi DescribeDimensionKeys responses.
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
 * \sa PiClient::describeDimensionKeys
 */

/*!
 * Constructs a DescribeDimensionKeysResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDimensionKeysResponse::DescribeDimensionKeysResponse(
        const DescribeDimensionKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PiResponse(new DescribeDimensionKeysResponsePrivate(this), parent)
{
    setRequest(new DescribeDimensionKeysRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDimensionKeysRequest * DescribeDimensionKeysResponse::request() const
{
    Q_D(const DescribeDimensionKeysResponse);
    return static_cast<const DescribeDimensionKeysRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Pi DescribeDimensionKeys \a response.
 */
void DescribeDimensionKeysResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDimensionKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Pi::DescribeDimensionKeysResponsePrivate
 * \brief The DescribeDimensionKeysResponsePrivate class provides private implementation for DescribeDimensionKeysResponse.
 * \internal
 *
 * \inmodule QtAwsPi
 */

/*!
 * Constructs a DescribeDimensionKeysResponsePrivate object with public implementation \a q.
 */
DescribeDimensionKeysResponsePrivate::DescribeDimensionKeysResponsePrivate(
    DescribeDimensionKeysResponse * const q) : PiResponsePrivate(q)
{

}

/*!
 * Parses a Pi DescribeDimensionKeys response element from \a xml.
 */
void DescribeDimensionKeysResponsePrivate::parseDescribeDimensionKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDimensionKeysResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Pi
} // namespace QtAws
