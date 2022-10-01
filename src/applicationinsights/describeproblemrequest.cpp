// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeproblemrequest.h"
#include "describeproblemrequest_p.h"
#include "describeproblemresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeProblemRequest
 * \brief The DescribeProblemRequest class provides an interface for ApplicationInsights DescribeProblem requests.
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
 * Constructs a copy of \a other.
 */
DescribeProblemRequest::DescribeProblemRequest(const DescribeProblemRequest &other)
    : ApplicationInsightsRequest(new DescribeProblemRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProblemRequest object.
 */
DescribeProblemRequest::DescribeProblemRequest()
    : ApplicationInsightsRequest(new DescribeProblemRequestPrivate(ApplicationInsightsRequest::DescribeProblemAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProblemRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProblemResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProblemRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProblemResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::DescribeProblemRequestPrivate
 * \brief The DescribeProblemRequestPrivate class provides private implementation for DescribeProblemRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeProblemRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
DescribeProblemRequestPrivate::DescribeProblemRequestPrivate(
    const ApplicationInsightsRequest::Action action, DescribeProblemRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProblemRequest
 * class' copy constructor.
 */
DescribeProblemRequestPrivate::DescribeProblemRequestPrivate(
    const DescribeProblemRequestPrivate &other, DescribeProblemRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
