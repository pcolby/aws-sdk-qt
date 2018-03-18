/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "opsworkscmclient.h"
#include "opsworkscmclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  OpsWorksCMClient
 *
 * @brief  Client for AWS OpsWorks for Chef Automate (OpsWorksCM)
 *
 * <fullname>AWS OpsWorks CM</fullname>
 *
 * AWS OpsWorks for configuration management (CM) is a service that runs and manages configuration management servers.
 *
 * </p
 *
 * <b>Glossary of terms</b>
 *
 * </p <ul> <li>
 *
 * <b>Server</b>: A configuration management server that can be highly-available. The configuration management server runs
 * on an Amazon Elastic Compute Cloud (EC2) instance, and may use various other AWS services, such as Amazon Relational
 * Database Service (RDS) and Elastic Load Balancing. A server is a generic abstraction over the configuration manager that
 * you want to use, much like Amazon RDS. In AWS OpsWorks CM, you do not start or stop servers. After you create servers,
 * they continue to run until they are
 *
 * deleted> </li> <li>
 *
 * <b>Engine</b>: The engine is the specific configuration manager that you want to use. Valid values in this release
 * include <code>Chef</code> and
 *
 * <code>Puppet</code>> </li> <li>
 *
 * <b>Backup</b>: This is an application-level backup of the data that the configuration manager stores. AWS OpsWorks CM
 * creates an S3 bucket for backups when you launch the first server. A backup maintains a snapshot of a server's
 * configuration-related attributes at the time the backup
 *
 * starts> </li> <li>
 *
 * <b>Events</b>: Events are always related to a server. Events are written during server creation, when health checks run,
 * when backups are created, when system maintenance is performed, etc. When you delete a server, the server's events are
 * also
 *
 * deleted> </li> <li>
 *
 * <b>Account attributes</b>: Every account has attributes that are assigned in the AWS OpsWorks CM database. These
 * attributes store information about configuration limits (servers, backups, etc.) and your customer account.
 *
 * </p </li> </ul>
 *
 * <b>Endpoints</b>
 *
 * </p
 *
 * AWS OpsWorks CM supports the following endpoints, all HTTPS. You must connect to one of the following endpoints. Your
 * servers can only be accessed or managed within the endpoint in which they are
 *
 * created> <ul> <li>
 *
 * opsworks-cm.us-east-1.amazonaws.co> </li> <li>
 *
 * opsworks-cm.us-west-2.amazonaws.co> </li> <li>
 *
 * opsworks-cm.eu-west-1.amazonaws.co> </li> </ul>
 *
 * <b>Throttling limits</b>
 *
 * </p
 *
 * All API operations allow for five requests per second with a burst of 10 requests per
 */

/**
 * @brief  Constructs a new OpsWorksCMClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
OpsWorksCMClient::OpsWorksCMClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new OpsWorksCMClientPrivate(this), parent)
{
    Q_D(OpsWorksCMClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new OpsWorksCMClient object.
 *
 * This overload allows the caller to specify the specific endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * @param  endpoint     Endpoint for building requests URLs.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 *
 * @see  AwsEndpoint::getEndpoint
 */
OpsWorksCMClient::OpsWorksCMClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new OpsWorksCMClientPrivate(this), parent)
{
    Q_D(OpsWorksCMClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  OpsWorksCMClientPrivate
 *
 * @brief  Private implementation for OpsWorksCMClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new OpsWorksCMClientPrivate object.
 *
 * @param  q  Pointer to this object's public OpsWorksCMClient instance.
 */
OpsWorksCMClientPrivate::OpsWorksCMClientPrivate(OpsWorksCMClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace OpsWorksCM
} // namespace AWS
