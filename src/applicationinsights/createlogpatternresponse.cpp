// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlogpatternresponse.h"
#include "createlogpatternresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::CreateLogPatternResponse
 * \brief The CreateLogPatternResponse class provides an interace for ApplicationInsights CreateLogPattern responses.
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
 * \sa ApplicationInsightsClient::createLogPattern
 */

/*!
 * Constructs a CreateLogPatternResponse object for \a reply to \a request, with parent \a parent.
 */
CreateLogPatternResponse::CreateLogPatternResponse(
        const CreateLogPatternRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new CreateLogPatternResponsePrivate(this), parent)
{
    setRequest(new CreateLogPatternRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateLogPatternRequest * CreateLogPatternResponse::request() const
{
    Q_D(const CreateLogPatternResponse);
    return static_cast<const CreateLogPatternRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights CreateLogPattern \a response.
 */
void CreateLogPatternResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateLogPatternResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::CreateLogPatternResponsePrivate
 * \brief The CreateLogPatternResponsePrivate class provides private implementation for CreateLogPatternResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a CreateLogPatternResponsePrivate object with public implementation \a q.
 */
CreateLogPatternResponsePrivate::CreateLogPatternResponsePrivate(
    CreateLogPatternResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights CreateLogPattern response element from \a xml.
 */
void CreateLogPatternResponsePrivate::parseCreateLogPatternResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLogPatternResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
