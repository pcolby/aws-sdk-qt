// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecomponentresponse.h"
#include "describecomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentResponse
 * \brief The DescribeComponentResponse class provides an interace for ApplicationInsights DescribeComponent responses.
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
 * \sa ApplicationInsightsClient::describeComponent
 */

/*!
 * Constructs a DescribeComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeComponentResponse::DescribeComponentResponse(
        const DescribeComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeComponentResponsePrivate(this), parent)
{
    setRequest(new DescribeComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeComponentRequest * DescribeComponentResponse::request() const
{
    Q_D(const DescribeComponentResponse);
    return static_cast<const DescribeComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeComponent \a response.
 */
void DescribeComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentResponsePrivate
 * \brief The DescribeComponentResponsePrivate class provides private implementation for DescribeComponentResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeComponentResponsePrivate object with public implementation \a q.
 */
DescribeComponentResponsePrivate::DescribeComponentResponsePrivate(
    DescribeComponentResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeComponent response element from \a xml.
 */
void DescribeComponentResponsePrivate::parseDescribeComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
