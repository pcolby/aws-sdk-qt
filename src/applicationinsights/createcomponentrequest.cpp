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

#include "createcomponentrequest.h"
#include "createcomponentrequest_p.h"
#include "createcomponentresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::CreateComponentRequest
 * \brief The CreateComponentRequest class provides an interface for ApplicationInsights CreateComponent requests.
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
 * \sa ApplicationInsightsClient::createComponent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateComponentRequest::CreateComponentRequest(const CreateComponentRequest &other)
    : ApplicationInsightsRequest(new CreateComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateComponentRequest object.
 */
CreateComponentRequest::CreateComponentRequest()
    : ApplicationInsightsRequest(new CreateComponentRequestPrivate(ApplicationInsightsRequest::CreateComponentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateComponentRequest::response(QNetworkReply * const reply) const
{
    return new CreateComponentResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::CreateComponentRequestPrivate
 * \brief The CreateComponentRequestPrivate class provides private implementation for CreateComponentRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a CreateComponentRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
CreateComponentRequestPrivate::CreateComponentRequestPrivate(
    const ApplicationInsightsRequest::Action action, CreateComponentRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateComponentRequest
 * class' copy constructor.
 */
CreateComponentRequestPrivate::CreateComponentRequestPrivate(
    const CreateComponentRequestPrivate &other, CreateComponentRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
