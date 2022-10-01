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

#ifndef QTAWS_FSXCLIENT_H
#define QTAWS_FSXCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsfsxglobal.h"

class QNetworkReply;

namespace QtAws {
namespace FSx {

class FSxClientPrivate;
class AssociateFileSystemAliasesRequest;
class AssociateFileSystemAliasesResponse;
class CancelDataRepositoryTaskRequest;
class CancelDataRepositoryTaskResponse;
class CopyBackupRequest;
class CopyBackupResponse;
class CreateBackupRequest;
class CreateBackupResponse;
class CreateDataRepositoryAssociationRequest;
class CreateDataRepositoryAssociationResponse;
class CreateDataRepositoryTaskRequest;
class CreateDataRepositoryTaskResponse;
class CreateFileSystemRequest;
class CreateFileSystemResponse;
class CreateFileSystemFromBackupRequest;
class CreateFileSystemFromBackupResponse;
class CreateSnapshotRequest;
class CreateSnapshotResponse;
class CreateStorageVirtualMachineRequest;
class CreateStorageVirtualMachineResponse;
class CreateVolumeRequest;
class CreateVolumeResponse;
class CreateVolumeFromBackupRequest;
class CreateVolumeFromBackupResponse;
class DeleteBackupRequest;
class DeleteBackupResponse;
class DeleteDataRepositoryAssociationRequest;
class DeleteDataRepositoryAssociationResponse;
class DeleteFileSystemRequest;
class DeleteFileSystemResponse;
class DeleteSnapshotRequest;
class DeleteSnapshotResponse;
class DeleteStorageVirtualMachineRequest;
class DeleteStorageVirtualMachineResponse;
class DeleteVolumeRequest;
class DeleteVolumeResponse;
class DescribeBackupsRequest;
class DescribeBackupsResponse;
class DescribeDataRepositoryAssociationsRequest;
class DescribeDataRepositoryAssociationsResponse;
class DescribeDataRepositoryTasksRequest;
class DescribeDataRepositoryTasksResponse;
class DescribeFileSystemAliasesRequest;
class DescribeFileSystemAliasesResponse;
class DescribeFileSystemsRequest;
class DescribeFileSystemsResponse;
class DescribeSnapshotsRequest;
class DescribeSnapshotsResponse;
class DescribeStorageVirtualMachinesRequest;
class DescribeStorageVirtualMachinesResponse;
class DescribeVolumesRequest;
class DescribeVolumesResponse;
class DisassociateFileSystemAliasesRequest;
class DisassociateFileSystemAliasesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ReleaseFileSystemNfsV3LocksRequest;
class ReleaseFileSystemNfsV3LocksResponse;
class RestoreVolumeFromSnapshotRequest;
class RestoreVolumeFromSnapshotResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDataRepositoryAssociationRequest;
class UpdateDataRepositoryAssociationResponse;
class UpdateFileSystemRequest;
class UpdateFileSystemResponse;
class UpdateSnapshotRequest;
class UpdateSnapshotResponse;
class UpdateStorageVirtualMachineRequest;
class UpdateStorageVirtualMachineResponse;
class UpdateVolumeRequest;
class UpdateVolumeResponse;

class QTAWSFSX_EXPORT FSxClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FSxClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit FSxClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateFileSystemAliasesResponse * associateFileSystemAliases(const AssociateFileSystemAliasesRequest &request);
    CancelDataRepositoryTaskResponse * cancelDataRepositoryTask(const CancelDataRepositoryTaskRequest &request);
    CopyBackupResponse * copyBackup(const CopyBackupRequest &request);
    CreateBackupResponse * createBackup(const CreateBackupRequest &request);
    CreateDataRepositoryAssociationResponse * createDataRepositoryAssociation(const CreateDataRepositoryAssociationRequest &request);
    CreateDataRepositoryTaskResponse * createDataRepositoryTask(const CreateDataRepositoryTaskRequest &request);
    CreateFileSystemResponse * createFileSystem(const CreateFileSystemRequest &request);
    CreateFileSystemFromBackupResponse * createFileSystemFromBackup(const CreateFileSystemFromBackupRequest &request);
    CreateSnapshotResponse * createSnapshot(const CreateSnapshotRequest &request);
    CreateStorageVirtualMachineResponse * createStorageVirtualMachine(const CreateStorageVirtualMachineRequest &request);
    CreateVolumeResponse * createVolume(const CreateVolumeRequest &request);
    CreateVolumeFromBackupResponse * createVolumeFromBackup(const CreateVolumeFromBackupRequest &request);
    DeleteBackupResponse * deleteBackup(const DeleteBackupRequest &request);
    DeleteDataRepositoryAssociationResponse * deleteDataRepositoryAssociation(const DeleteDataRepositoryAssociationRequest &request);
    DeleteFileSystemResponse * deleteFileSystem(const DeleteFileSystemRequest &request);
    DeleteSnapshotResponse * deleteSnapshot(const DeleteSnapshotRequest &request);
    DeleteStorageVirtualMachineResponse * deleteStorageVirtualMachine(const DeleteStorageVirtualMachineRequest &request);
    DeleteVolumeResponse * deleteVolume(const DeleteVolumeRequest &request);
    DescribeBackupsResponse * describeBackups(const DescribeBackupsRequest &request);
    DescribeDataRepositoryAssociationsResponse * describeDataRepositoryAssociations(const DescribeDataRepositoryAssociationsRequest &request);
    DescribeDataRepositoryTasksResponse * describeDataRepositoryTasks(const DescribeDataRepositoryTasksRequest &request);
    DescribeFileSystemAliasesResponse * describeFileSystemAliases(const DescribeFileSystemAliasesRequest &request);
    DescribeFileSystemsResponse * describeFileSystems(const DescribeFileSystemsRequest &request);
    DescribeSnapshotsResponse * describeSnapshots(const DescribeSnapshotsRequest &request);
    DescribeStorageVirtualMachinesResponse * describeStorageVirtualMachines(const DescribeStorageVirtualMachinesRequest &request);
    DescribeVolumesResponse * describeVolumes(const DescribeVolumesRequest &request);
    DisassociateFileSystemAliasesResponse * disassociateFileSystemAliases(const DisassociateFileSystemAliasesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ReleaseFileSystemNfsV3LocksResponse * releaseFileSystemNfsV3Locks(const ReleaseFileSystemNfsV3LocksRequest &request);
    RestoreVolumeFromSnapshotResponse * restoreVolumeFromSnapshot(const RestoreVolumeFromSnapshotRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDataRepositoryAssociationResponse * updateDataRepositoryAssociation(const UpdateDataRepositoryAssociationRequest &request);
    UpdateFileSystemResponse * updateFileSystem(const UpdateFileSystemRequest &request);
    UpdateSnapshotResponse * updateSnapshot(const UpdateSnapshotRequest &request);
    UpdateStorageVirtualMachineResponse * updateStorageVirtualMachine(const UpdateStorageVirtualMachineRequest &request);
    UpdateVolumeResponse * updateVolume(const UpdateVolumeRequest &request);

private:
    Q_DECLARE_PRIVATE(FSxClient)
    Q_DISABLE_COPY(FSxClient)

};

} // namespace FSx
} // namespace QtAws

#endif
