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

#include "describeproblemresponse.h"
#include "describeproblemresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeProblemResponse
 * \brief The DescribeProblemResponse class provides an interace for ApplicationInsights DescribeProblem responses.
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
 * \sa ApplicationInsightsClient::describeProblem
 */

/*!
 * Constructs a DescribeProblemResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProblemResponse::DescribeProblemResponse(
        const DescribeProblemRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeProblemResponsePrivate(this), parent)
{
    setRequest(new DescribeProblemRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProblemRequest * DescribeProblemResponse::request() const
{
    Q_D(const DescribeProblemResponse);
    return static_cast<const DescribeProblemRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeProblem \a response.
 */
void DescribeProblemResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProblemResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeProblemResponsePrivate
 * \brief The DescribeProblemResponsePrivate class provides private implementation for DescribeProblemResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeProblemResponsePrivate object with public implementation \a q.
 */
DescribeProblemResponsePrivate::DescribeProblemResponsePrivate(
    DescribeProblemResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeProblem response element from \a xml.
 */
void DescribeProblemResponsePrivate::parseDescribeProblemResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProblemResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
