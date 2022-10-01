// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeproblemobservationsresponse.h"
#include "describeproblemobservationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeProblemObservationsResponse
 * \brief The DescribeProblemObservationsResponse class provides an interace for ApplicationInsights DescribeProblemObservations responses.
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
 * \sa ApplicationInsightsClient::describeProblemObservations
 */

/*!
 * Constructs a DescribeProblemObservationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeProblemObservationsResponse::DescribeProblemObservationsResponse(
        const DescribeProblemObservationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeProblemObservationsResponsePrivate(this), parent)
{
    setRequest(new DescribeProblemObservationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeProblemObservationsRequest * DescribeProblemObservationsResponse::request() const
{
    Q_D(const DescribeProblemObservationsResponse);
    return static_cast<const DescribeProblemObservationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeProblemObservations \a response.
 */
void DescribeProblemObservationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeProblemObservationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeProblemObservationsResponsePrivate
 * \brief The DescribeProblemObservationsResponsePrivate class provides private implementation for DescribeProblemObservationsResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeProblemObservationsResponsePrivate object with public implementation \a q.
 */
DescribeProblemObservationsResponsePrivate::DescribeProblemObservationsResponsePrivate(
    DescribeProblemObservationsResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeProblemObservations response element from \a xml.
 */
void DescribeProblemObservationsResponsePrivate::parseDescribeProblemObservationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProblemObservationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
