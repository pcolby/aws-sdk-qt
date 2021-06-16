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

#include "describelogpatternresponse.h"
#include "describelogpatternresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeLogPatternResponse
 * \brief The DescribeLogPatternResponse class provides an interace for ApplicationInsights DescribeLogPattern responses.
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
 * \sa ApplicationInsightsClient::describeLogPattern
 */

/*!
 * Constructs a DescribeLogPatternResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeLogPatternResponse::DescribeLogPatternResponse(
        const DescribeLogPatternRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeLogPatternResponsePrivate(this), parent)
{
    setRequest(new DescribeLogPatternRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeLogPatternRequest * DescribeLogPatternResponse::request() const
{
    Q_D(const DescribeLogPatternResponse);
    return static_cast<const DescribeLogPatternRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeLogPattern \a response.
 */
void DescribeLogPatternResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeLogPatternResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeLogPatternResponsePrivate
 * \brief The DescribeLogPatternResponsePrivate class provides private implementation for DescribeLogPatternResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeLogPatternResponsePrivate object with public implementation \a q.
 */
DescribeLogPatternResponsePrivate::DescribeLogPatternResponsePrivate(
    DescribeLogPatternResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeLogPattern response element from \a xml.
 */
void DescribeLogPatternResponsePrivate::parseDescribeLogPatternResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLogPatternResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
