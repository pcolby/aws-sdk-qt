// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelogpatternrequest.h"
#include "updatelogpatternrequest_p.h"
#include "updatelogpatternresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::UpdateLogPatternRequest
 * \brief The UpdateLogPatternRequest class provides an interface for ApplicationInsights UpdateLogPattern requests.
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
 * \sa ApplicationInsightsClient::updateLogPattern
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLogPatternRequest::UpdateLogPatternRequest(const UpdateLogPatternRequest &other)
    : ApplicationInsightsRequest(new UpdateLogPatternRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLogPatternRequest object.
 */
UpdateLogPatternRequest::UpdateLogPatternRequest()
    : ApplicationInsightsRequest(new UpdateLogPatternRequestPrivate(ApplicationInsightsRequest::UpdateLogPatternAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLogPatternRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLogPatternResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLogPatternRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLogPatternResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::UpdateLogPatternRequestPrivate
 * \brief The UpdateLogPatternRequestPrivate class provides private implementation for UpdateLogPatternRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a UpdateLogPatternRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
UpdateLogPatternRequestPrivate::UpdateLogPatternRequestPrivate(
    const ApplicationInsightsRequest::Action action, UpdateLogPatternRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLogPatternRequest
 * class' copy constructor.
 */
UpdateLogPatternRequestPrivate::UpdateLogPatternRequestPrivate(
    const UpdateLogPatternRequestPrivate &other, UpdateLogPatternRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
