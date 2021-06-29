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
class CreateDataRepositoryTaskRequest;
class CreateDataRepositoryTaskResponse;
class CreateFileSystemRequest;
class CreateFileSystemResponse;
class CreateFileSystemFromBackupRequest;
class CreateFileSystemFromBackupResponse;
class DeleteBackupRequest;
class DeleteBackupResponse;
class DeleteFileSystemRequest;
class DeleteFileSystemResponse;
class DescribeBackupsRequest;
class DescribeBackupsResponse;
class DescribeDataRepositoryTasksRequest;
class DescribeDataRepositoryTasksResponse;
class DescribeFileSystemAliasesRequest;
class DescribeFileSystemAliasesResponse;
class DescribeFileSystemsRequest;
class DescribeFileSystemsResponse;
class DisassociateFileSystemAliasesRequest;
class DisassociateFileSystemAliasesResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFileSystemRequest;
class UpdateFileSystemResponse;

class QTAWSFSX_EXPORT FSxClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    FSxClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    FSxClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AssociateFileSystemAliasesResponse * associateFileSystemAliases(const AssociateFileSystemAliasesRequest &request);
    CancelDataRepositoryTaskResponse * cancelDataRepositoryTask(const CancelDataRepositoryTaskRequest &request);
    CopyBackupResponse * copyBackup(const CopyBackupRequest &request);
    CreateBackupResponse * createBackup(const CreateBackupRequest &request);
    CreateDataRepositoryTaskResponse * createDataRepositoryTask(const CreateDataRepositoryTaskRequest &request);
    CreateFileSystemResponse * createFileSystem(const CreateFileSystemRequest &request);
    CreateFileSystemFromBackupResponse * createFileSystemFromBackup(const CreateFileSystemFromBackupRequest &request);
    DeleteBackupResponse * deleteBackup(const DeleteBackupRequest &request);
    DeleteFileSystemResponse * deleteFileSystem(const DeleteFileSystemRequest &request);
    DescribeBackupsResponse * describeBackups(const DescribeBackupsRequest &request);
    DescribeDataRepositoryTasksResponse * describeDataRepositoryTasks(const DescribeDataRepositoryTasksRequest &request);
    DescribeFileSystemAliasesResponse * describeFileSystemAliases(const DescribeFileSystemAliasesRequest &request);
    DescribeFileSystemsResponse * describeFileSystems(const DescribeFileSystemsRequest &request);
    DisassociateFileSystemAliasesResponse * disassociateFileSystemAliases(const DisassociateFileSystemAliasesRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFileSystemResponse * updateFileSystem(const UpdateFileSystemRequest &request);

protected:
    /// @cond internal
    FSxClientPrivate * const d_ptr; ///< Internal d-pointer.
    FSxClient(FSxClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(FSxClient)
    Q_DISABLE_COPY(FSxClient)

};

} // namespace FSx
} // namespace QtAws

#endif
