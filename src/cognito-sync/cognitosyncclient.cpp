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
    d->apiVersion = QStringLiteral("2014-06-30");
    d->credentials = credentials;
    d->endpointPrefix = QStringLiteral("cognito-sync");
    d->networkAccessManager = manager;
    d->region = region;
    d->serviceFullName = QStringLiteral("Amazon Cognito Sync");
    d->serviceName = QStringLiteral("cognito-sync");
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
    d->apiVersion = QStringLiteral("2014-06-30");
    d->credentials = credentials;
    d->endpoint = endpoint;
    d->endpointPrefix = QStringLiteral("cognito-sync");
    d->networkAccessManager = manager;
    d->serviceFullName = QStringLiteral("Amazon Cognito Sync");
    d->serviceName = QStringLiteral("cognito-sync");
}

/// @todo override getEndpoint() to use cognito-sync.

/**
 * Initiates a bulk publish of all existing datasets for an Identity Pool to the configured stream. Customers are limited
 * to one successful bulk publish per 24 hours. Bulk publish is an asynchronous request, customers can see the status of
 * the request via the GetBulkPublishDetails
 *
 * operation>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
BulkPublishResponse * CognitoSyncClient::bulkPublish(const BulkPublishRequest &request)
{

}

/**
 * Deletes the specific dataset. The dataset will be deleted permanently, and the action can't be undone. Datasets that
 * this dataset was merged with will no longer report the merge. Any subsequent operation on this dataset will result in a
 *
 * ResourceNotFoundException>
 *
 * This API can be called with temporary user credentials provided by Cognito Identity or with developer
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DeleteDatasetResponse * CognitoSyncClient::deleteDataset(const DeleteDatasetRequest &request)
{

}

/**
 * Gets meta data about a dataset by identity and dataset name. With Amazon Cognito Sync, each identity has access only to
 * its own data. Thus, the credentials used to make this API call need to have access to the identity
 *
 * data>
 *
 * This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You
 * should use Cognito Identity credentials to make this API
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeDatasetResponse * CognitoSyncClient::describeDataset(const DescribeDatasetRequest &request)
{

}

/**
 * Gets usage details (for example, data storage) about a particular identity
 *
 * pool>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeIdentityPoolUsageResponse * CognitoSyncClient::describeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest &request)
{

}

/**
 * Gets usage information for an identity, including number of datasets and data
 *
 * usage>
 *
 * This API can be called with temporary user credentials provided by Cognito Identity or with developer
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
DescribeIdentityUsageResponse * CognitoSyncClient::describeIdentityUsage(const DescribeIdentityUsageRequest &request)
{

}

/**
 * Get the status of the last BulkPublish operation for an identity
 *
 * pool>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetBulkPublishDetailsResponse * CognitoSyncClient::getBulkPublishDetails(const GetBulkPublishDetailsRequest &request)
{

}

/**
 * Gets the events and the corresponding Lambda functions associated with an identity
 *
 * pool>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetCognitoEventsResponse * CognitoSyncClient::getCognitoEvents(const GetCognitoEventsRequest &request)
{

}

/**
 * Gets the configuration settings of an identity
 *
 * pool>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
GetIdentityPoolConfigurationResponse * CognitoSyncClient::getIdentityPoolConfiguration(const GetIdentityPoolConfigurationRequest &request)
{

}

/**
 * Lists datasets for an identity. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the
 * credentials used to make this API call need to have access to the identity
 *
 * data>
 *
 * ListDatasets can be called with temporary user credentials provided by Cognito Identity or with developer credentials.
 * You should use the Cognito Identity credentials to make this API
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListDatasetsResponse * CognitoSyncClient::listDatasets(const ListDatasetsRequest &request)
{

}

/**
 * Gets a list of identity pools registered with
 *
 * Cognito>
 *
 * ListIdentityPoolUsage can only be called with developer credentials. You cannot make this API call with the temporary
 * user credentials provided by Cognito
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListIdentityPoolUsageResponse * CognitoSyncClient::listIdentityPoolUsage(const ListIdentityPoolUsageRequest &request)
{

}

/**
 * Gets paginated records, optionally changed after a particular sync count for a dataset and identity. With Amazon Cognito
 * Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have
 * access to the identity
 *
 * data>
 *
 * ListRecords can be called with temporary user credentials provided by Cognito Identity or with developer credentials.
 * You should use Cognito Identity credentials to make this API
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
ListRecordsResponse * CognitoSyncClient::listRecords(const ListRecordsRequest &request)
{

}

/**
 * Registers a device to receive push sync
 *
 * notifications>
 *
 * This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with
 * developer
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
RegisterDeviceResponse * CognitoSyncClient::registerDevice(const RegisterDeviceRequest &request)
{

}

/**
 * Sets the AWS Lambda function for a given event type for an identity pool. This request only updates the key/value pair
 * specified. Other key/values pairs are not updated. To remove a key value pair, pass a empty value for the particular
 *
 * key>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetCognitoEventsResponse * CognitoSyncClient::setCognitoEvents(const SetCognitoEventsRequest &request)
{

}

/**
 * Sets the necessary configuration for push
 *
 * sync>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SetIdentityPoolConfigurationResponse * CognitoSyncClient::setIdentityPoolConfiguration(const SetIdentityPoolConfigurationRequest &request)
{

}

/**
 * Subscribes to receive notifications when a dataset is modified by another
 *
 * device>
 *
 * This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with
 * developer
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
SubscribeToDatasetResponse * CognitoSyncClient::subscribeToDataset(const SubscribeToDatasetRequest &request)
{

}

/**
 * Unsubscribes from receiving notifications when a dataset is modified by another
 *
 * device>
 *
 * This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with
 * developer
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UnsubscribeFromDatasetResponse * CognitoSyncClient::unsubscribeFromDataset(const UnsubscribeFromDatasetRequest &request)
{

}

/**
 * Posts updates to records and adds and deletes records for a dataset and
 *
 * user>
 *
 * The sync count in the record patch is your last known sync count for that record. The server will reject an
 * UpdateRecords request with a ResourceConflictException if you try to patch a record with a new value but a stale sync
 *
 * count>
 *
 * For example, if the sync count on the server is 5 for a key called highScore and you try and submit a new highScore with
 * sync count of 4, the request will be rejected. To obtain the current sync count for a record, call ListRecords. On a
 * successful update of the record, the response returns the new sync count for that record. You should present that sync
 * count the next time you try to update that same record. When the record does not exist, specify the sync count as
 *
 * 0>
 *
 * This API can be called with temporary user credentials provided by Cognito Identity or with developer
 *
 * @param  request Request to send to Amazon Cognito Sync.
 *
 * @return A pointer to a related response object.
 *
 * @note   The caller is to take responsbility for the resulting pointer.
 */
UpdateRecordsResponse * CognitoSyncClient::updateRecords(const UpdateRecordsRequest &request)
{

}

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
