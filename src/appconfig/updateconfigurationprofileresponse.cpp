// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationprofileresponse.h"
#include "updateconfigurationprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AppConfig {

/*!
 * \class QtAws::AppConfig::UpdateConfigurationProfileResponse
 * \brief The UpdateConfigurationProfileResponse class provides an interace for AppConfig UpdateConfigurationProfile responses.
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
 * \sa AppConfigClient::updateConfigurationProfile
 */

/*!
 * Constructs a UpdateConfigurationProfileResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateConfigurationProfileResponse::UpdateConfigurationProfileResponse(
        const UpdateConfigurationProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppConfigResponse(new UpdateConfigurationProfileResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationProfileRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateConfigurationProfileRequest * UpdateConfigurationProfileResponse::request() const
{
    Q_D(const UpdateConfigurationProfileResponse);
    return static_cast<const UpdateConfigurationProfileRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AppConfig UpdateConfigurationProfile \a response.
 */
void UpdateConfigurationProfileResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateConfigurationProfileResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AppConfig::UpdateConfigurationProfileResponsePrivate
 * \brief The UpdateConfigurationProfileResponsePrivate class provides private implementation for UpdateConfigurationProfileResponse.
 * \internal
 *
 * \inmodule QtAwsAppConfig
 */

/*!
 * Constructs a UpdateConfigurationProfileResponsePrivate object with public implementation \a q.
 */
UpdateConfigurationProfileResponsePrivate::UpdateConfigurationProfileResponsePrivate(
    UpdateConfigurationProfileResponse * const q) : AppConfigResponsePrivate(q)
{

}

/*!
 * Parses a AppConfig UpdateConfigurationProfile response element from \a xml.
 */
void UpdateConfigurationProfileResponsePrivate::parseUpdateConfigurationProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationProfileResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AppConfig
} // namespace QtAws
