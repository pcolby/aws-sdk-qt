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

#include "importexportclient.h"
#include "importexportclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace ImportExport {

/**
 * @class  ImportExportClient
 *
 * @brief  Client for AWS Import/Export
 *
 * <fullname>AWS Import/Export Service</fullname> AWS Import/Export accelerates transferring large amounts of data between
 * the AWS cloud and portable storage devices that you mail to us. AWS Import/Export transfers data directly onto and off
 * of your storage devices using Amazon's high-speed internal network and bypassing the Internet. For large data sets, AWS
 */

/**
 * @brief  Constructs a new ImportExportClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ImportExportClient::ImportExportClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ImportExportClientPrivate(this), parent)
{
    Q_D(ImportExportClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ImportExportClient object.
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
ImportExportClient::ImportExportClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ImportExportClientPrivate(this), parent)
{
    Q_D(ImportExportClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ImportExportClientPrivate
 *
 * @brief  Private implementation for ImportExportClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ImportExportClientPrivate object.
 *
 * @param  q  Pointer to this object's public ImportExportClient instance.
 */
ImportExportClientPrivate::ImportExportClientPrivate(ImportExportClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV2();
}

} // namespace ImportExport
} // namespace AWS
