// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeproblemobservationsrequest.h"
#include "describeproblemobservationsrequest_p.h"
#include "describeproblemobservationsresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeProblemObservationsRequest
 * \brief The DescribeProblemObservationsRequest class provides an interface for ApplicationInsights DescribeProblemObservations requests.
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
 * Constructs a copy of \a other.
 */
DescribeProblemObservationsRequest::DescribeProblemObservationsRequest(const DescribeProblemObservationsRequest &other)
    : ApplicationInsightsRequest(new DescribeProblemObservationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProblemObservationsRequest object.
 */
DescribeProblemObservationsRequest::DescribeProblemObservationsRequest()
    : ApplicationInsightsRequest(new DescribeProblemObservationsRequestPrivate(ApplicationInsightsRequest::DescribeProblemObservationsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProblemObservationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProblemObservationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProblemObservationsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProblemObservationsResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::DescribeProblemObservationsRequestPrivate
 * \brief The DescribeProblemObservationsRequestPrivate class provides private implementation for DescribeProblemObservationsRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeProblemObservationsRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
DescribeProblemObservationsRequestPrivate::DescribeProblemObservationsRequestPrivate(
    const ApplicationInsightsRequest::Action action, DescribeProblemObservationsRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProblemObservationsRequest
 * class' copy constructor.
 */
DescribeProblemObservationsRequestPrivate::DescribeProblemObservationsRequestPrivate(
    const DescribeProblemObservationsRequestPrivate &other, DescribeProblemObservationsRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
