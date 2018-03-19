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

#include "translateclient.h"
#include "translateclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace Translate {

/**
 * @class  TranslateClient
 *
 * @brief  Client for Amazon Translate
 *
 * Provides translation between English and one of six languages, or between one of the six languages and
 */

/**
 * @brief  Constructs a new TranslateClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
TranslateClient::TranslateClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new TranslateClientPrivate(this), parent)
{
    Q_D(TranslateClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("translate");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Translate");
    d->serviceName = QStringLiteral("translate");
}

/**
 * @brief  Constructs a new TranslateClient object.
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
TranslateClient::TranslateClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new TranslateClientPrivate(this), parent)
{
    Q_D(TranslateClient);
    d->apiVersion = QStringLiteral("2017-07-01");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("translate");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Translate");
    d->serviceName = QStringLiteral("translate");
}

/**
 * Translates input text from the source language to the target language. You can translate between English (en) and one of
 * the following languages, or between one of the following languages and
 *
 * English> <ul> <li>
 *
 * Arabic
 *
 * (ar> </li> <li>
 *
 * Chinese (Simplified)
 *
 * (zh> </li> <li>
 *
 * French
 *
 * (fr> </li> <li>
 *
 * German
 *
 * (de> </li> <li>
 *
 * Portuguese
 *
 * (pt> </li> <li>
 *
 * Spanish
 *
 * @param  request Request to send to Amazon Translate.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
TranslateTextResponse * TranslateClient::translateText(const TranslateTextRequest &request)
{

}

/**
 * @internal
 *
 * @class  TranslateClientPrivate
 *
 * @brief  Private implementation for TranslateClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TranslateClientPrivate object.
 *
 * @param  q  Pointer to this object's public TranslateClient instance.
 */
TranslateClientPrivate::TranslateClientPrivate(TranslateClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace Translate
} // namespace AWS
