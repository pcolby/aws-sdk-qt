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

#include "rdsclient.h"
#include "rdsclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace RDS {

/**
 * @class  RdsClient
 *
 * @brief  Client for Amazon Relational Database Service ( RDS)
 *
 * <fullname>Amazon Relational Database Service</fullname>
 *
 *
 * </p
 *
 * Amazon Relational Database Service (Amazon RDS) is a web service that makes it easier to set up, operate, and scale a
 * relational database in the cloud. It provides cost-efficient, resizable capacity for an industry-standard relational
 * database and manages common database administration tasks, freeing up developers to focus on what makes their
 * applications and businesses
 *
 * unique>
 *
 * Amazon RDS gives you access to the capabilities of a MySQL, MariaDB, PostgreSQL, Microsoft SQL Server, Oracle, or Amazon
 * Aurora database server. These capabilities mean that the code, applications, and tools you already use today with your
 * existing databases work with Amazon RDS without modification. Amazon RDS automatically backs up your database and
 * maintains the database software that powers your DB instance. Amazon RDS is flexible: you can scale your DB instance's
 * compute resources and storage capacity to meet your application's demand. As with all Amazon Web Services, there are no
 * up-front investments, and you pay only for the resources you
 *
 * use>
 *
 * This interface reference for Amazon RDS contains documentation for a programming or command line interface you can use
 * to manage Amazon RDS. Note that Amazon RDS is asynchronous, which means that some interfaces might require techniques
 * such as polling or callback functions to determine when a command has been applied. In this reference, the parameter
 * descriptions indicate whether a command is applied immediately, on the next instance reboot, or during the maintenance
 * window. The reference structure is as follows, and we list following some related topics from the user
 *
 * guide>
 *
 * <b>Amazon RDS API Reference</b>
 *
 * </p <ul> <li>
 *
 * For the alphabetical list of API actions, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Operations.html">API
 *
 * Actions</a>> </li> <li>
 *
 * For the alphabetical list of data types, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/API_Types.html">Data
 *
 * Types</a>> </li> <li>
 *
 * For a list of common query parameters, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonParameters.html">Common
 *
 * Parameters</a>> </li> <li>
 *
 * For descriptions of the error codes, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/APIReference/CommonErrors.html">Common
 *
 * Errors</a>> </li> </ul>
 *
 * <b>Amazon RDS User Guide</b>
 *
 * </p <ul> <li>
 *
 * For a summary of the Amazon RDS interfaces, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Welcome.html#Welcome.Interfaces">Available RDS
 *
 * Interfaces</a>> </li> <li>
 *
 * For more information about how to use the Query API, see <a
 * href="http://docs.aws.amazon.com/AmazonRDS/latest/UserGuide/Using_the_Query_API.html">Using the Query
 */

/**
 * @brief  Constructs a new RdsClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
RdsClient::RdsClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RdsClientPrivate(this), parent)
{
    Q_D(RdsClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new RdsClient object.
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
RdsClient::RdsClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new RdsClientPrivate(this), parent)
{
    Q_D(RdsClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  RdsClientPrivate
 *
 * @brief  Private implementation for RdsClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RdsClientPrivate object.
 *
 * @param  q  Pointer to this object's public RdsClient instance.
 */
RdsClientPrivate::RdsClientPrivate(RdsClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace RDS
} // namespace AWS
