// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecomponentrequest.h"
#include "updatecomponentrequest_p.h"
#include "updatecomponentresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::UpdateComponentRequest
 * \brief The UpdateComponentRequest class provides an interface for ApplicationInsights UpdateComponent requests.
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
 * \sa ApplicationInsightsClient::updateComponent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateComponentRequest::UpdateComponentRequest(const UpdateComponentRequest &other)
    : ApplicationInsightsRequest(new UpdateComponentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateComponentRequest object.
 */
UpdateComponentRequest::UpdateComponentRequest()
    : ApplicationInsightsRequest(new UpdateComponentRequestPrivate(ApplicationInsightsRequest::UpdateComponentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateComponentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateComponentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateComponentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateComponentResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::UpdateComponentRequestPrivate
 * \brief The UpdateComponentRequestPrivate class provides private implementation for UpdateComponentRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a UpdateComponentRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
UpdateComponentRequestPrivate::UpdateComponentRequestPrivate(
    const ApplicationInsightsRequest::Action action, UpdateComponentRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateComponentRequest
 * class' copy constructor.
 */
UpdateComponentRequestPrivate::UpdateComponentRequestPrivate(
    const UpdateComponentRequestPrivate &other, UpdateComponentRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
