// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelogpatternresponse.h"
#include "deletelogpatternresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DeleteLogPatternResponse
 * \brief The DeleteLogPatternResponse class provides an interace for ApplicationInsights DeleteLogPattern responses.
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
 * \sa ApplicationInsightsClient::deleteLogPattern
 */

/*!
 * Constructs a DeleteLogPatternResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteLogPatternResponse::DeleteLogPatternResponse(
        const DeleteLogPatternRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DeleteLogPatternResponsePrivate(this), parent)
{
    setRequest(new DeleteLogPatternRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteLogPatternRequest * DeleteLogPatternResponse::request() const
{
    Q_D(const DeleteLogPatternResponse);
    return static_cast<const DeleteLogPatternRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DeleteLogPattern \a response.
 */
void DeleteLogPatternResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteLogPatternResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DeleteLogPatternResponsePrivate
 * \brief The DeleteLogPatternResponsePrivate class provides private implementation for DeleteLogPatternResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DeleteLogPatternResponsePrivate object with public implementation \a q.
 */
DeleteLogPatternResponsePrivate::DeleteLogPatternResponsePrivate(
    DeleteLogPatternResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DeleteLogPattern response element from \a xml.
 */
void DeleteLogPatternResponsePrivate::parseDeleteLogPatternResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLogPatternResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
