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
 *  <fullname>Amazon CloudWatch Application Insights for .NET and SQL Server</fullname>
 * 
 *  Amazon CloudWatch Application Insights for .NET and SQL Server is a service that helps you detect common problems with
 *  your .NET and SQL Server-based applications. It enables you to pinpoint the source of issues in your applications (built
 *  with technologies such as Microsoft IIS, .NET, and Microsoft SQL Server), by providing key insights into detected
 * 
 *  problems>
 * 
 *  After you onboard your application, CloudWatch Application Insights for .NET and SQL Server identifies, recommends, and
 *  sets up metrics and logs. It continuously analyzes and correlates your metrics and logs for unusual behavior to surface
 *  actionable problems with your application. For example, if your application is slow and unresponsive and leading to HTTP
 *  500 errors in your Application Load Balancer (ALB), Application Insights informs you that a memory pressure problem with
 *  your SQL Server database is occurring. It bases this analysis on impactful metrics and log errors.
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
