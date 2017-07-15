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

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace StorageGateway {

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
    ActivateGatewayResponse * activateGateway(const ActivateGatewayRequest &request);
    AddCacheResponse * addCache(const AddCacheRequest &request);
    AddTagsToResourceResponse * addTagsToResource(const AddTagsToResourceRequest &request);
    AddUploadBufferResponse * addUploadBuffer(const AddUploadBufferRequest &request);
    AddWorkingStorageResponse * addWorkingStorage(const AddWorkingStorageRequest &request);
    CancelArchivalResponse * cancelArchival(const CancelArchivalRequest &request);
    CancelRetrievalResponse * cancelRetrieval(const CancelRetrievalRequest &request);
    CreateCachediSCSIVolumeResponse * createCachediSCSIVolume(const CreateCachediSCSIVolumeRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateSnapshotFromVolumeRecoveryPointResponse * createSnapshotFromVolumeRecoveryPoint(const CreateSnapshotFromVolumeRecoveryPointRequest &request);
    CreateStorediSCSIVolumeResponse * createStorediSCSIVolume(const CreateStorediSCSIVolumeRequest &request);
    CreateTapeWithBarcodeResponse * createTapeWithBarcode(const CreateTapeWithBarcodeRequest &request);
    CreateTapesResponse * createTapes(const CreateTapesRequest &request);
    DeleteBandwidthRateLimitResponse * deleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest &request);
    DeleteChapCredentialsResponse * deleteChapCredentials(const DeleteChapCredentialsRequest &request);
    DeleteGatewayResponse * deleteGateway(const DeleteGatewayRequest &request);
    DeleteSnapshotScheduleResponse * deleteSnapshotSchedule(const DeleteSnapshotScheduleRequest &request);
    DeleteTapeResponse * deleteTape(const DeleteTapeRequest &request);
    DeleteTapeArchiveResponse * deleteTapeArchive(const DeleteTapeArchiveRequest &request);
    DeleteVolumeResponse * deleteVolume(const DeleteVolumeRequest &request);
    DescribeBandwidthRateLimitResponse * describeBandwidthRateLimit(const DescribeBandwidthRateLimitRequest &request);
    DescribeCacheResponse * describeCache(const DescribeCacheRequest &request);
    DescribeCachediSCSIVolumesResponse * describeCachediSCSIVolumes(const DescribeCachediSCSIVolumesRequest &request);
    DescribeChapCredentialsResponse * describeChapCredentials(const DescribeChapCredentialsRequest &request);
    DescribeGatewayInformationResponse * describeGatewayInformation(const DescribeGatewayInformationRequest &request);
    DescribeMaintenanceStartTimeResponse * describeMaintenanceStartTime(const DescribeMaintenanceStartTimeRequest &request);
    DescribeSnapshotScheduleResponse * describeSnapshotSchedule(const DescribeSnapshotScheduleRequest &request);
    DescribeStorediSCSIVolumesResponse * describeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest &request);
    DescribeTapeArchivesResponse * describeTapeArchives(const DescribeTapeArchivesRequest &request);
    DescribeTapeRecoveryPointsResponse * describeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest &request);
    DescribeTapesResponse * describeTapes(const DescribeTapesRequest &request);
    DescribeUploadBufferResponse * describeUploadBuffer(const DescribeUploadBufferRequest &request);
    DescribeVTLDevicesResponse * describeVTLDevices(const DescribeVTLDevicesRequest &request);
    DescribeWorkingStorageResponse * describeWorkingStorage(const DescribeWorkingStorageRequest &request);
    DisableGatewayResponse * disableGateway(const DisableGatewayRequest &request);
    ListGatewaysResponse * listGateways(const ListGatewaysRequest &request);
    ListLocalDisksResponse * listLocalDisks(const ListLocalDisksRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTapesResponse * listTapes(const ListTapesRequest &request);
    ListVolumeInitiatorsResponse * listVolumeInitiators(const ListVolumeInitiatorsRequest &request);
    ListVolumeRecoveryPointsResponse * listVolumeRecoveryPoints(const ListVolumeRecoveryPointsRequest &request);
    ListVolumesResponse * listVolumes(const ListVolumesRequest &request);
    RemoveTagsFromResourceResponse * removeTagsFromResource(const RemoveTagsFromResourceRequest &request);
    ResetCacheResponse * resetCache(const ResetCacheRequest &request);
    RetrieveTapeArchiveResponse * retrieveTapeArchive(const RetrieveTapeArchiveRequest &request);
    RetrieveTapeRecoveryPointResponse * retrieveTapeRecoveryPoint(const RetrieveTapeRecoveryPointRequest &request);
    SetLocalConsolePasswordResponse * setLocalConsolePassword(const SetLocalConsolePasswordRequest &request);
    ShutdownGatewayResponse * shutdownGateway(const ShutdownGatewayRequest &request);
    StartGatewayResponse * startGateway(const StartGatewayRequest &request);
    UpdateBandwidthRateLimitResponse * updateBandwidthRateLimit(const UpdateBandwidthRateLimitRequest &request);
    UpdateChapCredentialsResponse * updateChapCredentials(const UpdateChapCredentialsRequest &request);
    UpdateGatewayInformationResponse * updateGatewayInformation(const UpdateGatewayInformationRequest &request);
    UpdateGatewaySoftwareNowResponse * updateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest &request);
    UpdateMaintenanceStartTimeResponse * updateMaintenanceStartTime(const UpdateMaintenanceStartTimeRequest &request);
    UpdateSnapshotScheduleResponse * updateSnapshotSchedule(const UpdateSnapshotScheduleRequest &request);
    UpdateVTLDeviceTypeResponse * updateVTLDeviceType(const UpdateVTLDeviceTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(StorageGatewayClient)
    Q_DISABLE_COPY(StorageGatewayClient)

};

} // namespace StorageGateway
} // namespace AWS

#endif
