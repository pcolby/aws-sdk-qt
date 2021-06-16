/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "cognitosyncclient.h"
#include "cognitosyncclient_p.h"

#include "core/awssignaturev4.h"
#include "bulkpublishrequest.h"
#include "bulkpublishresponse.h"
#include "deletedatasetrequest.h"
#include "deletedatasetresponse.h"
#include "describedatasetrequest.h"
#include "describedatasetresponse.h"
#include "describeidentitypoolusagerequest.h"
#include "describeidentitypoolusageresponse.h"
#include "describeidentityusagerequest.h"
#include "describeidentityusageresponse.h"
#include "getbulkpublishdetailsrequest.h"
#include "getbulkpublishdetailsresponse.h"
#include "getcognitoeventsrequest.h"
#include "getcognitoeventsresponse.h"
#include "getidentitypoolconfigurationrequest.h"
#include "getidentitypoolconfigurationresponse.h"
#include "listdatasetsrequest.h"
#include "listdatasetsresponse.h"
#include "listidentitypoolusagerequest.h"
#include "listidentitypoolusageresponse.h"
#include "listrecordsrequest.h"
#include "listrecordsresponse.h"
#include "registerdevicerequest.h"
#include "registerdeviceresponse.h"
#include "setcognitoeventsrequest.h"
#include "setcognitoeventsresponse.h"
#include "setidentitypoolconfigurationrequest.h"
#include "setidentitypoolconfigurationresponse.h"
#include "subscribetodatasetrequest.h"
#include "subscribetodatasetresponse.h"
#include "unsubscribefromdatasetrequest.h"
#include "unsubscribefromdatasetresponse.h"
#include "updaterecordsrequest.h"
#include "updaterecordsresponse.h"

#include <QNetworkAccessManager>
#include <QNetworkRequest>

/*!
 * \namespace QtAws::CognitoSync
 * \brief Contains classess for accessing Amazon Cognito Sync.
 *
 * \inmodule QtAwsCognitoSync
 *
 * @todo Move this to a separate template file.
 */

namespace QtAws {
namespace CognitoSync {

/*!
 * \class QtAws::CognitoSync::CognitoSyncClient
 * \brief The CognitoSyncClient class provides access to the Amazon Cognito Sync service.
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCognitoSync
 *
 *  <fullname>Amazon Cognito Sync</fullname>
 * 
 *  Amazon Cognito Sync provides an AWS service and client library that enable cross-device syncing of application-related
 *  user data. High-level client libraries are available for both iOS and Android. You can use these libraries to persist
 *  data locally so that it's available even if the device is offline. Developer credentials don't need to be stored on the
 *  mobile device to access the service. You can use Amazon Cognito to obtain a normalized user ID and credentials. User
 *  data is persisted in a dataset that can store up to 1 MB of key-value pairs, and you can have up to 20 datasets per user
 * 
 *  identity>
 * 
 *  With Amazon Cognito Sync, the data stored for each identity is accessible only to credentials assigned to that identity.
 *  In order to use the Cognito Sync service, you need to make API calls using credentials retrieved with <a
 *  href="http://docs.aws.amazon.com/cognitoidentity/latest/APIReference/Welcome.html">Amazon Cognito Identity
 * 
 *  service</a>>
 * 
 *  If you want to use Cognito Sync in an Android or iOS application, you will probably want to make API calls via the AWS
 *  Mobile SDK. To learn more, see the <a
 *  href="http://docs.aws.amazon.com/mobile/sdkforandroid/developerguide/cognito-sync.html">Developer Guide for Android</a>
 *  and the <a href="http://docs.aws.amazon.com/mobile/sdkforios/developerguide/cognito-sync.html">Developer Guide for
 */

/*!
 * \brief Constructs a CognitoSyncClient object.
 *
 * The new client object will \a region, \a credentials, and \a manager for
 * network operations.
 *
 * The new object will be owned by \a parent, if set.
 */
CognitoSyncClient::CognitoSyncClient(
    const QtAws::Core::AwsRegion::Region region,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CognitoSyncClientPrivate(this), parent)
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

/*!
 * \overload CognitoSyncClient()
 *
 * This overload allows the caller to specify the specific \a endpoint to send
 * requests to.  Typically, it is easier to use the alternative constructor,
 * which allows the caller to specify an AWS region instead, in which case this
 * client will determine the correct endpoint for the given region
 * automatically (via AwsEndpoint::getEndpoint).
 *
 * \sa QtAws::Core::AwsEndpoint::getEndpoint
 */
CognitoSyncClient::CognitoSyncClient(
    const QUrl &endpoint,
    QtAws::Core::AwsAbstractCredentials * credentials,
    QNetworkAccessManager * const manager,
    QObject * const parent)
: QtAws::Core::AwsAbstractClient(new CognitoSyncClientPrivate(this), parent)
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

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * BulkPublishResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Initiates a bulk publish of all existing datasets for an Identity Pool to the configured stream. Customers are limited
 * to one successful bulk publish per 24 hours. Bulk publish is an asynchronous request, customers can see the status of
 * the request via the GetBulkPublishDetails
 *
 * operation>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 */
BulkPublishResponse * CognitoSyncClient::bulkPublish(const BulkPublishRequest &request)
{
    return qobject_cast<BulkPublishResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * DeleteDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Deletes the specific dataset. The dataset will be deleted permanently, and the action can't be undone. Datasets that
 * this dataset was merged with will no longer report the merge. Any subsequent operation on this dataset will result in a
 *
 * ResourceNotFoundException>
 *
 * This API can be called with temporary user credentials provided by Cognito Identity or with developer
 */
DeleteDatasetResponse * CognitoSyncClient::deleteDataset(const DeleteDatasetRequest &request)
{
    return qobject_cast<DeleteDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * DescribeDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets meta data about a dataset by identity and dataset name. With Amazon Cognito Sync, each identity has access only to
 * its own data. Thus, the credentials used to make this API call need to have access to the identity
 *
 * data>
 *
 * This API can be called with temporary user credentials provided by Cognito Identity or with developer credentials. You
 * should use Cognito Identity credentials to make this API
 */
DescribeDatasetResponse * CognitoSyncClient::describeDataset(const DescribeDatasetRequest &request)
{
    return qobject_cast<DescribeDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * DescribeIdentityPoolUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets usage details (for example, data storage) about a particular identity
 *
 * pool>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 */
DescribeIdentityPoolUsageResponse * CognitoSyncClient::describeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest &request)
{
    return qobject_cast<DescribeIdentityPoolUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * DescribeIdentityUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets usage information for an identity, including number of datasets and data
 *
 * usage>
 *
 * This API can be called with temporary user credentials provided by Cognito Identity or with developer
 */
DescribeIdentityUsageResponse * CognitoSyncClient::describeIdentityUsage(const DescribeIdentityUsageRequest &request)
{
    return qobject_cast<DescribeIdentityUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * GetBulkPublishDetailsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Get the status of the last BulkPublish operation for an identity
 *
 * pool>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 */
GetBulkPublishDetailsResponse * CognitoSyncClient::getBulkPublishDetails(const GetBulkPublishDetailsRequest &request)
{
    return qobject_cast<GetBulkPublishDetailsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * GetCognitoEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the events and the corresponding Lambda functions associated with an identity
 *
 * pool>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 */
GetCognitoEventsResponse * CognitoSyncClient::getCognitoEvents(const GetCognitoEventsRequest &request)
{
    return qobject_cast<GetCognitoEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * GetIdentityPoolConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets the configuration settings of an identity
 *
 * pool>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 */
GetIdentityPoolConfigurationResponse * CognitoSyncClient::getIdentityPoolConfiguration(const GetIdentityPoolConfigurationRequest &request)
{
    return qobject_cast<GetIdentityPoolConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * ListDatasetsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Lists datasets for an identity. With Amazon Cognito Sync, each identity has access only to its own data. Thus, the
 * credentials used to make this API call need to have access to the identity
 *
 * data>
 *
 * ListDatasets can be called with temporary user credentials provided by Cognito Identity or with developer credentials.
 * You should use the Cognito Identity credentials to make this API
 */
ListDatasetsResponse * CognitoSyncClient::listDatasets(const ListDatasetsRequest &request)
{
    return qobject_cast<ListDatasetsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * ListIdentityPoolUsageResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets a list of identity pools registered with
 *
 * Cognito>
 *
 * ListIdentityPoolUsage can only be called with developer credentials. You cannot make this API call with the temporary
 * user credentials provided by Cognito
 */
ListIdentityPoolUsageResponse * CognitoSyncClient::listIdentityPoolUsage(const ListIdentityPoolUsageRequest &request)
{
    return qobject_cast<ListIdentityPoolUsageResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * ListRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Gets paginated records, optionally changed after a particular sync count for a dataset and identity. With Amazon Cognito
 * Sync, each identity has access only to its own data. Thus, the credentials used to make this API call need to have
 * access to the identity
 *
 * data>
 *
 * ListRecords can be called with temporary user credentials provided by Cognito Identity or with developer credentials.
 * You should use Cognito Identity credentials to make this API
 */
ListRecordsResponse * CognitoSyncClient::listRecords(const ListRecordsRequest &request)
{
    return qobject_cast<ListRecordsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * RegisterDeviceResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Registers a device to receive push sync
 *
 * notifications>
 *
 * This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with
 * developer
 */
RegisterDeviceResponse * CognitoSyncClient::registerDevice(const RegisterDeviceRequest &request)
{
    return qobject_cast<RegisterDeviceResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * SetCognitoEventsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the AWS Lambda function for a given event type for an identity pool. This request only updates the key/value pair
 * specified. Other key/values pairs are not updated. To remove a key value pair, pass a empty value for the particular
 *
 * key>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 */
SetCognitoEventsResponse * CognitoSyncClient::setCognitoEvents(const SetCognitoEventsRequest &request)
{
    return qobject_cast<SetCognitoEventsResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * SetIdentityPoolConfigurationResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Sets the necessary configuration for push
 *
 * sync>
 *
 * This API can only be called with developer credentials. You cannot call this API with the temporary user credentials
 * provided by Cognito
 */
SetIdentityPoolConfigurationResponse * CognitoSyncClient::setIdentityPoolConfiguration(const SetIdentityPoolConfigurationRequest &request)
{
    return qobject_cast<SetIdentityPoolConfigurationResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * SubscribeToDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Subscribes to receive notifications when a dataset is modified by another
 *
 * device>
 *
 * This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with
 * developer
 */
SubscribeToDatasetResponse * CognitoSyncClient::subscribeToDataset(const SubscribeToDatasetRequest &request)
{
    return qobject_cast<SubscribeToDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * UnsubscribeFromDatasetResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
 * Unsubscribes from receiving notifications when a dataset is modified by another
 *
 * device>
 *
 * This API can only be called with temporary credentials provided by Cognito Identity. You cannot call this API with
 * developer
 */
UnsubscribeFromDatasetResponse * CognitoSyncClient::unsubscribeFromDataset(const UnsubscribeFromDatasetRequest &request)
{
    return qobject_cast<UnsubscribeFromDatasetResponse *>(send(request));
}

/*!
 * Sends \a request to the CognitoSyncClient service, and returns a pointer to an
 * UpdateRecordsResponse object to track the result.
 *
 * \note The caller is to take responsbility for the resulting pointer.
 *
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
 */
UpdateRecordsResponse * CognitoSyncClient::updateRecords(const UpdateRecordsRequest &request)
{
    return qobject_cast<UpdateRecordsResponse *>(send(request));
}

/*!
 * \class QtAws::CognitoSync::CognitoSyncClientPrivate
 * \brief The CognitoSyncClientPrivate class provides private implementation for CognitoSyncClient.
 * \internal
 *
 * \ingroup aws-clients
 * \inmodule QtAwsCognitoSync
 */

/*!
 * Constructs a CognitoSyncClientPrivate object with public implementation \a q.
 */
CognitoSyncClientPrivate::CognitoSyncClientPrivate(CognitoSyncClient * const q)
    : QtAws::Core::AwsAbstractClientPrivate(q)
{
    signature = new QtAws::Core::AwsSignatureV4();
}

} // namespace CognitoSync
} // namespace QtAws
