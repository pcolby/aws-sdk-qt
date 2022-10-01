// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelogpatternrequest.h"
#include "deletelogpatternrequest_p.h"
#include "deletelogpatternresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::DeleteLogPatternRequest
 * \brief The DeleteLogPatternRequest class provides an interface for ApplicationInsights DeleteLogPattern requests.
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
 * \sa ApplicationInsightsClient::deleteLogPattern
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLogPatternRequest::DeleteLogPatternRequest(const DeleteLogPatternRequest &other)
    : ApplicationInsightsRequest(new DeleteLogPatternRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLogPatternRequest object.
 */
DeleteLogPatternRequest::DeleteLogPatternRequest()
    : ApplicationInsightsRequest(new DeleteLogPatternRequestPrivate(ApplicationInsightsRequest::DeleteLogPatternAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLogPatternRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLogPatternResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLogPatternRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLogPatternResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::DeleteLogPatternRequestPrivate
 * \brief The DeleteLogPatternRequestPrivate class provides private implementation for DeleteLogPatternRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a DeleteLogPatternRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
DeleteLogPatternRequestPrivate::DeleteLogPatternRequestPrivate(
    const ApplicationInsightsRequest::Action action, DeleteLogPatternRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLogPatternRequest
 * class' copy constructor.
 */
DeleteLogPatternRequestPrivate::DeleteLogPatternRequestPrivate(
    const DeleteLogPatternRequestPrivate &other, DeleteLogPatternRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
