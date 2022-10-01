// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listproblemsrequest.h"
#include "listproblemsrequest_p.h"
#include "listproblemsresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ListProblemsRequest
 * \brief The ListProblemsRequest class provides an interface for ApplicationInsights ListProblems requests.
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
 * \sa ApplicationInsightsClient::listProblems
 */

/*!
 * Constructs a copy of \a other.
 */
ListProblemsRequest::ListProblemsRequest(const ListProblemsRequest &other)
    : ApplicationInsightsRequest(new ListProblemsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProblemsRequest object.
 */
ListProblemsRequest::ListProblemsRequest()
    : ApplicationInsightsRequest(new ListProblemsRequestPrivate(ApplicationInsightsRequest::ListProblemsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProblemsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProblemsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProblemsRequest::response(QNetworkReply * const reply) const
{
    return new ListProblemsResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::ListProblemsRequestPrivate
 * \brief The ListProblemsRequestPrivate class provides private implementation for ListProblemsRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ListProblemsRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
ListProblemsRequestPrivate::ListProblemsRequestPrivate(
    const ApplicationInsightsRequest::Action action, ListProblemsRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProblemsRequest
 * class' copy constructor.
 */
ListProblemsRequestPrivate::ListProblemsRequestPrivate(
    const ListProblemsRequestPrivate &other, ListProblemsRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
