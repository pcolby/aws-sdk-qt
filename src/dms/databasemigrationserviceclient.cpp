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

#include "databasemigrationserviceclient.h"
#include "databasemigrationserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DatabaseMigrationServiceClient
 *
 * @brief  Client for AWS Database Migration Service
 *
 * <fullname>AWS Database Migration Service</fullname>
 *
 * AWS Database Migration Service (AWS DMS) can migrate your data to and from the most widely used commercial and
 * open-source databases such as Oracle, PostgreSQL, Microsoft SQL Server, Amazon Redshift, MariaDB, Amazon Aurora, and
 * MySQL. The service supports homogeneous migrations such as Oracle to Oracle, as well as heterogeneous migrations between
 * different database platforms, such as Oracle to MySQL or SQL Server to
 */

/**
 * @brief  Constructs a new DatabaseMigrationServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DatabaseMigrationServiceClientPrivate(this), parent)
{
    Q_D(DatabaseMigrationServiceClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new DatabaseMigrationServiceClient object.
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
DatabaseMigrationServiceClient::DatabaseMigrationServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new DatabaseMigrationServiceClientPrivate(this), parent)
{
    Q_D(DatabaseMigrationServiceClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  DatabaseMigrationServiceClientPrivate
 *
 * @brief  Private implementation for DatabaseMigrationServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DatabaseMigrationServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public DatabaseMigrationServiceClient instance.
 */
DatabaseMigrationServiceClientPrivate::DatabaseMigrationServiceClientPrivate(DatabaseMigrationServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace DatabaseMigrationService
} // namespace AWS
