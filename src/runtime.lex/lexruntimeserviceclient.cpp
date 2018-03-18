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

#include "lexruntimeserviceclient.h"
#include "lexruntimeserviceclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace LexRuntimeService {

/**
 * @class  LexRuntimeServiceClient
 *
 * @brief  Client for Amazon Lex Runtime Service
 *
 * Amazon Lex provides both build and runtime endpoints. Each endpoint provides a set of operations (API). Your
 * conversational bot uses the runtime API to understand user utterances (user input text or voice). For example, suppose a
 * user says "I want pizza", your bot sends this input to Amazon Lex using the runtime API. Amazon Lex recognizes that the
 * user request is for the OrderPizza intent (one of the intents defined in the bot). Then Amazon Lex engages in user
 * conversation on behalf of the bot to elicit required information (slot values, such as pizza size and crust type), and
 * then performs fulfillment activity (that you configured when you created the bot). You use the build-time API to create
 * and manage your Amazon Lex bot. For a list of build-time operations, see the build-time API, .
 */

/**
 * @brief  Constructs a new LexRuntimeServiceClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
LexRuntimeServiceClient::LexRuntimeServiceClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new LexRuntimeServiceClientPrivate(this), parent)
{
    Q_D(LexRuntimeServiceClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new LexRuntimeServiceClient object.
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
LexRuntimeServiceClient::LexRuntimeServiceClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new LexRuntimeServiceClientPrivate(this), parent)
{
    Q_D(LexRuntimeServiceClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  LexRuntimeServiceClientPrivate
 *
 * @brief  Private implementation for LexRuntimeServiceClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new LexRuntimeServiceClientPrivate object.
 *
 * @param  q  Pointer to this object's public LexRuntimeServiceClient instance.
 */
LexRuntimeServiceClientPrivate::LexRuntimeServiceClientPrivate(LexRuntimeServiceClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace LexRuntimeService
} // namespace AWS
