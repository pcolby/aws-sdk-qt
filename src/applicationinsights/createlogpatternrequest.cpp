// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlogpatternrequest.h"
#include "createlogpatternrequest_p.h"
#include "createlogpatternresponse.h"
#include "applicationinsightsrequest_p.h"

namespace QtAws {
namespace ApplicationInsights {

/*!
 * \class QtAws::ApplicationInsights::CreateLogPatternRequest
 * \brief The CreateLogPatternRequest class provides an interface for ApplicationInsights CreateLogPattern requests.
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
 * \sa ApplicationInsightsClient::createLogPattern
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLogPatternRequest::CreateLogPatternRequest(const CreateLogPatternRequest &other)
    : ApplicationInsightsRequest(new CreateLogPatternRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLogPatternRequest object.
 */
CreateLogPatternRequest::CreateLogPatternRequest()
    : ApplicationInsightsRequest(new CreateLogPatternRequestPrivate(ApplicationInsightsRequest::CreateLogPatternAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLogPatternRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLogPatternResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLogPatternRequest::response(QNetworkReply * const reply) const
{
    return new CreateLogPatternResponse(*this, reply);
}

/*!
 * \class QtAws::ApplicationInsights::CreateLogPatternRequestPrivate
 * \brief The CreateLogPatternRequestPrivate class provides private implementation for CreateLogPatternRequest.
 * \internal
 *
 * \inmodule QtAwsApplicationInsights
 */

/*!
 * Constructs a CreateLogPatternRequestPrivate object for ApplicationInsights \a action,
 * with public implementation \a q.
 */
CreateLogPatternRequestPrivate::CreateLogPatternRequestPrivate(
    const ApplicationInsightsRequest::Action action, CreateLogPatternRequest * const q)
    : ApplicationInsightsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLogPatternRequest
 * class' copy constructor.
 */
CreateLogPatternRequestPrivate::CreateLogPatternRequestPrivate(
    const CreateLogPatternRequestPrivate &other, CreateLogPatternRequest * const q)
    : ApplicationInsightsRequestPrivate(other, q)
{

}

} // namespace ApplicationInsights
} // namespace QtAws
