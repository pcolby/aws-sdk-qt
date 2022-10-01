// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecomponentconfigurationrecommendationrequest.h"
#include "describecomponentconfigurationrecommendationrequest_p.h"
#include "describecomponentconfigurationrecommendationresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationRecommendationRequest
 * \brief The DescribeComponentConfigurationRecommendationRequest class provides an interface for ApplicationInsights DescribeComponentConfigurationRecommendation requests.
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
 * Constructs a copy of \a other.
 */
DescribeComponentConfigurationRecommendationRequest::DescribeComponentConfigurationRecommendationRequest(const DescribeComponentConfigurationRecommendationRequest &other)
    : ApplicationInsightsRequest(new DescribeComponentConfigurationRecommendationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeComponentConfigurationRecommendationRequest object.
 */
DescribeComponentConfigurationRecommendationRequest::DescribeComponentConfigurationRecommendationRequest()
    : ApplicationInsightsRequest(new DescribeComponentConfigurationRecommendationRequestPrivate(ApplicationInsightsRequest::DescribeComponentConfigurationRecommendationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeComponentConfigurationRecommendationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeComponentConfigurationRecommendationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeComponentConfigurationRecommendationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeComponentConfigurationRecommendationResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::DescribeComponentConfigurationRecommendationRequestPrivate
 * \brief The DescribeComponentConfigurationRecommendationRequestPrivate class provides private implementation for DescribeComponentConfigurationRecommendationRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeComponentConfigurationRecommendationRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
DescribeComponentConfigurationRecommendationRequestPrivate::DescribeComponentConfigurationRecommendationRequestPrivate(
    const ApplicationInsightsRequest::Action action, DescribeComponentConfigurationRecommendationRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeComponentConfigurationRecommendationRequest
 * class' copy constructor.
 */
DescribeComponentConfigurationRecommendationRequestPrivate::DescribeComponentConfigurationRecommendationRequestPrivate(
    const DescribeComponentConfigurationRecommendationRequestPrivate &other, DescribeComponentConfigurationRecommendationRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
