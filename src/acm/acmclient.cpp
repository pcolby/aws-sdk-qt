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
 * @class  ACMClient
 *
 * <fullname>AWS Certificate Manager</fullname> <p>Welcome to the AWS Certificate Manager (ACM) Command Reference. This guide provides descriptions, syntax, and usage examples for each ACM command. You can use AWS Certificate Manager to request ACM Certificates for your AWS-based websites and applications. For general information about using ACM and for more information about using the console, see the <a href="http://docs.aws.amazon.com/acm/latest/userguide/acm-overview.html">AWS Certificate Manager User Guide</a>. For more information about using the ACM API, see the <a href="http://docs.aws.amazon.com/acm/latest/APIReference/Welcome.html">AWS Certificate Manager API Reference</a>.</p>
 */

/**
 * @brief  Constructs a new ACMClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
ACMClient::ACMClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ACMClientPrivate(this), parent)
{
    Q_D(ACMClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new ACMClient object.
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
ACMClient::ACMClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new ACMClientPrivate(this), parent)
{
    Q_D(ACMClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  ACMClientPrivate
 *
 * @brief  Private implementation for ACMClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ACMClientPrivate object.
 *
 * @param  q  Pointer to this object's public ACMClient instance.
 */
ACMClientPrivate::ACMClientPrivate(ACMClient * const q)
    : AwsAbstractClientPrivate(q)
{
    /// @todo Get signature version from API description.
    signature = new AwsSignatureV4();
}

QTAWS_END_NAMESPACE
