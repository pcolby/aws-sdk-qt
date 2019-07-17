/*
    Copyright 2013-2019 Paul Colby

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

#include "describecomponentconfigurationresponse.h"
#include "describecomponentconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationResponse
 * \brief The DescribeComponentConfigurationResponse class provides an interace for ApplicationInsights DescribeComponentConfiguration responses.
 *
 * \inmodule QtAwsApplicationInsights
 *
 *  <fullname>Amazon CloudWatch Application Insights for .NET and SQL Server</fullname>
 * 
 *  Amazon CloudWatch Application Insights for .NET and SQL Server is a service that helps you detect common problems with
 *  your .NET and SQL Server-based applications. It enables you to pinpoint the source of issues in your applications (built
 *  with technologies such as Microsoft IIS, .NET, and Microsoft SQL Server), by providing key insights into detected
 * 
 *  problems>
 * 
 *  After you onboard your application, CloudWatch Application Insights for .NET and SQL Server identifies, recommends, and
 *  sets up metrics and logs. It continuously analyzes and correlates your metrics and logs for unusual behavior to surface
 *  actionable problems with your application. For example, if your application is slow and unresponsive and leading to HTTP
 *  500 errors in your Application Load Balancer (ALB), Application Insights informs you that a memory pressure problem with
 *  your SQL Server database is occurring. It bases this analysis on impactful metrics and log errors.
 *
 * \sa ApplicationInsightsClient::describeComponentConfiguration
 */

/*!
 * Constructs a DescribeComponentConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeComponentConfigurationResponse::DescribeComponentConfigurationResponse(
        const DescribeComponentConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeComponentConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeComponentConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeComponentConfigurationRequest * DescribeComponentConfigurationResponse::request() const
{
    Q_D(const DescribeComponentConfigurationResponse);
    return static_cast<const DescribeComponentConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeComponentConfiguration \a response.
 */
void DescribeComponentConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeComponentConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationResponsePrivate
 * \brief The DescribeComponentConfigurationResponsePrivate class provides private implementation for DescribeComponentConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeComponentConfigurationResponsePrivate object with public implementation \a q.
 */
DescribeComponentConfigurationResponsePrivate::DescribeComponentConfigurationResponsePrivate(
    DescribeComponentConfigurationResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeComponentConfiguration response element from \a xml.
 */
void DescribeComponentConfigurationResponsePrivate::parseDescribeComponentConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComponentConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
