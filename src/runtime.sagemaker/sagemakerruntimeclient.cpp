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

#include "sagemakerruntimeclient.h"
#include "sagemakerruntimeclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace SageMakerRuntime {

/**
 * @class  SageMakerRuntimeClient
 *
 * @brief  Client for Amazon SageMaker Runtime
 *
 * Amazon SageMaker runtime API.
 */

/**
 * @brief  Constructs a new SageMakerRuntimeClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
SageMakerRuntimeClient::SageMakerRuntimeClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SageMakerRuntimeClientPrivate(this), parent)
{
    Q_D(SageMakerRuntimeClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new SageMakerRuntimeClient object.
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
SageMakerRuntimeClient::SageMakerRuntimeClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new SageMakerRuntimeClientPrivate(this), parent)
{
    Q_D(SageMakerRuntimeClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * After you deploy a model into production using Amazon SageMaker hosting services, your client applications use this API
 * to get inferences from the model hosted at the specified endpoint.
 *
 * </p
 *
 * For an overview of Amazon SageMaker, see <a href="http://docs.aws.amazon.com/sagemaker/latest/dg/how-it-works.html">How
 * It Works</a>
 *
 * </p
 *
 * Amazon SageMaker strips all POST headers except those supported by the API. Amazon SageMaker might add additional
 * headers. You should not rely on the behavior of headers outside those enumerated in the request syntax.
 *
 * @param  request Request to send to {{servicename}}.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
InvokeEndpointResponse * SageMakerRuntimeClient::invokeEndpoint(const InvokeEndpointRequest &request)
{

}

/**
 * @internal
 *
 * @class  SageMakerRuntimeClientPrivate
 *
 * @brief  Private implementation for SageMakerRuntimeClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SageMakerRuntimeClientPrivate object.
 *
 * @param  q  Pointer to this object's public SageMakerRuntimeClient instance.
 */
SageMakerRuntimeClientPrivate::SageMakerRuntimeClientPrivate(SageMakerRuntimeClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace SageMakerRuntime
} // namespace AWS
