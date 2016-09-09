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

#ifndef QTAWS_COGNITOSYNCCLIENT_H
#define QTAWS_COGNITOSYNCCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class CognitoSyncClientPrivate;

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
    CognitoSyncBulkPublishResponse * bulkPublish(const CognitoSyncBulkPublishRequest &request);
    CognitoSyncDeleteDatasetResponse * deleteDataset(const CognitoSyncDeleteDatasetRequest &request);
    CognitoSyncDescribeDatasetResponse * describeDataset(const CognitoSyncDescribeDatasetRequest &request);
    CognitoSyncDescribeIdentityPoolUsageResponse * describeIdentityPoolUsage(const CognitoSyncDescribeIdentityPoolUsageRequest &request);
    CognitoSyncDescribeIdentityUsageResponse * describeIdentityUsage(const CognitoSyncDescribeIdentityUsageRequest &request);
    CognitoSyncGetBulkPublishDetailsResponse * getBulkPublishDetails(const CognitoSyncGetBulkPublishDetailsRequest &request);
    CognitoSyncGetCognitoEventsResponse * getCognitoEvents(const CognitoSyncGetCognitoEventsRequest &request);
    CognitoSyncGetIdentityPoolConfigurationResponse * getIdentityPoolConfiguration(const CognitoSyncGetIdentityPoolConfigurationRequest &request);
    CognitoSyncListDatasetsResponse * listDatasets(const CognitoSyncListDatasetsRequest &request);
    CognitoSyncListIdentityPoolUsageResponse * listIdentityPoolUsage(const CognitoSyncListIdentityPoolUsageRequest &request);
    CognitoSyncListRecordsResponse * listRecords(const CognitoSyncListRecordsRequest &request);
    CognitoSyncRegisterDeviceResponse * registerDevice(const CognitoSyncRegisterDeviceRequest &request);
    CognitoSyncSetCognitoEventsResponse * setCognitoEvents(const CognitoSyncSetCognitoEventsRequest &request);
    CognitoSyncSetIdentityPoolConfigurationResponse * setIdentityPoolConfiguration(const CognitoSyncSetIdentityPoolConfigurationRequest &request);
    CognitoSyncSubscribeToDatasetResponse * subscribeToDataset(const CognitoSyncSubscribeToDatasetRequest &request);
    CognitoSyncUnsubscribeFromDatasetResponse * unsubscribeFromDataset(const CognitoSyncUnsubscribeFromDatasetRequest &request);
    CognitoSyncUpdateRecordsResponse * updateRecords(const CognitoSyncUpdateRecordsRequest &request);

private:
    Q_DECLARE_PRIVATE(CognitoSyncClient)
    Q_DISABLE_COPY(CognitoSyncClient)

};

QTAWS_END_NAMESPACE

#endif
