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
class AssignTapePoolRequest;
class AssignTapePoolResponse;
class AssociateFileSystemRequest;
class AssociateFileSystemResponse;
class AttachVolumeRequest;
class AttachVolumeResponse;
class CancelArchivalRequest;
class CancelArchivalResponse;
class CancelRetrievalRequest;
class CancelRetrievalResponse;
class CreateCachediSCSIVolumeRequest;
class CreateCachediSCSIVolumeResponse;
class CreateNFSFileShareRequest;
class CreateNFSFileShareResponse;
class CreateSMBFileShareRequest;
class CreateSMBFileShareResponse;
class CreateSnapshotRequest;
class CreateSnapshotResponse;
class CreateSnapshotFromVolumeRecoveryPointRequest;
class CreateSnapshotFromVolumeRecoveryPointResponse;
class CreateStorediSCSIVolumeRequest;
class CreateStorediSCSIVolumeResponse;
class CreateTapePoolRequest;
class CreateTapePoolResponse;
class CreateTapeWithBarcodeRequest;
class CreateTapeWithBarcodeResponse;
class CreateTapesRequest;
class CreateTapesResponse;
class DeleteAutomaticTapeCreationPolicyRequest;
class DeleteAutomaticTapeCreationPolicyResponse;
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
class DeleteTapePoolRequest;
class DeleteTapePoolResponse;
class DeleteVolumeRequest;
class DeleteVolumeResponse;
class DescribeAvailabilityMonitorTestRequest;
class DescribeAvailabilityMonitorTestResponse;
class DescribeBandwidthRateLimitRequest;
class DescribeBandwidthRateLimitResponse;
class DescribeBandwidthRateLimitScheduleRequest;
class DescribeBandwidthRateLimitScheduleResponse;
class DescribeCacheRequest;
class DescribeCacheResponse;
class DescribeCachediSCSIVolumesRequest;
class DescribeCachediSCSIVolumesResponse;
class DescribeChapCredentialsRequest;
class DescribeChapCredentialsResponse;
class DescribeFileSystemAssociationsRequest;
class DescribeFileSystemAssociationsResponse;
class DescribeGatewayInformationRequest;
class DescribeGatewayInformationResponse;
class DescribeMaintenanceStartTimeRequest;
class DescribeMaintenanceStartTimeResponse;
class DescribeNFSFileSharesRequest;
class DescribeNFSFileSharesResponse;
class DescribeSMBFileSharesRequest;
class DescribeSMBFileSharesResponse;
class DescribeSMBSettingsRequest;
class DescribeSMBSettingsResponse;
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
class DetachVolumeRequest;
class DetachVolumeResponse;
class DisableGatewayRequest;
class DisableGatewayResponse;
class DisassociateFileSystemRequest;
class DisassociateFileSystemResponse;
class JoinDomainRequest;
class JoinDomainResponse;
class ListAutomaticTapeCreationPoliciesRequest;
class ListAutomaticTapeCreationPoliciesResponse;
class ListFileSharesRequest;
class ListFileSharesResponse;
class ListFileSystemAssociationsRequest;
class ListFileSystemAssociationsResponse;
class ListGatewaysRequest;
class ListGatewaysResponse;
class ListLocalDisksRequest;
class ListLocalDisksResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ListTapePoolsRequest;
class ListTapePoolsResponse;
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
class SetSMBGuestPasswordRequest;
class SetSMBGuestPasswordResponse;
class ShutdownGatewayRequest;
class ShutdownGatewayResponse;
class StartAvailabilityMonitorTestRequest;
class StartAvailabilityMonitorTestResponse;
class StartGatewayRequest;
class StartGatewayResponse;
class UpdateAutomaticTapeCreationPolicyRequest;
class UpdateAutomaticTapeCreationPolicyResponse;
class UpdateBandwidthRateLimitRequest;
class UpdateBandwidthRateLimitResponse;
class UpdateBandwidthRateLimitScheduleRequest;
class UpdateBandwidthRateLimitScheduleResponse;
class UpdateChapCredentialsRequest;
class UpdateChapCredentialsResponse;
class UpdateFileSystemAssociationRequest;
class UpdateFileSystemAssociationResponse;
class UpdateGatewayInformationRequest;
class UpdateGatewayInformationResponse;
class UpdateGatewaySoftwareNowRequest;
class UpdateGatewaySoftwareNowResponse;
class UpdateMaintenanceStartTimeRequest;
class UpdateMaintenanceStartTimeResponse;
class UpdateNFSFileShareRequest;
class UpdateNFSFileShareResponse;
class UpdateSMBFileShareRequest;
class UpdateSMBFileShareResponse;
class UpdateSMBFileShareVisibilityRequest;
class UpdateSMBFileShareVisibilityResponse;
class UpdateSMBSecurityStrategyRequest;
class UpdateSMBSecurityStrategyResponse;
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
    AssignTapePoolResponse * assignTapePool(const AssignTapePoolRequest &request);
    AssociateFileSystemResponse * associateFileSystem(const AssociateFileSystemRequest &request);
    AttachVolumeResponse * attachVolume(const AttachVolumeRequest &request);
    CancelArchivalResponse * cancelArchival(const CancelArchivalRequest &request);
    CancelRetrievalResponse * cancelRetrieval(const CancelRetrievalRequest &request);
    CreateCachediSCSIVolumeResponse * createCachediSCSIVolume(const CreateCachediSCSIVolumeRequest &request);
    CreateNFSFileShareResponse * createNFSFileShare(const CreateNFSFileShareRequest &request);
    CreateSMBFileShareResponse * createSMBFileShare(const CreateSMBFileShareRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateSnapshotFromVolumeRecoveryPointResponse * createSnapshotFromVolumeRecoveryPoint(const CreateSnapshotFromVolumeRecoveryPointRequest &request);
    CreateStorediSCSIVolumeResponse * createStorediSCSIVolume(const CreateStorediSCSIVolumeRequest &request);
    CreateTapePoolResponse * createTapePool(const CreateTapePoolRequest &request);
    CreateTapeWithBarcodeResponse * createTapeWithBarcode(const CreateTapeWithBarcodeRequest &request);
    CreateTapesResponse * createTapes(const CreateTapesRequest &request);
    DeleteAutomaticTapeCreationPolicyResponse * deleteAutomaticTapeCreationPolicy(const DeleteAutomaticTapeCreationPolicyRequest &request);
    DeleteBandwidthRateLimitResponse * deleteBandwidthRateLimit(const DeleteBandwidthRateLimitRequest &request);
    DeleteChapCredentialsResponse * deleteChapCredentials(const DeleteChapCredentialsRequest &request);
    DeleteFileShareResponse * deleteFileShare(const DeleteFileShareRequest &request);
    DeleteGatewayResponse * deleteGateway(const DeleteGatewayRequest &request);
    DeleteSnapshotScheduleResponse * deleteSnapshotSchedule(const DeleteSnapshotScheduleRequest &request);
    DeleteTapeResponse * deleteTape(const DeleteTapeRequest &request);
    DeleteTapeArchiveResponse * deleteTapeArchive(const DeleteTapeArchiveRequest &request);
    DeleteTapePoolResponse * deleteTapePool(const DeleteTapePoolRequest &request);
    DeleteVolumeResponse * deleteVolume(const DeleteVolumeRequest &request);
    DescribeAvailabilityMonitorTestResponse * describeAvailabilityMonitorTest(const DescribeAvailabilityMonitorTestRequest &request);
    DescribeBandwidthRateLimitResponse * describeBandwidthRateLimit(const DescribeBandwidthRateLimitRequest &request);
    DescribeBandwidthRateLimitScheduleResponse * describeBandwidthRateLimitSchedule(const DescribeBandwidthRateLimitScheduleRequest &request);
    DescribeCacheResponse * describeCache(const DescribeCacheRequest &request);
    DescribeCachediSCSIVolumesResponse * describeCachediSCSIVolumes(const DescribeCachediSCSIVolumesRequest &request);
    DescribeChapCredentialsResponse * describeChapCredentials(const DescribeChapCredentialsRequest &request);
    DescribeFileSystemAssociationsResponse * describeFileSystemAssociations(const DescribeFileSystemAssociationsRequest &request);
    DescribeGatewayInformationResponse * describeGatewayInformation(const DescribeGatewayInformationRequest &request);
    DescribeMaintenanceStartTimeResponse * describeMaintenanceStartTime(const DescribeMaintenanceStartTimeRequest &request);
    DescribeNFSFileSharesResponse * describeNFSFileShares(const DescribeNFSFileSharesRequest &request);
    DescribeSMBFileSharesResponse * describeSMBFileShares(const DescribeSMBFileSharesRequest &request);
    DescribeSMBSettingsResponse * describeSMBSettings(const DescribeSMBSettingsRequest &request);
    DescribeSnapshotScheduleResponse * describeSnapshotSchedule(const DescribeSnapshotScheduleRequest &request);
    DescribeStorediSCSIVolumesResponse * describeStorediSCSIVolumes(const DescribeStorediSCSIVolumesRequest &request);
    DescribeTapeArchivesResponse * describeTapeArchives(const DescribeTapeArchivesRequest &request);
    DescribeTapeRecoveryPointsResponse * describeTapeRecoveryPoints(const DescribeTapeRecoveryPointsRequest &request);
    DescribeTapesResponse * describeTapes(const DescribeTapesRequest &request);
    DescribeUploadBufferResponse * describeUploadBuffer(const DescribeUploadBufferRequest &request);
    DescribeVTLDevicesResponse * describeVTLDevices(const DescribeVTLDevicesRequest &request);
    DescribeWorkingStorageResponse * describeWorkingStorage(const DescribeWorkingStorageRequest &request);
    DetachVolumeResponse * detachVolume(const DetachVolumeRequest &request);
    DisableGatewayResponse * disableGateway(const DisableGatewayRequest &request);
    DisassociateFileSystemResponse * disassociateFileSystem(const DisassociateFileSystemRequest &request);
    JoinDomainResponse * joinDomain(const JoinDomainRequest &request);
    ListAutomaticTapeCreationPoliciesResponse * listAutomaticTapeCreationPolicies(const ListAutomaticTapeCreationPoliciesRequest &request);
    ListFileSharesResponse * listFileShares(const ListFileSharesRequest &request);
    ListFileSystemAssociationsResponse * listFileSystemAssociations(const ListFileSystemAssociationsRequest &request);
    ListGatewaysResponse * listGateways(const ListGatewaysRequest &request);
    ListLocalDisksResponse * listLocalDisks(const ListLocalDisksRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ListTapePoolsResponse * listTapePools(const ListTapePoolsRequest &request);
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
    SetSMBGuestPasswordResponse * setSMBGuestPassword(const SetSMBGuestPasswordRequest &request);
    ShutdownGatewayResponse * shutdownGateway(const ShutdownGatewayRequest &request);
    StartAvailabilityMonitorTestResponse * startAvailabilityMonitorTest(const StartAvailabilityMonitorTestRequest &request);
    StartGatewayResponse * startGateway(const StartGatewayRequest &request);
    UpdateAutomaticTapeCreationPolicyResponse * updateAutomaticTapeCreationPolicy(const UpdateAutomaticTapeCreationPolicyRequest &request);
    UpdateBandwidthRateLimitResponse * updateBandwidthRateLimit(const UpdateBandwidthRateLimitRequest &request);
    UpdateBandwidthRateLimitScheduleResponse * updateBandwidthRateLimitSchedule(const UpdateBandwidthRateLimitScheduleRequest &request);
    UpdateChapCredentialsResponse * updateChapCredentials(const UpdateChapCredentialsRequest &request);
    UpdateFileSystemAssociationResponse * updateFileSystemAssociation(const UpdateFileSystemAssociationRequest &request);
    UpdateGatewayInformationResponse * updateGatewayInformation(const UpdateGatewayInformationRequest &request);
    UpdateGatewaySoftwareNowResponse * updateGatewaySoftwareNow(const UpdateGatewaySoftwareNowRequest &request);
    UpdateMaintenanceStartTimeResponse * updateMaintenanceStartTime(const UpdateMaintenanceStartTimeRequest &request);
    UpdateNFSFileShareResponse * updateNFSFileShare(const UpdateNFSFileShareRequest &request);
    UpdateSMBFileShareResponse * updateSMBFileShare(const UpdateSMBFileShareRequest &request);
    UpdateSMBFileShareVisibilityResponse * updateSMBFileShareVisibility(const UpdateSMBFileShareVisibilityRequest &request);
    UpdateSMBSecurityStrategyResponse * updateSMBSecurityStrategy(const UpdateSMBSecurityStrategyRequest &request);
    UpdateSnapshotScheduleResponse * updateSnapshotSchedule(const UpdateSnapshotScheduleRequest &request);
    UpdateVTLDeviceTypeResponse * updateVTLDeviceType(const UpdateVTLDeviceTypeRequest &request);

private:
    Q_DECLARE_PRIVATE(StorageGatewayClient)
    Q_DISABLE_COPY(StorageGatewayClient)

};

} // namespace StorageGateway
} // namespace QtAws

#endif
