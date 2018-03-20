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

#ifndef QTAWS_COGNITOSYNCCLIENT_H
#define QTAWS_COGNITOSYNCCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace CognitoSync {

class CognitoSyncClientPrivate;
class BulkPublishResponse;
class DeleteDatasetResponse;
class DescribeDatasetResponse;
class DescribeIdentityPoolUsageResponse;
class DescribeIdentityUsageResponse;
class GetBulkPublishDetailsResponse;
class GetCognitoEventsResponse;
class GetIdentityPoolConfigurationResponse;
class ListDatasetsResponse;
class ListIdentityPoolUsageResponse;
class ListRecordsResponse;
class RegisterDeviceResponse;
class SetCognitoEventsResponse;
class SetIdentityPoolConfigurationResponse;
class SubscribeToDatasetResponse;
class UnsubscribeFromDatasetResponse;
class UpdateRecordsResponse;

class QTAWS_EXPORT CognitoSyncClient : public AwsAbstractClient {
    Q_OBJECT

public:
    CognitoSyncClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CognitoSyncClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
