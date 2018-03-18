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

#include "sfnclient.h"
#include "sfnclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SFN {

/**
 * @class  SfnClient
 *
 * @brief  Client for AWS Step Functions ( SFN)
 *
 * <fullname>AWS Step Functions</fullname>
 *
 * AWS Step Functions is a service that lets you coordinate the components of distributed applications and microservices
 * using visual
 *
 * workflows>
 *
 * You can use Step Functions to build applications from individual components, each of which performs a discrete function,
 * or <i>task</i>, allowing you to scale and change applications quickly. Step Functions provides a console that helps
 * visualize the components of your application as a series of steps. Step Functions automatically triggers and tracks each
 * step, and retries steps when there are errors, so your application executes predictably and in the right order every
 * time. Step Functions logs the state of each step, so you can quickly diagnose and debug any
 *
 * issues>
 *
 * Step Functions manages operations and underlying infrastructure to ensure your application is available at any scale.
 * You can run tasks on AWS, your own servers, or any system that has access to AWS. You can access and use Step Functions
 * using the console, the AWS SDKs, or an HTTP API. For more information about Step Functions, see the <i> <a
 * href="http://docs.aws.amazon.com/step-functions/latest/dg/welcome.html">AWS Step Functions Developer Guide</a>
 */

/**
 * @brief  Constructs a new SfnClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SfnClient::SfnClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SfnClientPrivate(this), parent)
{
    Q_D(SfnClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new SfnClient object.
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
SfnClient::SfnClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SfnClientPrivate(this), parent)
{
    Q_D(SfnClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  SfnClientPrivate
 *
 * @brief  Private implementation for SfnClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SfnClientPrivate object.
 *
 * @param  q  Pointer to this object's public SfnClient instance.
 */
SfnClientPrivate::SfnClientPrivate(SfnClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace SFN
} // namespace AWS
