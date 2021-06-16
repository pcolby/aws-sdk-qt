/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listconfigurationhistoryrequest.h"
#include "listconfigurationhistoryrequest_p.h"
#include "listconfigurationhistoryresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::ListConfigurationHistoryRequest
 * \brief The ListConfigurationHistoryRequest class provides an interface for ApplicationInsights ListConfigurationHistory requests.
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
 * \sa ApplicationInsightsClient::listConfigurationHistory
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationHistoryRequest::ListConfigurationHistoryRequest(const ListConfigurationHistoryRequest &other)
    : ApplicationInsightsRequest(new ListConfigurationHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationHistoryRequest object.
 */
ListConfigurationHistoryRequest::ListConfigurationHistoryRequest()
    : ApplicationInsightsRequest(new ListConfigurationHistoryRequestPrivate(ApplicationInsightsRequest::ListConfigurationHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool ListConfigurationHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConfigurationHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConfigurationHistoryRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::ListConfigurationHistoryRequestPrivate
 * \brief The ListConfigurationHistoryRequestPrivate class provides private implementation for ListConfigurationHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a ListConfigurationHistoryRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
ListConfigurationHistoryRequestPrivate::ListConfigurationHistoryRequestPrivate(
    const ApplicationInsightsRequest::Action action, ListConfigurationHistoryRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationHistoryRequest
 * class' copy constructor.
 */
ListConfigurationHistoryRequestPrivate::ListConfigurationHistoryRequestPrivate(
    const ListConfigurationHistoryRequestPrivate &other, ListConfigurationHistoryRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
