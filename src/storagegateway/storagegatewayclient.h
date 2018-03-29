/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_STORAGEGATEWAYCLIENT_H
#define QTAWS_STORAGEGATEWAYCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace StorageGateway {

class StorageGatewayClientPrivate;
class ActivateGatewayRequest;
class ActivateGatewayResponse;
class AddCacheRequest;
class AddCacheResponse;
class AddTagsToResourceRequest;
class AddTagsToResourceResponse;
class AddUploadBufferRequest;
class AddUploadBufferResponse;
class AddWorkingStorageRequest;
class AddWorkingStorageResponse;
class CancelArchivalRequest;
class CancelArchivalResponse;
class CancelRetrievalRequest;
class CancelRetrievalResponse;
class CreateCachediSCSIVolumeRequest;
class CreateCachediSCSIVolumeResponse;
class CreateNFSFileShareRequest;
class CreateNFSFileShareResponse;
class CreateSnapshotRequest;
class CreateSnapshotResponse;
class CreateSnapshotFromVolumeRecoveryPointRequest;
class CreateSnapshotFromVolumeRecoveryPointResponse;
class CreateStorediSCSIVolumeRequest;
class CreateStorediSCSIVolumeResponse;
class CreateTapeWithBarcodeRequest;
class CreateTapeWithBarcodeResponse;
class CreateTapesRequest;
class CreateTapesResponse;
class DeleteBandwidthRateLimitRequest;
class DeleteBandwidthRateLimitResponse;
class DeleteChapCredentialsRequest;
class DeleteChapCredentialsResponse;
class DeleteFileShareRequest;
class DeleteFileShareResponse;
class DeleteGatewayRequest;
class DeleteGatewayResponse;
class DeleteSnapshotScheduleRequest;
class DeleteSnapshotScheduleResponse;
class DeleteTapeRequest;
class DeleteTapeResponse;
class DeleteTapeArchiveRequest;
class DeleteTapeArchiveResponse;
class DeleteVolumeRequest;
class DeleteVolumeResponse;
class DescribeBandwidthRateLimitRequest;
class DescribeBandwidthRateLimitResponse;
class DescribeCacheRequest;
class DescribeCacheResponse;
class DescribeCachediSCSIVolumesRequest;
class DescribeCachediSCSIVolumesResponse;
class DescribeChapCredentialsRequest;
class DescribeChapCredentialsResponse;
class DescribeGatewayInformationRequest;
class DescribeGatewayInformationResponse;
class DescribeMaintenanceStartTimeRequest;
class DescribeMaintenanceStartTimeResponse;
class DescribeNFSFileSharesRequest;
class DescribeNFSFileSharesResponse;
class DescribeSnapshotScheduleRequest;
class DescribeSnapshotScheduleResponse;
class DescribeStorediSCSIVolumesRequest;
class DescribeStorediSCSIVolumesResponse;
class DescribeTapeArchivesRequest;
class DescribeTapeArchivesResponse;
class DescribeTapeRecoveryPointsRequest;
class DescribeTapeRecoveryPointsResponse;
class DescribeTapesRequest;
class DescribeTapesResponse;
class DescribeUploadBufferRequest;
class DescribeUploadBufferResponse;
class DescribeVTLDevicesRequest;
class DescribeVTLDevicesResponse;
class DescribeWorkingStorageRequest;
class DescribeWorkingStorageResponse;
class DisableGatewayRequest;
class DisableGatewayResponse;
class ListFileSharesRequest;
class ListFileSharesResponse;
class ListGatewaysRequest;
class ListGatewaysResponse;
class ListLocalDisksRequest;
class ListLocalDisksResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTapesRequest;
class ListTapesResponse;
class ListVolumeInitiatorsRequest;
class ListVolumeInitiatorsResponse;
class ListVolumeRecoveryPointsRequest;
class ListVolumeRecoveryPointsResponse;
class ListVolumesRequest;
class ListVolumesResponse;
class NotifyWhenUploadedRequest;
class NotifyWhenUploadedResponse;
class RefreshCacheRequest;
class RefreshCacheResponse;
class RemoveTagsFromResourceRequest;
class RemoveTagsFromResourceResponse;
class ResetCacheRequest;
class ResetCacheResponse;
class RetrieveTapeArchiveRequest;
class RetrieveTapeArchiveResponse;
class RetrieveTapeRecoveryPointRequest;
class RetrieveTapeRecoveryPointResponse;
class SetLocalConsolePasswordRequest;
class SetLocalConsolePasswordResponse;
class ShutdownGatewayRequest;
class ShutdownGatewayResponse;
class StartGatewayRequest;
class StartGatewayResponse;
class UpdateBandwidthRateLimitRequest;
class UpdateBandwidthRateLimitResponse;
class UpdateChapCredentialsRequest;
class UpdateChapCredentialsResponse;
class UpdateGatewayInformationRequest;
class UpdateGatewayInformationResponse;
class UpdateGatewaySoftwareNowRequest;
class UpdateGatewaySoftwareNowResponse;
class UpdateMaintenanceStartTimeRequest;
class UpdateMaintenanceStartTimeResponse;
class UpdateNFSFileShareRequest;
class UpdateNFSFileShareResponse;
class UpdateSnapshotScheduleRequest;
class UpdateSnapshotScheduleResponse;
class UpdateVTLDeviceTypeRequest;
class UpdateVTLDeviceTypeResponse;

class QTAWS_EXPORT StorageGatewayClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    StorageGatewayClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    StorageGatewayClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
} // namespace QtAws

#endif
