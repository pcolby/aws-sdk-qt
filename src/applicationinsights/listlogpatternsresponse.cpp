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

#include "listlogpatternsresponse.h"
#include "listlogpatternsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ListLogPatternsResponse
 * \brief The ListLogPatternsResponse class provides an interace for ApplicationInsights ListLogPatterns responses.
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
 * \sa ApplicationInsightsClient::listLogPatterns
 */

/*!
 * Constructs a ListLogPatternsResponse object for \a reply to \a request, with parent \a parent.
 */
ListLogPatternsResponse::ListLogPatternsResponse(
        const ListLogPatternsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new ListLogPatternsResponsePrivate(this), parent)
{
    setRequest(new ListLogPatternsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListLogPatternsRequest * ListLogPatternsResponse::request() const
{
    Q_D(const ListLogPatternsResponse);
    return static_cast<const ListLogPatternsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights ListLogPatterns \a response.
 */
void ListLogPatternsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListLogPatternsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::ListLogPatternsResponsePrivate
 * \brief The ListLogPatternsResponsePrivate class provides private implementation for ListLogPatternsResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ListLogPatternsResponsePrivate object with public implementation \a q.
 */
ListLogPatternsResponsePrivate::ListLogPatternsResponsePrivate(
    ListLogPatternsResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights ListLogPatterns response element from \a xml.
 */
void ListLogPatternsResponsePrivate::parseListLogPatternsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListLogPatternsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
