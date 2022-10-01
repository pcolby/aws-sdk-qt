// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlogpatternsetsrequest.h"
#include "listlogpatternsetsrequest_p.h"
#include "listlogpatternsetsresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ListLogPatternSetsRequest
 * \brief The ListLogPatternSetsRequest class provides an interface for ApplicationInsights ListLogPatternSets requests.
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
 * \sa ApplicationInsightsClient::listLogPatternSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListLogPatternSetsRequest::ListLogPatternSetsRequest(const ListLogPatternSetsRequest &other)
    : ApplicationInsightsRequest(new ListLogPatternSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLogPatternSetsRequest object.
 */
ListLogPatternSetsRequest::ListLogPatternSetsRequest()
    : ApplicationInsightsRequest(new ListLogPatternSetsRequestPrivate(ApplicationInsightsRequest::ListLogPatternSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLogPatternSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLogPatternSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLogPatternSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListLogPatternSetsResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::ListLogPatternSetsRequestPrivate
 * \brief The ListLogPatternSetsRequestPrivate class provides private implementation for ListLogPatternSetsRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ListLogPatternSetsRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
ListLogPatternSetsRequestPrivate::ListLogPatternSetsRequestPrivate(
    const ApplicationInsightsRequest::Action action, ListLogPatternSetsRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLogPatternSetsRequest
 * class' copy constructor.
 */
ListLogPatternSetsRequestPrivate::ListLogPatternSetsRequestPrivate(
    const ListLogPatternSetsRequestPrivate &other, ListLogPatternSetsRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
