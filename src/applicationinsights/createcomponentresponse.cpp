// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createcomponentresponse.h"
#include "createcomponentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::CreateComponentResponse
 * \brief The CreateComponentResponse class provides an interace for ApplicationInsights CreateComponent responses.
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
 * \sa ApplicationInsightsClient::createComponent
 */

/*!
 * Constructs a CreateComponentResponse object for \a reply to \a request, with parent \a parent.
 */
CreateComponentResponse::CreateComponentResponse(
        const CreateComponentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new CreateComponentResponsePrivate(this), parent)
{
    setRequest(new CreateComponentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateComponentRequest * CreateComponentResponse::request() const
{
    Q_D(const CreateComponentResponse);
    return static_cast<const CreateComponentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights CreateComponent \a response.
 */
void CreateComponentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateComponentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::CreateComponentResponsePrivate
 * \brief The CreateComponentResponsePrivate class provides private implementation for CreateComponentResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a CreateComponentResponsePrivate object with public implementation \a q.
 */
CreateComponentResponsePrivate::CreateComponentResponsePrivate(
    CreateComponentResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights CreateComponent response element from \a xml.
 */
void CreateComponentResponsePrivate::parseCreateComponentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateComponentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
