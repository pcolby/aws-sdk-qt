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

#include "deletehostedconfigurationversionresponse.h"
#include "deletehostedconfigurationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppConfig {

/*!
 * \class QtAws::AppConfig::DeleteHostedConfigurationVersionResponse
 * \brief The DeleteHostedConfigurationVersionResponse class provides an interace for AppConfig DeleteHostedConfigurationVersion responses.
 *
 * \inmodule QtAwsAppConfig
 *
 *  <fullname>AWS AppConfig</fullname>
 * 
 *  Use AWS AppConfig, a capability of AWS Systems Manager, to create, manage, and quickly deploy application
 *  configurations. AppConfig supports controlled deployments to applications of any size and includes built-in validation
 *  checks and monitoring. You can use AppConfig with applications hosted on Amazon EC2 instances, AWS Lambda, containers,
 *  mobile applications, or IoT
 * 
 *  devices>
 * 
 *  To prevent errors when deploying application configurations, especially for production systems where a simple typo could
 *  cause an unexpected outage, AppConfig includes validators. A validator provides a syntactic or semantic check to ensure
 *  that the configuration you want to deploy works as intended. To validate your application configuration data, you
 *  provide a schema or a Lambda function that runs against the configuration. The configuration deployment or update can
 *  only proceed when the configuration data is
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
 *  <b>Application tuning</b>: Use AppConfig to carefully introduce changes to your application that can only be tested with
 *  production
 * 
 *  traffic> </li> <li>
 * 
 *  <b>Feature toggle</b>: Use AppConfig to turn on new features that require a timely deployment, such as a product launch
 *  or announcement.
 * 
 *  </p </li> <li>
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
 *  href="http://docs.aws.amazon.com/systems-manager/latest/userguide/appconfig.html">AWS AppConfig User
 *
 * \sa AppConfigClient::deleteHostedConfigurationVersion
 */

/*!
 * Constructs a DeleteHostedConfigurationVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteHostedConfigurationVersionResponse::DeleteHostedConfigurationVersionResponse(
        const DeleteHostedConfigurationVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppConfigResponse(new DeleteHostedConfigurationVersionResponsePrivate(this), parent)
{
    setRequest(new DeleteHostedConfigurationVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteHostedConfigurationVersionRequest * DeleteHostedConfigurationVersionResponse::request() const
{
    Q_D(const DeleteHostedConfigurationVersionResponse);
    return static_cast<const DeleteHostedConfigurationVersionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppConfig DeleteHostedConfigurationVersion \a response.
 */
void DeleteHostedConfigurationVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteHostedConfigurationVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppConfig::DeleteHostedConfigurationVersionResponsePrivate
 * \brief The DeleteHostedConfigurationVersionResponsePrivate class provides private implementation for DeleteHostedConfigurationVersionResponse.
 * \internal
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a DeleteHostedConfigurationVersionResponsePrivate object with public implementation \a q.
 */
DeleteHostedConfigurationVersionResponsePrivate::DeleteHostedConfigurationVersionResponsePrivate(
    DeleteHostedConfigurationVersionResponse * const q) : AppConfigResponsePrivate(q)
{

}

/*!
 * Parses a AppConfig DeleteHostedConfigurationVersion response element from \a xml.
 */
void DeleteHostedConfigurationVersionResponsePrivate::parseDeleteHostedConfigurationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteHostedConfigurationVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppConfig
} // namespace QtAws
