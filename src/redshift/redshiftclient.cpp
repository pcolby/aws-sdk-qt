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

#include "redshiftclient.h"
#include "redshiftclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Redshift {

/**
 * @class  RedshiftClient
 *
 * @brief  Client for Amazon Redshift
 *
 * <fullname>Amazon Redshift</fullname> <b>Overview</b>
 *
 * This is an interface reference for Amazon Redshift. It contains documentation for one of the programming or command line
 * interfaces you can use to manage Amazon Redshift clusters. Note that Amazon Redshift is asynchronous, which means that
 * some interfaces may require techniques, such as polling or asynchronous callback handlers, to determine when a command
 * has been applied. In this reference, the parameter descriptions indicate whether a change is applied immediately, on the
 * next instance reboot, or during the next maintenance window. For a summary of the Amazon Redshift cluster management
 * interfaces, go to <a href="http://docs.aws.amazon.com/redshift/latest/mgmt/using-aws-sdk.html">Using the Amazon Redshift
 * Management Interfaces
 *
 * </a>>
 *
 * Amazon Redshift manages all the work of setting up, operating, and scaling a data warehouse: provisioning capacity,
 * monitoring and backing up the cluster, and applying patches and upgrades to the Amazon Redshift engine. You can focus on
 * using your data to acquire new insights for your business and customers.
 *
 * </p
 *
 * If you are a first-time user of Amazon Redshift, we recommend that you begin by reading the The <a
 * href="http://docs.aws.amazon.com/redshift/latest/gsg/getting-started.html">Amazon Redshift Getting Started
 *
 * Guide</a>
 *
 * If you are a database developer, the <a href="http://docs.aws.amazon.com/redshift/latest/dg/welcome.html">Amazon
 * Redshift Database Developer Guide</a> explains how to design, build, query, and maintain the databases that make up your
 * data warehouse.
 */

/**
 * @brief  Constructs a new RedshiftClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
RedshiftClient::RedshiftClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RedshiftClientPrivate(this), parent)
{
    Q_D(RedshiftClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new RedshiftClient object.
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
RedshiftClient::RedshiftClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RedshiftClientPrivate(this), parent)
{
    Q_D(RedshiftClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  RedshiftClientPrivate
 *
 * @brief  Private implementation for RedshiftClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RedshiftClientPrivate object.
 *
 * @param  q  Pointer to this object's public RedshiftClient instance.
 */
RedshiftClientPrivate::RedshiftClientPrivate(RedshiftClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Redshift
} // namespace AWS
