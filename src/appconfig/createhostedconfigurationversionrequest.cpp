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

#include "createhostedconfigurationversionrequest.h"
#include "createhostedconfigurationversionrequest_p.h"
#include "createhostedconfigurationversionresponse.h"
#include "appconfigrequest_p.h"

namespace QtAws {
namespace AppConfig {

/*!
 * \class QtAws::AppConfig::CreateHostedConfigurationVersionRequest
 * \brief The CreateHostedConfigurationVersionRequest class provides an interface for AppConfig CreateHostedConfigurationVersion requests.
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
 * \sa AppConfigClient::createHostedConfigurationVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHostedConfigurationVersionRequest::CreateHostedConfigurationVersionRequest(const CreateHostedConfigurationVersionRequest &other)
    : AppConfigRequest(new CreateHostedConfigurationVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHostedConfigurationVersionRequest object.
 */
CreateHostedConfigurationVersionRequest::CreateHostedConfigurationVersionRequest()
    : AppConfigRequest(new CreateHostedConfigurationVersionRequestPrivate(AppConfigRequest::CreateHostedConfigurationVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHostedConfigurationVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHostedConfigurationVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHostedConfigurationVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateHostedConfigurationVersionResponse(*this, reply);
}

/*!
 * \class QtAws::AppConfig::CreateHostedConfigurationVersionRequestPrivate
 * \brief The CreateHostedConfigurationVersionRequestPrivate class provides private implementation for CreateHostedConfigurationVersionRequest.
 * \internal
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a CreateHostedConfigurationVersionRequestPrivate object for AppConfig \a action,
 * with public implementation \a q.
 */
CreateHostedConfigurationVersionRequestPrivate::CreateHostedConfigurationVersionRequestPrivate(
    const AppConfigRequest::Action action, CreateHostedConfigurationVersionRequest * const q)
    : AppConfigRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHostedConfigurationVersionRequest
 * class' copy constructor.
 */
CreateHostedConfigurationVersionRequestPrivate::CreateHostedConfigurationVersionRequestPrivate(
    const CreateHostedConfigurationVersionRequestPrivate &other, CreateHostedConfigurationVersionRequest * const q)
    : AppConfigRequestPrivate(other, q)
{

}

} // namespace AppConfig
} // namespace QtAws
