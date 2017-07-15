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

#ifndef QTAWS_EFSCLIENT_H
#define QTAWS_EFSCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace EFS {

class EfsClientPrivate;

class QTAWS_EXPORT EfsClient : public AwsAbstractClient {
    Q_OBJECT

public:
    EfsClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    EfsClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
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
} // namespace AWS

#endif
