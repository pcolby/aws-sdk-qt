/*
    Copyright 2013-2020 Paul Colby

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

#ifndef QTAWS_COGNITOSYNCCLIENT_H
#define QTAWS_COGNITOSYNCCLIENT_H

#include "core/awsabstractclient.h"

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

class QTAWS_EXPORT CognitoSyncClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    CognitoSyncClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    CognitoSyncClient(
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
