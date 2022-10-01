// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeobservationresponse.h"
#include "describeobservationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeObservationResponse
 * \brief The DescribeObservationResponse class provides an interace for ApplicationInsights DescribeObservation responses.
 *
 * \inmodule QtAwsApplicationInsights
 *
 *  <fullname>Amazon CloudWatch Application Insights</fullname>
 * 
 *  Amazon CloudWatch Application Insights is a service that helps you detect common problems with your applications. It
 *  enables you to pinpoint the source of issues in your applications (built with technologies such as Microsoft IIS, .NET,
 *  and Microsoft SQL Server), by providing key insights into detected
 * 
 *  problems>
 * 
 *  After you onboard your application, CloudWatch Application Insights identifies, recommends, and sets up metrics and
 *  logs. It continuously analyzes and correlates your metrics and logs for unusual behavior to surface actionable problems
 *  with your application. For example, if your application is slow and unresponsive and leading to HTTP 500 errors in your
 *  Application Load Balancer (ALB), Application Insights informs you that a memory pressure problem with your SQL Server
 *  database is occurring. It bases this analysis on impactful metrics and log errors.
 *
 * \sa ApplicationInsightsClient::describeObservation
 */

/*!
 * Constructs a DescribeObservationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeObservationResponse::DescribeObservationResponse(
        const DescribeObservationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeObservationResponsePrivate(this), parent)
{
    setRequest(new DescribeObservationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeObservationRequest * DescribeObservationResponse::request() const
{
    Q_D(const DescribeObservationResponse);
    return static_cast<const DescribeObservationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeObservation \a response.
 */
void DescribeObservationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeObservationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeObservationResponsePrivate
 * \brief The DescribeObservationResponsePrivate class provides private implementation for DescribeObservationResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeObservationResponsePrivate object with public implementation \a q.
 */
DescribeObservationResponsePrivate::DescribeObservationResponsePrivate(
    DescribeObservationResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeObservation response element from \a xml.
 */
void DescribeObservationResponsePrivate::parseDescribeObservationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeObservationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
