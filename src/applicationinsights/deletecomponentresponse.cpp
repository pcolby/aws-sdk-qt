// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecomponentresponse.h"
#include "deletecomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DeleteComponentResponse
 * \brief The DeleteComponentResponse class provides an interace for ApplicationInsights DeleteComponent responses.
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
 * \sa ApplicationInsightsClient::deleteComponent
 */

/*!
 * Constructs a DeleteComponentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteComponentResponse::DeleteComponentResponse(
        const DeleteComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DeleteComponentResponsePrivate(this), parent)
{
    setRequest(new DeleteComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteComponentRequest * DeleteComponentResponse::request() const
{
    Q_D(const DeleteComponentResponse);
    return static_cast<const DeleteComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DeleteComponent \a response.
 */
void DeleteComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DeleteComponentResponsePrivate
 * \brief The DeleteComponentResponsePrivate class provides private implementation for DeleteComponentResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DeleteComponentResponsePrivate object with public implementation \a q.
 */
DeleteComponentResponsePrivate::DeleteComponentResponsePrivate(
    DeleteComponentResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DeleteComponent response element from \a xml.
 */
void DeleteComponentResponsePrivate::parseDeleteComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
