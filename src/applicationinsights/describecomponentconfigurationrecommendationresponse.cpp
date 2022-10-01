// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecomponentconfigurationrecommendationresponse.h"
#include "describecomponentconfigurationrecommendationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationRecommendationResponse
 * \brief The DescribeComponentConfigurationRecommendationResponse class provides an interace for ApplicationInsights DescribeComponentConfigurationRecommendation responses.
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
 * \sa ApplicationInsightsClient::describeComponentConfigurationRecommendation
 */

/*!
 * Constructs a DescribeComponentConfigurationRecommendationResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeComponentConfigurationRecommendationResponse::DescribeComponentConfigurationRecommendationResponse(
        const DescribeComponentConfigurationRecommendationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationInsightsResponse(new DescribeComponentConfigurationRecommendationResponsePrivate(this), parent)
{
    setRequest(new DescribeComponentConfigurationRecommendationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeComponentConfigurationRecommendationRequest * DescribeComponentConfigurationRecommendationResponse::request() const
{
    Q_D(const DescribeComponentConfigurationRecommendationResponse);
    return static_cast<const DescribeComponentConfigurationRecommendationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful ApplicationInsights DescribeComponentConfigurationRecommendation \a response.
 */
void DescribeComponentConfigurationRecommendationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeComponentConfigurationRecommendationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationRecommendationResponsePrivate
 * \brief The DescribeComponentConfigurationRecommendationResponsePrivate class provides private implementation for DescribeComponentConfigurationRecommendationResponse.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeComponentConfigurationRecommendationResponsePrivate object with public implementation \a q.
 */
DescribeComponentConfigurationRecommendationResponsePrivate::DescribeComponentConfigurationRecommendationResponsePrivate(
    DescribeComponentConfigurationRecommendationResponse * const q) : ApplicationInsightsResponsePrivate(q)
{

}

/*!
 * Parses a ApplicationInsights DescribeComponentConfigurationRecommendation response element from \a xml.
 */
void DescribeComponentConfigurationRecommendationResponsePrivate::parseDescribeComponentConfigurationRecommendationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComponentConfigurationRecommendationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace ApplicationInsights
} // namespace QtAws
