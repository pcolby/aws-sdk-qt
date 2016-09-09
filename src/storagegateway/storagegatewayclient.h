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

#ifndef QTAWS_STORAGEGATEWAYCLIENT_H
#define QTAWS_STORAGEGATEWAYCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
class StorageGatewayClientPrivate;

class QTAWS_EXPORT StorageGatewayClient : public AwsAbstractClient {
    Q_OBJECT

public:
    StorageGatewayClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    StorageGatewayClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    StorageGatewayActivateGatewayResponse * activateGateway(const StorageGatewayActivateGatewayRequest &request);
    StorageGatewayAddCacheResponse * addCache(const StorageGatewayAddCacheRequest &request);
    StorageGatewayAddTagsToResourceResponse * addTagsToResource(const StorageGatewayAddTagsToResourceRequest &request);
    StorageGatewayAddUploadBufferResponse * addUploadBuffer(const StorageGatewayAddUploadBufferRequest &request);
    StorageGatewayAddWorkingStorageResponse * addWorkingStorage(const StorageGatewayAddWorkingStorageRequest &request);
    StorageGatewayCancelArchivalResponse * cancelArchival(const StorageGatewayCancelArchivalRequest &request);
    StorageGatewayCancelRetrievalResponse * cancelRetrieval(const StorageGatewayCancelRetrievalRequest &request);
    StorageGatewayCreateCachediSCSIVolumeResponse * createCachediSCSIVolume(const StorageGatewayCreateCachediSCSIVolumeRequest &request);
    StorageGatewayCreateSnapshotResponse * createSnapshot(const StorageGatewayCreateSnapshotRequest &request);
    StorageGatewayCreateSnapshotFromVolumeRecoveryPointResponse * createSnapshotFromVolumeRecoveryPoint(const StorageGatewayCreateSnapshotFromVolumeRecoveryPointRequest &request);
    StorageGatewayCreateStorediSCSIVolumeResponse * createStorediSCSIVolume(const StorageGatewayCreateStorediSCSIVolumeRequest &request);
    StorageGatewayCreateTapeWithBarcodeResponse * createTapeWithBarcode(const StorageGatewayCreateTapeWithBarcodeRequest &request);
    StorageGatewayCreateTapesResponse * createTapes(const StorageGatewayCreateTapesRequest &request);
    StorageGatewayDeleteBandwidthRateLimitResponse * deleteBandwidthRateLimit(const StorageGatewayDeleteBandwidthRateLimitRequest &request);
    StorageGatewayDeleteChapCredentialsResponse * deleteChapCredentials(const StorageGatewayDeleteChapCredentialsRequest &request);
    StorageGatewayDeleteGatewayResponse * deleteGateway(const StorageGatewayDeleteGatewayRequest &request);
    StorageGatewayDeleteSnapshotScheduleResponse * deleteSnapshotSchedule(const StorageGatewayDeleteSnapshotScheduleRequest &request);
    StorageGatewayDeleteTapeResponse * deleteTape(const StorageGatewayDeleteTapeRequest &request);
    StorageGatewayDeleteTapeArchiveResponse * deleteTapeArchive(const StorageGatewayDeleteTapeArchiveRequest &request);
    StorageGatewayDeleteVolumeResponse * deleteVolume(const StorageGatewayDeleteVolumeRequest &request);
    StorageGatewayDescribeBandwidthRateLimitResponse * describeBandwidthRateLimit(const StorageGatewayDescribeBandwidthRateLimitRequest &request);
    StorageGatewayDescribeCacheResponse * describeCache(const StorageGatewayDescribeCacheRequest &request);
    StorageGatewayDescribeCachediSCSIVolumesResponse * describeCachediSCSIVolumes(const StorageGatewayDescribeCachediSCSIVolumesRequest &request);
    StorageGatewayDescribeChapCredentialsResponse * describeChapCredentials(const StorageGatewayDescribeChapCredentialsRequest &request);
    StorageGatewayDescribeGatewayInformationResponse * describeGatewayInformation(const StorageGatewayDescribeGatewayInformationRequest &request);
    StorageGatewayDescribeMaintenanceStartTimeResponse * describeMaintenanceStartTime(const StorageGatewayDescribeMaintenanceStartTimeRequest &request);
    StorageGatewayDescribeSnapshotScheduleResponse * describeSnapshotSchedule(const StorageGatewayDescribeSnapshotScheduleRequest &request);
    StorageGatewayDescribeStorediSCSIVolumesResponse * describeStorediSCSIVolumes(const StorageGatewayDescribeStorediSCSIVolumesRequest &request);
    StorageGatewayDescribeTapeArchivesResponse * describeTapeArchives(const StorageGatewayDescribeTapeArchivesRequest &request);
    StorageGatewayDescribeTapeRecoveryPointsResponse * describeTapeRecoveryPoints(const StorageGatewayDescribeTapeRecoveryPointsRequest &request);
    StorageGatewayDescribeTapesResponse * describeTapes(const StorageGatewayDescribeTapesRequest &request);
    StorageGatewayDescribeUploadBufferResponse * describeUploadBuffer(const StorageGatewayDescribeUploadBufferRequest &request);
    StorageGatewayDescribeVTLDevicesResponse * describeVTLDevices(const StorageGatewayDescribeVTLDevicesRequest &request);
    StorageGatewayDescribeWorkingStorageResponse * describeWorkingStorage(const StorageGatewayDescribeWorkingStorageRequest &request);
    StorageGatewayDisableGatewayResponse * disableGateway(const StorageGatewayDisableGatewayRequest &request);
    StorageGatewayListGatewaysResponse * listGateways(const StorageGatewayListGatewaysRequest &request);
    StorageGatewayListLocalDisksResponse * listLocalDisks(const StorageGatewayListLocalDisksRequest &request);
    StorageGatewayListTagsForResourceResponse * listTagsForResource(const StorageGatewayListTagsForResourceRequest &request);
    StorageGatewayListTapesResponse * listTapes(const StorageGatewayListTapesRequest &request);
    StorageGatewayListVolumeInitiatorsResponse * listVolumeInitiators(const StorageGatewayListVolumeInitiatorsRequest &request);
    StorageGatewayListVolumeRecoveryPointsResponse * listVolumeRecoveryPoints(const StorageGatewayListVolumeRecoveryPointsRequest &request);
    StorageGatewayListVolumesResponse * listVolumes(const StorageGatewayListVolumesRequest &request);
    StorageGatewayRemoveTagsFromResourceResponse * removeTagsFromResource(const StorageGatewayRemoveTagsFromResourceRequest &request);
    StorageGatewayResetCacheResponse * resetCache(const StorageGatewayResetCacheRequest &request);
    StorageGatewayRetrieveTapeArchiveResponse * retrieveTapeArchive(const StorageGatewayRetrieveTapeArchiveRequest &request);
    StorageGatewayRetrieveTapeRecoveryPointResponse * retrieveTapeRecoveryPoint(const StorageGatewayRetrieveTapeRecoveryPointRequest &request);
    StorageGatewaySetLocalConsolePasswordResponse * setLocalConsolePassword(const StorageGatewaySetLocalConsolePasswordRequest &request);
    StorageGatewayShutdownGatewayResponse * shutdownGateway(const StorageGatewayShutdownGatewayRequest &request);
    StorageGatewayStartGatewayResponse * startGateway(const StorageGatewayStartGatewayRequest &request);
    StorageGatewayUpdateBandwidthRateLimitResponse * updateBandwidthRateLimit(const StorageGatewayUpdateBandwidthRateLimitRequest &request);
    StorageGatewayUpdateChapCredentialsResponse * updateChapCredentials(const StorageGatewayUpdateChapCredentialsRequest &request);
    StorageGatewayUpdateGatewayInformationResponse * updateGatewayInformation(const StorageGatewayUpdateGatewayInformationRequest &request);
    StorageGatewayUpdateGatewaySoftwareNowResponse * updateGatewaySoftwareNow(const StorageGatewayUpdateGatewaySoftwareNowRequest &request);
    StorageGatewayUpdateMaintenanceStartTimeResponse * updateMaintenanceStartTime(const StorageGatewayUpdateMaintenanceStartTimeRequest &request);
    StorageGatewayUpdateSnapshotScheduleResponse * updateSnapshotSchedule(const StorageGatewayUpdateSnapshotScheduleRequest &request);
    StorageGatewayUpdateVTLDeviceTypeResponse * updateVTLDeviceType(const StorageGatewayUpdateVTLDeviceTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(StorageGatewayClient)
    Q_DISABLE_COPY(StorageGatewayClient)

};

QTAWS_END_NAMESPACE

#endif
