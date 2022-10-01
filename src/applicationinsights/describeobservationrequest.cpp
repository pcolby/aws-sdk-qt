// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeobservationrequest.h"
#include "describeobservationrequest_p.h"
#include "describeobservationresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DescribeObservationRequest
 * \brief The DescribeObservationRequest class provides an interface for ApplicationInsights DescribeObservation requests.
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
 * \sa ApplicationInsightsClient::describeObservation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeObservationRequest::DescribeObservationRequest(const DescribeObservationRequest &other)
    : ApplicationInsightsRequest(new DescribeObservationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeObservationRequest object.
 */
DescribeObservationRequest::DescribeObservationRequest()
    : ApplicationInsightsRequest(new DescribeObservationRequestPrivate(ApplicationInsightsRequest::DescribeObservationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeObservationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeObservationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeObservationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeObservationResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::DescribeObservationRequestPrivate
 * \brief The DescribeObservationRequestPrivate class provides private implementation for DescribeObservationRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DescribeObservationRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
DescribeObservationRequestPrivate::DescribeObservationRequestPrivate(
    const ApplicationInsightsRequest::Action action, DescribeObservationRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeObservationRequest
 * class' copy constructor.
 */
DescribeObservationRequestPrivate::DescribeObservationRequestPrivate(
    const DescribeObservationRequestPrivate &other, DescribeObservationRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
