// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationresponse.h"
#include "describeapplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeApplicationResponse
 * \brief The DescribeApplicationResponse class provides an interace for ApplicationInsights DescribeApplication responses.
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
 * \sa ApplicationInsightsClient::describeApplication
 */

/*!
 * Constructs a DescribeApplicationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeApplicationResponse::DescribeApplicationResponse(
        const DescribeApplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeApplicationResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeApplicationRequest * DescribeApplicationResponse::request() const
{
    Q_D(const DescribeApplicationResponse);
    return static_cast<const DescribeApplicationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeApplication \a response.
 */
void DescribeApplicationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeApplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeApplicationResponsePrivate
 * \brief The DescribeApplicationResponsePrivate class provides private implementation for DescribeApplicationResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeApplicationResponsePrivate object with public implementation \a q.
 */
DescribeApplicationResponsePrivate::DescribeApplicationResponsePrivate(
    DescribeApplicationResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeApplication response element from \a xml.
 */
void DescribeApplicationResponsePrivate::parseDescribeApplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
