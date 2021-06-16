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

#include "listproblemsresponse.h"
#include "listproblemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ListProblemsResponse
 * \brief The ListProblemsResponse class provides an interace for ApplicationInsights ListProblems responses.
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
 * \sa ApplicationInsightsClient::listProblems
 */

/*!
 * Constructs a ListProblemsResponse object for \a reply to \a request, with parent \a parent.
 */
ListProblemsResponse::ListProblemsResponse(
        const ListProblemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new ListProblemsResponsePrivate(this), parent)
{
    setRequest(new ListProblemsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListProblemsRequest * ListProblemsResponse::request() const
{
    Q_D(const ListProblemsResponse);
    return static_cast<const ListProblemsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights ListProblems \a response.
 */
void ListProblemsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListProblemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::ListProblemsResponsePrivate
 * \brief The ListProblemsResponsePrivate class provides private implementation for ListProblemsResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ListProblemsResponsePrivate object with public implementation \a q.
 */
ListProblemsResponsePrivate::ListProblemsResponsePrivate(
    ListProblemsResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights ListProblems response element from \a xml.
 */
void ListProblemsResponsePrivate::parseListProblemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListProblemsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
