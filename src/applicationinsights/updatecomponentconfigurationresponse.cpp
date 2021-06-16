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

#include "updatecomponentconfigurationresponse.h"
#include "updatecomponentconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::UpdateComponentConfigurationResponse
 * \brief The UpdateComponentConfigurationResponse class provides an interace for ApplicationInsights UpdateComponentConfiguration responses.
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
 * \sa ApplicationInsightsClient::updateComponentConfiguration
 */

/*!
 * Constructs a UpdateComponentConfigurationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateComponentConfigurationResponse::UpdateComponentConfigurationResponse(
        const UpdateComponentConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new UpdateComponentConfigurationResponsePrivate(this), parent)
{
    setRequest(new UpdateComponentConfigurationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateComponentConfigurationRequest * UpdateComponentConfigurationResponse::request() const
{
    Q_D(const UpdateComponentConfigurationResponse);
    return static_cast<const UpdateComponentConfigurationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights UpdateComponentConfiguration \a response.
 */
void UpdateComponentConfigurationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateComponentConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::UpdateComponentConfigurationResponsePrivate
 * \brief The UpdateComponentConfigurationResponsePrivate class provides private implementation for UpdateComponentConfigurationResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a UpdateComponentConfigurationResponsePrivate object with public implementation \a q.
 */
UpdateComponentConfigurationResponsePrivate::UpdateComponentConfigurationResponsePrivate(
    UpdateComponentConfigurationResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights UpdateComponentConfiguration response element from \a xml.
 */
void UpdateComponentConfigurationResponsePrivate::parseUpdateComponentConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateComponentConfigurationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
