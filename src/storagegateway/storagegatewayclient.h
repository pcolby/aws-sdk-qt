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

#ifndef QTAWS_STORAGEGATEWAYCLIENT_H
#define QTAWS_STORAGEGATEWAYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace AWS {

namespace StorageGateway {

class StorageGatewayClientPrivate;
class ActivateGatewayResponse;
class AddCacheResponse;
class AddTagsToResourceResponse;
class AddUploadBufferResponse;
class AddWorkingStorageResponse;
class CancelArchivalResponse;
class CancelRetrievalResponse;
class CreateCachediSCSIVolumeResponse;
class CreateNFSFileShareResponse;
class CreateSnapshotResponse;
class CreateSnapshotFromVolumeRecoveryPointResponse;
class CreateStorediSCSIVolumeResponse;
class CreateTapeWithBarcodeResponse;
class CreateTapesResponse;
class DeleteBandwidthRateLimitResponse;
class DeleteChapCredentialsResponse;
class DeleteFileShareResponse;
class DeleteGatewayResponse;
class DeleteSnapshotScheduleResponse;
class DeleteTapeResponse;
class DeleteTapeArchiveResponse;
class DeleteVolumeResponse;
class DescribeBandwidthRateLimitResponse;
class DescribeCacheResponse;
class DescribeCachediSCSIVolumesResponse;
class DescribeChapCredentialsResponse;
class DescribeGatewayInformationResponse;
class DescribeMaintenanceStartTimeResponse;
class DescribeNFSFileSharesResponse;
class DescribeSnapshotScheduleResponse;
class DescribeStorediSCSIVolumesResponse;
class DescribeTapeArchivesResponse;
class DescribeTapeRecoveryPointsResponse;
class DescribeTapesResponse;
class DescribeUploadBufferResponse;
class DescribeVTLDevicesResponse;
class DescribeWorkingStorageResponse;
class DisableGatewayResponse;
class ListFileSharesResponse;
class ListGatewaysResponse;
class ListLocalDisksResponse;
class ListTagsForResourceResponse;
class ListTapesResponse;
class ListVolumeInitiatorsResponse;
class ListVolumeRecoveryPointsResponse;
class ListVolumesResponse;
class NotifyWhenUploadedResponse;
class RefreshCacheResponse;
class RemoveTagsFromResourceResponse;
class ResetCacheResponse;
class RetrieveTapeArchiveResponse;
class RetrieveTapeRecoveryPointResponse;
class SetLocalConsolePasswordResponse;
class ShutdownGatewayResponse;
class StartGatewayResponse;
class UpdateBandwidthRateLimitResponse;
class UpdateChapCredentialsResponse;
class UpdateGatewayInformationResponse;
class UpdateGatewaySoftwareNowResponse;
class UpdateMaintenanceStartTimeResponse;
class UpdateNFSFileShareResponse;
class UpdateSnapshotScheduleResponse;
class UpdateVTLDeviceTypeResponse;

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
    CreateNFSFileShareResponse * createNFSFileShare(const CreateNFSFileShareRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateSnapshotFromVolumeRecoveryPointResponse * createSnapshotFromVolumeRecoveryPoint(const CreateSnapshotFromVolumeRecoveryPointRequest &request);
    CreateStorediSCSIVolumeResponse * createStorediSCSIVolume(const CreateStorediSCSIVolumeRequest &request);
    CreateTapeWithBarcodeResponse * createTapeWithBarcode(const CreateTapeWithBarcodeRequest &request);
    CreateTapesResponse * createTapes(const CreateTapesRequest &request);
    DeleteBandwidthRateLimitResponse * deleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest &request);
    DeleteChapCredentialsResponse * deleteChapCredentials(const DeleteChapCredentialsRequest &request);
    DeleteFileShareResponse * deleteFileShare(const DeleteFileShareRequest &request);
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
    DescribeNFSFileSharesResponse * describeNFSFileShares(const DescribeNFSFileSharesRequest &request);
    DescribeSnapshotScheduleResponse * describeSnapshotSchedule(const DescribeSnapshotScheduleRequest &request);
    DescribeStorediSCSIVolumesResponse * describeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest &request);
    DescribeTapeArchivesResponse * describeTapeArchives(const DescribeTapeArchivesRequest &request);
    DescribeTapeRecoveryPointsResponse * describeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest &request);
    DescribeTapesResponse * describeTapes(const DescribeTapesRequest &request);
    DescribeUploadBufferResponse * describeUploadBuffer(const DescribeUploadBufferRequest &request);
    DescribeVTLDevicesResponse * describeVTLDevices(const DescribeVTLDevicesRequest &request);
    DescribeWorkingStorageResponse * describeWorkingStorage(const DescribeWorkingStorageRequest &request);
    DisableGatewayResponse * disableGateway(const DisableGatewayRequest &request);
    ListFileSharesResponse * listFileShares(const ListFileSharesRequest &request);
    ListGatewaysResponse * listGateways(const ListGatewaysRequest &request);
    ListLocalDisksResponse * listLocalDisks(const ListLocalDisksRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTapesResponse * listTapes(const ListTapesRequest &request);
    ListVolumeInitiatorsResponse * listVolumeInitiators(const ListVolumeInitiatorsRequest &request);
    ListVolumeRecoveryPointsResponse * listVolumeRecoveryPoints(const ListVolumeRecoveryPointsRequest &request);
    ListVolumesResponse * listVolumes(const ListVolumesRequest &request);
    NotifyWhenUploadedResponse * notifyWhenUploaded(const NotifyWhenUploadedRequest &request);
    RefreshCacheResponse * refreshCache(const RefreshCacheRequest &request);
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
    UpdateNFSFileShareResponse * updateNFSFileShare(const UpdateNFSFileShareRequest &request);
    UpdateSnapshotScheduleResponse * updateSnapshotSchedule(const UpdateSnapshotScheduleRequest &request);
    UpdateVTLDeviceTypeResponse * updateVTLDeviceType(const UpdateVTLDeviceTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(StorageGatewayClient)
    Q_DISABLE_COPY(StorageGatewayClient)

};

} // namespace StorageGateway
} // namespace AWS

#endif
