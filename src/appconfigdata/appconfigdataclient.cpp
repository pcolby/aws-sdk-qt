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

#include "appconfigdataclient.h"
#include "appconfigdataclient_p.h"

#include "core/awssignaturev4.h"
#include "getlatestconfigurationrequest.h"
#include "getlatestconfigurationresponse.h"
#include "startconfigurationsessionrequest.h"
#include "startconfigurationsessionresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::AppConfigData
 * \brief Contains classess for accessing AWS AppConfig Data.
 *
 * \inmodule QtAwsAppConfigData
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace AppConfigData {

/*!
 * \class QtAws::AppConfigData::AppConfigDataClient
 * \brief The AppConfigDataClient class provides access to the AWS AppConfig Data service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppConfigData
 *
 *  AppConfig Data provides the data plane APIs your application uses to retrieve configuration data. Here's how it
 * 
 *  works>
 * 
 *  Your application retrieves configuration data by first establishing a configuration session using the AppConfig Data
 *  <a>StartConfigurationSession</a> API action. Your session's client then makes periodic calls to
 *  <a>GetLatestConfiguration</a> to check for and retrieve the latest data
 * 
 *  available>
 * 
 *  When calling <code>StartConfigurationSession</code>, your code sends the following
 * 
 *  information> <ul> <li>
 * 
 *  Identifiers (ID or name) of an AppConfig application, environment, and configuration profile that the session
 * 
 *  tracks> </li> <li>
 * 
 *  (Optional) The minimum amount of time the session's client must wait between calls to
 * 
 *  <code>GetLatestConfiguration</code>> </li> </ul>
 * 
 *  In response, AppConfig provides an <code>InitialConfigurationToken</code> to be given to the session's client and used
 *  the first time it calls <code>GetLatestConfiguration</code> for that
 * 
 *  session>
 * 
 *  When calling <code>GetLatestConfiguration</code>, your client code sends the most recent <code>ConfigurationToken</code>
 *  value it has and receives in
 * 
 *  response> <ul> <li>
 * 
 *  <code>NextPollConfigurationToken</code>: the <code>ConfigurationToken</code> value to use on the next call to
 * 
 *  <code>GetLatestConfiguration</code>> </li> <li>
 * 
 *  <code>NextPollIntervalInSeconds</code>: the duration the client should wait before making its next call to
 *  <code>GetLatestConfiguration</code>. This duration may vary over the course of the session, so it should be used instead
 *  of the value sent on the <code>StartConfigurationSession</code>
 * 
 *  call> </li> <li>
 * 
 *  The configuration: the latest data intended for the session. This may be empty if the client already has the latest
 *  version of the
 * 
 *  configuration> </li> </ul>
 * 
 *  For more information and to view example CLI commands that show how to retrieve a configuration using the AppConfig Data
 *  <code>StartConfigurationSession</code> and <code>GetLatestConfiguration</code> API actions, see <a
 *  href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-the-configuration">Receiving the
 *  configuration</a> in the <i>AppConfig User
 */

/*!
 * \brief Constructs a AppConfigDataClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
AppConfigDataClient::AppConfigDataClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppConfigDataClientPrivate(this), parent)
{
    Q_D(AppConfigDataClient);
    d->apiVersion = QStringLiteral("2021-11-11");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("appconfigdata");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("AWS AppConfig Data");
    d->serviceName = QStringLiteral("appconfig");
}

/*!
 * \overload AppConfigDataClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
AppConfigDataClient::AppConfigDataClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new AppConfigDataClientPrivate(this), parent)
{
    Q_D(AppConfigDataClient);
    d->apiVersion = QStringLiteral("2021-11-11");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("appconfigdata");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("AWS AppConfig Data");
    d->serviceName = QStringLiteral("appconfig");
}

/*!
 * Sends \a request to the AppConfigDataClient service, and returns a pointer to an
 * GetLatestConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Retrieves the latest deployed configuration. This API may return empty configuration data if the client already has the
 * latest version. For more information about this API action and to view example CLI commands that show how to use it with
 * the <a>StartConfigurationSession</a> API action, see <a
 * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-the-configuration">Receiving the
 * configuration</a> in the <i>AppConfig User Guide</i>.
 *
 * </p <b>
 *
 * Note the following important
 *
 * information> <ul> <li>
 *
 * Each configuration token is only valid for one call to <code>GetLatestConfiguration</code>. The
 * <code>GetLatestConfiguration</code> response includes a <code>NextPollConfigurationToken</code> that should always
 * replace the token used for the just-completed call in preparation for the next one.
 *
 * </p </li> <li>
 *
 * <code>GetLatestConfiguration</code> is a priced call. For more information, see <a
 */
GetLatestConfigurationResponse * AppConfigDataClient::getLatestConfiguration(const GetLatestConfigurationRequest &request)
{
    return qobject_cast<GetLatestConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the AppConfigDataClient service, and returns a pointer to an
 * StartConfigurationSessionResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Starts a configuration session used to retrieve a deployed configuration. For more information about this API action and
 * to view example CLI commands that show how to use it with the <a>GetLatestConfiguration</a> API action, see <a
 * href="http://docs.aws.amazon.com/appconfig/latest/userguide/appconfig-retrieving-the-configuration">Receiving the
 * configuration</a> in the <i>AppConfig User Guide</i>.
 */
StartConfigurationSessionResponse * AppConfigDataClient::startConfigurationSession(const StartConfigurationSessionRequest &request)
{
    return qobject_cast<StartConfigurationSessionResponse *>(send(request));
}

/*!
 * \class QtAws::AppConfigData::AppConfigDataClientPrivate
 * \brief The AppConfigDataClientPrivate class provides private implementation for AppConfigDataClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsAppConfigData
 */

/*!
 * Constructs a AppConfigDataClientPrivate object with public implementation \a q.
 */
AppConfigDataClientPrivate::AppConfigDataClientPrivate(AppConfigDataClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace AppConfigData
} // namespace QtAws
