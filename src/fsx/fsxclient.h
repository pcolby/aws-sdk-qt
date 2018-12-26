/*
    Copyright 2013-2018 Paul Colby

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

class QNetworkReply;

namespace QtAws {
namespace FSx {

class FSxClientPrivate;
class CreateBackupRequest;
class CreateBackupResponse;
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
class DescribeFileSystemsRequest;
class DescribeFileSystemsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFileSystemRequest;
class UpdateFileSystemResponse;

class QTAWS_EXPORT FSxClient : public QtAws::Core::AwsAbstractClient {
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
    CreateBackupResponse * createBackup(const CreateBackupRequest &request);
    CreateFileSystemResponse * createFileSystem(const CreateFileSystemRequest &request);
    CreateFileSystemFromBackupResponse * createFileSystemFromBackup(const CreateFileSystemFromBackupRequest &request);
    DeleteBackupResponse * deleteBackup(const DeleteBackupRequest &request);
    DeleteFileSystemResponse * deleteFileSystem(const DeleteFileSystemRequest &request);
    DescribeBackupsResponse * describeBackups(const DescribeBackupsRequest &request);
    DescribeFileSystemsResponse * describeFileSystems(const DescribeFileSystemsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFileSystemResponse * updateFileSystem(const UpdateFileSystemRequest &request);

private:
    Q_DECLARE_PRIVATE(FSxClient)
    Q_DISABLE_COPY(FSxClient)

};

} // namespace FSx
} // namespace QtAws

#endif
