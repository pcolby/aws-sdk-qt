// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdeploymentstrategyrequest.h"
#include "getdeploymentstrategyrequest_p.h"
#include "getdeploymentstrategyresponse.h"
#include "appconfigrequest_p.h"

namespace QtAws {
namespace AppConfig {

/*!
 * \class QtAws::AppConfig::GetDeploymentStrategyRequest
 * \brief The GetDeploymentStrategyRequest class provides an interface for AppConfig GetDeploymentStrategy requests.
 *
 * \inmodule QtAwsAppConfig
 *
 *  Use AppConfig, a capability of Amazon Web Services Systems Manager, to create, manage, and quickly deploy application
 *  configurations. AppConfig supports controlled deployments to applications of any size and includes built-in validation
 *  checks and monitoring. You can use AppConfig with applications hosted on Amazon EC2 instances, Lambda, containers,
 *  mobile applications, or IoT
 * 
 *  devices>
 * 
 *  To prevent errors when deploying application configurations, especially for production systems where a simple typo could
 *  cause an unexpected outage, AppConfig includes validators. A validator provides a syntactic or semantic check to ensure
 *  that the configuration you want to deploy works as intended. To validate your application configuration data, you
 *  provide a schema or an Amazon Web Services Lambda function that runs against the configuration. The configuration
 *  deployment or update can only proceed when the configuration data is
 * 
 *  valid>
 * 
 *  During a configuration deployment, AppConfig monitors the application to ensure that the deployment is successful. If
 *  the system encounters an error, AppConfig rolls back the change to minimize impact for your application users. You can
 *  configure a deployment strategy for each application or environment that includes deployment criteria, including
 *  velocity, bake time, and alarms to monitor. Similar to error monitoring, if a deployment triggers an alarm, AppConfig
 *  automatically rolls back to the previous version.
 * 
 *  </p
 * 
 *  AppConfig supports multiple use cases. Here are some
 * 
 *  examples> <ul> <li>
 * 
 *  <b>Feature flags</b>: Use AppConfig to turn on new features that require a timely deployment, such as a product launch
 *  or announcement.
 * 
 *  </p </li> <li>
 * 
 *  <b>Application tuning</b>: Use AppConfig to carefully introduce changes to your application that can only be tested with
 *  production
 * 
 *  traffic> </li> <li>
 * 
 *  <b>Allow list</b>: Use AppConfig to allow premium subscribers to access paid content.
 * 
 *  </p </li> <li>
 * 
 *  <b>Operational issues</b>: Use AppConfig to reduce stress on your application when a dependency or other external factor
 *  impacts the
 * 
 *  system> </li> </ul>
 * 
 *  This reference is intended to be used with the <a
 *  href="http://docs.aws.amazon.com/appconfig/latest/userguide/what-is-appconfig.html">AppConfig User
 *
 * \sa AppConfigClient::getDeploymentStrategy
 */

/*!
 * Constructs a copy of \a other.
 */
GetDeploymentStrategyRequest::GetDeploymentStrategyRequest(const GetDeploymentStrategyRequest &other)
    : AppConfigRequest(new GetDeploymentStrategyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDeploymentStrategyRequest object.
 */
GetDeploymentStrategyRequest::GetDeploymentStrategyRequest()
    : AppConfigRequest(new GetDeploymentStrategyRequestPrivate(AppConfigRequest::GetDeploymentStrategyAction, this))
{

}

/*!
 * \reimp
 */
bool GetDeploymentStrategyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDeploymentStrategyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDeploymentStrategyRequest::response(QNetworkReply * const reply) const
{
    return new GetDeploymentStrategyResponse(*this, reply);
}

/*!
 * \class QtAws::AppConfig::GetDeploymentStrategyRequestPrivate
 * \brief The GetDeploymentStrategyRequestPrivate class provides private implementation for GetDeploymentStrategyRequest.
 * \internal
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a GetDeploymentStrategyRequestPrivate object for AppConfig \a action,
 * with public implementation \a q.
 */
GetDeploymentStrategyRequestPrivate::GetDeploymentStrategyRequestPrivate(
    const AppConfigRequest::Action action, GetDeploymentStrategyRequest * const q)
    : AppConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDeploymentStrategyRequest
 * class' copy constructor.
 */
GetDeploymentStrategyRequestPrivate::GetDeploymentStrategyRequestPrivate(
    const GetDeploymentStrategyRequestPrivate &other, GetDeploymentStrategyRequest * const q)
    : AppConfigRequestPrivate(other, q)
{

}

} // namespace AppConfig
} // namespace QtAws
