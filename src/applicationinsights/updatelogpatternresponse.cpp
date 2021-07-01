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

#include "updatelogpatternresponse.h"
#include "updatelogpatternresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::UpdateLogPatternResponse
 * \brief The UpdateLogPatternResponse class provides an interace for ApplicationInsights UpdateLogPattern responses.
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
 * \sa ApplicationInsightsClient::updateLogPattern
 */

/*!
 * Constructs a UpdateLogPatternResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateLogPatternResponse::UpdateLogPatternResponse(
        const UpdateLogPatternRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new UpdateLogPatternResponsePrivate(this), parent)
{
    setRequest(new UpdateLogPatternRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateLogPatternRequest * UpdateLogPatternResponse::request() const
{
    Q_D(const UpdateLogPatternResponse);
    return static_cast<const UpdateLogPatternRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights UpdateLogPattern \a response.
 */
void UpdateLogPatternResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateLogPatternResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::UpdateLogPatternResponsePrivate
 * \brief The UpdateLogPatternResponsePrivate class provides private implementation for UpdateLogPatternResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a UpdateLogPatternResponsePrivate object with public implementation \a q.
 */
UpdateLogPatternResponsePrivate::UpdateLogPatternResponsePrivate(
    UpdateLogPatternResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights UpdateLogPattern response element from \a xml.
 */
void UpdateLogPatternResponsePrivate::parseUpdateLogPatternResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateLogPatternResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
