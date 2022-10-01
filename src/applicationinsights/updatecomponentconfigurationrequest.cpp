// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecomponentconfigurationrequest.h"
#include "updatecomponentconfigurationrequest_p.h"
#include "updatecomponentconfigurationresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::UpdateComponentConfigurationRequest
 * \brief The UpdateComponentConfigurationRequest class provides an interface for ApplicationInsights UpdateComponentConfiguration requests.
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
 * \sa ApplicationInsightsClient::updateComponentConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateComponentConfigurationRequest::UpdateComponentConfigurationRequest(const UpdateComponentConfigurationRequest &other)
    : ApplicationInsightsRequest(new UpdateComponentConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateComponentConfigurationRequest object.
 */
UpdateComponentConfigurationRequest::UpdateComponentConfigurationRequest()
    : ApplicationInsightsRequest(new UpdateComponentConfigurationRequestPrivate(ApplicationInsightsRequest::UpdateComponentConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateComponentConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateComponentConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateComponentConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateComponentConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::UpdateComponentConfigurationRequestPrivate
 * \brief The UpdateComponentConfigurationRequestPrivate class provides private implementation for UpdateComponentConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a UpdateComponentConfigurationRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
UpdateComponentConfigurationRequestPrivate::UpdateComponentConfigurationRequestPrivate(
    const ApplicationInsightsRequest::Action action, UpdateComponentConfigurationRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateComponentConfigurationRequest
 * class' copy constructor.
 */
UpdateComponentConfigurationRequestPrivate::UpdateComponentConfigurationRequestPrivate(
    const UpdateComponentConfigurationRequestPrivate &other, UpdateComponentConfigurationRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
