// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcomponentsrequest.h"
#include "listcomponentsrequest_p.h"
#include "listcomponentsresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ListComponentsRequest
 * \brief The ListComponentsRequest class provides an interface for ApplicationInsights ListComponents requests.
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
 * \sa ApplicationInsightsClient::listComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListComponentsRequest::ListComponentsRequest(const ListComponentsRequest &other)
    : ApplicationInsightsRequest(new ListComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListComponentsRequest object.
 */
ListComponentsRequest::ListComponentsRequest()
    : ApplicationInsightsRequest(new ListComponentsRequestPrivate(ApplicationInsightsRequest::ListComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::ListComponentsRequestPrivate
 * \brief The ListComponentsRequestPrivate class provides private implementation for ListComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ListComponentsRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
ListComponentsRequestPrivate::ListComponentsRequestPrivate(
    const ApplicationInsightsRequest::Action action, ListComponentsRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListComponentsRequest
 * class' copy constructor.
 */
ListComponentsRequestPrivate::ListComponentsRequestPrivate(
    const ListComponentsRequestPrivate &other, ListComponentsRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
