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

#ifndef QTAWS_EFSCLIENT_H
#define QTAWS_EFSCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace EFS {

class EfsClientPrivate;
class CreateFileSystemRequest;
class CreateFileSystemResponse;
class CreateMountTargetRequest;
class CreateMountTargetResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class DeleteFileSystemRequest;
class DeleteFileSystemResponse;
class DeleteMountTargetRequest;
class DeleteMountTargetResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DescribeFileSystemsRequest;
class DescribeFileSystemsResponse;
class DescribeMountTargetSecurityGroupsRequest;
class DescribeMountTargetSecurityGroupsResponse;
class DescribeMountTargetsRequest;
class DescribeMountTargetsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class ModifyMountTargetSecurityGroupsRequest;
class ModifyMountTargetSecurityGroupsResponse;

class QTAWS_EXPORT EfsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    EfsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EfsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateFileSystemResponse * createFileSystem(const CreateFileSystemRequest &request);
    CreateMountTargetResponse * createMountTarget(const CreateMountTargetRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteFileSystemResponse * deleteFileSystem(const DeleteFileSystemRequest &request);
    DeleteMountTargetResponse * deleteMountTarget(const DeleteMountTargetRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeFileSystemsResponse * describeFileSystems(const DescribeFileSystemsRequest &request);
    DescribeMountTargetSecurityGroupsResponse * describeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest &request);
    DescribeMountTargetsResponse * describeMountTargets(const DescribeMountTargetsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    ModifyMountTargetSecurityGroupsResponse * modifyMountTargetSecurityGroups(const ModifyMountTargetSecurityGroupsRequest &request);

private:
    Q_DECLARE_PRIVATE(EfsClient)
    Q_DISABLE_COPY(EfsClient)

};

} // namespace EFS
} // namespace QtAws

#endif
