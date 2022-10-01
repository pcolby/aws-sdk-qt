// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COGNITOSYNCCLIENT_H
#define QTAWS_COGNITOSYNCCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawscognitosyncglobal.h"

class QNetworkReply;

namespace QtAws {
namespace CognitoSync {

class CognitoSyncClientPrivate;
class BulkPublishRequest;
class BulkPublishResponse;
class DeleteDatasetRequest;
class DeleteDatasetResponse;
class DescribeDatasetRequest;
class DescribeDatasetResponse;
class DescribeIdentityPoolUsageRequest;
class DescribeIdentityPoolUsageResponse;
class DescribeIdentityUsageRequest;
class DescribeIdentityUsageResponse;
class GetBulkPublishDetailsRequest;
class GetBulkPublishDetailsResponse;
class GetCognitoEventsRequest;
class GetCognitoEventsResponse;
class GetIdentityPoolConfigurationRequest;
class GetIdentityPoolConfigurationResponse;
class ListDatasetsRequest;
class ListDatasetsResponse;
class ListIdentityPoolUsageRequest;
class ListIdentityPoolUsageResponse;
class ListRecordsRequest;
class ListRecordsResponse;
class RegisterDeviceRequest;
class RegisterDeviceResponse;
class SetCognitoEventsRequest;
class SetCognitoEventsResponse;
class SetIdentityPoolConfigurationRequest;
class SetIdentityPoolConfigurationResponse;
class SubscribeToDatasetRequest;
class SubscribeToDatasetResponse;
class UnsubscribeFromDatasetRequest;
class UnsubscribeFromDatasetResponse;
class UpdateRecordsRequest;
class UpdateRecordsResponse;

class QTAWSCOGNITOSYNC_EXPORT CognitoSyncClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CognitoSyncClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit CognitoSyncClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    BulkPublishResponse * bulkPublish(const BulkPublishRequest &request);
    DeleteDatasetResponse * deleteDataset(const DeleteDatasetRequest &request);
    DescribeDatasetResponse * describeDataset(const DescribeDatasetRequest &request);
    DescribeIdentityPoolUsageResponse * describeIdentityPoolUsage(const DescribeIdentityPoolUsageRequest &request);
    DescribeIdentityUsageResponse * describeIdentityUsage(const DescribeIdentityUsageRequest &request);
    GetBulkPublishDetailsResponse * getBulkPublishDetails(const GetBulkPublishDetailsRequest &request);
    GetCognitoEventsResponse * getCognitoEvents(const GetCognitoEventsRequest &request);
    GetIdentityPoolConfigurationResponse * getIdentityPoolConfiguration(const GetIdentityPoolConfigurationRequest &request);
    ListDatasetsResponse * listDatasets(const ListDatasetsRequest &request);
    ListIdentityPoolUsageResponse * listIdentityPoolUsage(const ListIdentityPoolUsageRequest &request);
    ListRecordsResponse * listRecords(const ListRecordsRequest &request);
    RegisterDeviceResponse * registerDevice(const RegisterDeviceRequest &request);
    SetCognitoEventsResponse * setCognitoEvents(const SetCognitoEventsRequest &request);
    SetIdentityPoolConfigurationResponse * setIdentityPoolConfiguration(const SetIdentityPoolConfigurationRequest &request);
    SubscribeToDatasetResponse * subscribeToDataset(const SubscribeToDatasetRequest &request);
    UnsubscribeFromDatasetResponse * unsubscribeFromDataset(const UnsubscribeFromDatasetRequest &request);
    UpdateRecordsResponse * updateRecords(const UpdateRecordsRequest &request);

private:
    Q_DECLARE_PRIVATE(CognitoSyncClient)
    Q_DISABLE_COPY(CognitoSyncClient)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
