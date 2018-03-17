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

#include "cognitosyncclient.h"
#include "cognitosyncclient_p.h"

#include "core/awssignaturev4.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

namespace AWS {
namespace CognitoSync {

/**
 * @class  CognitoSyncClient
 *
 * @brief  Client for Amazon Cognito Sync
 *
 * <fullname>Amazon Cognito Sync</fullname>
 *
 * Amazon Cognito Sync provides an AWS service and client library that enable cross-device syncing of application-related
 * user data. High-level client libraries are available for both iOS and Android. You can use these libraries to persist
 * data locally so that it's available even if the device is offline. Developer credentials don't need to be stored on the
 * mobile device to access the service. You can use Amazon Cognito to obtain a normalized user ID and credentials. User
 * data is persisted in a dataset that can store up to 1 MB of key-value pairs, and you can have up to 20 datasets per user
 *
 * identity>
 *
 * With Amazon Cognito Sync, the data stored for each identity is accessible only to credentials assigned to that identity.
 * In order to use the Cognito Sync service, you need to make API calls using credentials retrieved with <a
 * href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/Welcome.html">Amazon Cognito Identity
 *
 * service</a>>
 *
 * If you want to use Cognito Sync in an Android or iOS application, you will probably want to make API calls via the AWS
 * Mobile SDK. To learn more, see the <a
 * href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-sync.html">Developer Guide for Android</a>
 * and the <a href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-sync.html">Developer Guide for
 */

/**
 * @brief  Constructs a new CognitoSyncClient object.
 *
 * @param  region       AWS region for this client to service requests for.
 * @param  credentials  AWS credentials to use for signing requests.
 * @param  manager      Network access manager for sending requests.
 * @param  parent       This object's parent.
 */
CognitoSyncClient::CognitoSyncClient(
    const AwsRegion::Region region,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CognitoSyncClientPrivate(this), parent)
{
    Q_D(CognitoSyncClient);
    d->region = region;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/**
 * @brief  Constructs a new CognitoSyncClient object.
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
CognitoSyncClient::CognitoSyncClient(
    const QUrl &endpoint,
    AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: AwsAbstractClient(new CognitoSyncClientPrivate(this), parent)
{
    Q_D(CognitoSyncClient);
    d->endpoint = endpoint;
    d->credentials = credentials;
    d->networkAccessManager = manager;
    d->serviceName = QLatin1String("{{servicename}}");
}

/// @todo {{publicSlots}}

/**
 * @internal
 *
 * @class  CognitoSyncClientPrivate
 *
 * @brief  Private implementation for CognitoSyncClient.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CognitoSyncClientPrivate object.
 *
 * @param  q  Pointer to this object's public CognitoSyncClient instance.
 */
CognitoSyncClientPrivate::CognitoSyncClientPrivate(CognitoSyncClient * const q)
    : AwsAbstractClientPrivate(q)
{
    signature = new AwsSignatureV4();
}

} // namespace CognitoSync
} // namespace AWS
