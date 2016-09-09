/*
    Copyright 2013-2016 Paul Colby

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

#include "acmclient.h"
#include "acmclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

QTAWS_BEGIN_NAMESPACE

/**
 * @class  AcmClient
 *
 * @brief  Client for AWS Certificate Manager (ACM)
 *
 * <fullname>AWS Certificate Manager</fullname>
 *
 + Welcome to the AWS Certificate Manager (ACM) Command Reference. This guide provides descriptions, syntax, and usage examples for each ACM command. You can use AWS Certificate Manager to request ACM Certificates for your AWS-based websites and applications. For general information about using ACM and for more information about using the console, see the <a href="http://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">AWS Certificate Manager User Guide</a>. For more information about using the ACM API, see the <a href="http://docs.aws.amazon.com/acm/latest/APIReference/Welcome.html">AWS Certificate Manager API Reference</a>.
 */

/**
 * @brief  Constructs a new AcmClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
AcmClient::AcmClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AcmClientPrivate(this), parent)
{
    Q_D(AcmClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new AcmClient object.
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
AcmClient::AcmClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new AcmClientPrivate(this), parent)
{
    Q_D(AcmClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  AcmClientPrivate
 *
 * @brief  Private implementation for AcmClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AcmClientPrivate object.
 *
 * @param  q  Pointer to this object's public AcmClient instance.
 */
AcmClientPrivate::AcmClientPrivate(AcmClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

QTAWS_END_NAMESPACE
