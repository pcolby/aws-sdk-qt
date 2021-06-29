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

#ifndef QTAWS_EFSCLIENT_H
#define QTAWS_EFSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsefsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace EFS {

class EfsClientPrivate;
class CreateAccessPointRequest;
class CreateAccessPointResponse;
class CreateFileSystemRequest;
class CreateFileSystemResponse;
class CreateMountTargetRequest;
class CreateMountTargetResponse;
class CreateTagsRequest;
class CreateTagsResponse;
class DeleteAccessPointRequest;
class DeleteAccessPointResponse;
class DeleteFileSystemRequest;
class DeleteFileSystemResponse;
class DeleteFileSystemPolicyRequest;
class DeleteFileSystemPolicyResponse;
class DeleteMountTargetRequest;
class DeleteMountTargetResponse;
class DeleteTagsRequest;
class DeleteTagsResponse;
class DescribeAccessPointsRequest;
class DescribeAccessPointsResponse;
class DescribeAccountPreferencesRequest;
class DescribeAccountPreferencesResponse;
class DescribeBackupPolicyRequest;
class DescribeBackupPolicyResponse;
class DescribeFileSystemPolicyRequest;
class DescribeFileSystemPolicyResponse;
class DescribeFileSystemsRequest;
class DescribeFileSystemsResponse;
class DescribeLifecycleConfigurationRequest;
class DescribeLifecycleConfigurationResponse;
class DescribeMountTargetSecurityGroupsRequest;
class DescribeMountTargetSecurityGroupsResponse;
class DescribeMountTargetsRequest;
class DescribeMountTargetsResponse;
class DescribeTagsRequest;
class DescribeTagsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class ModifyMountTargetSecurityGroupsRequest;
class ModifyMountTargetSecurityGroupsResponse;
class PutAccountPreferencesRequest;
class PutAccountPreferencesResponse;
class PutBackupPolicyRequest;
class PutBackupPolicyResponse;
class PutFileSystemPolicyRequest;
class PutFileSystemPolicyResponse;
class PutLifecycleConfigurationRequest;
class PutLifecycleConfigurationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateFileSystemRequest;
class UpdateFileSystemResponse;

class QTAWSEFS_EXPORT EfsClient : public QtAws::Core::AwsAbstractClient {
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
    CreateAccessPointResponse * createAccessPoint(const CreateAccessPointRequest &request);
    CreateFileSystemResponse * createFileSystem(const CreateFileSystemRequest &request);
    CreateMountTargetResponse * createMountTarget(const CreateMountTargetRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteAccessPointResponse * deleteAccessPoint(const DeleteAccessPointRequest &request);
    DeleteFileSystemResponse * deleteFileSystem(const DeleteFileSystemRequest &request);
    DeleteFileSystemPolicyResponse * deleteFileSystemPolicy(const DeleteFileSystemPolicyRequest &request);
    DeleteMountTargetResponse * deleteMountTarget(const DeleteMountTargetRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeAccessPointsResponse * describeAccessPoints(const DescribeAccessPointsRequest &request);
    DescribeAccountPreferencesResponse * describeAccountPreferences(const DescribeAccountPreferencesRequest &request);
    DescribeBackupPolicyResponse * describeBackupPolicy(const DescribeBackupPolicyRequest &request);
    DescribeFileSystemPolicyResponse * describeFileSystemPolicy(const DescribeFileSystemPolicyRequest &request);
    DescribeFileSystemsResponse * describeFileSystems(const DescribeFileSystemsRequest &request);
    DescribeLifecycleConfigurationResponse * describeLifecycleConfiguration(const DescribeLifecycleConfigurationRequest &request);
    DescribeMountTargetSecurityGroupsResponse * describeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest &request);
    DescribeMountTargetsResponse * describeMountTargets(const DescribeMountTargetsRequest &request);
    DescribeTagsResponse * describeTags(const DescribeTagsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    ModifyMountTargetSecurityGroupsResponse * modifyMountTargetSecurityGroups(const ModifyMountTargetSecurityGroupsRequest &request);
    PutAccountPreferencesResponse * putAccountPreferences(const PutAccountPreferencesRequest &request);
    PutBackupPolicyResponse * putBackupPolicy(const PutBackupPolicyRequest &request);
    PutFileSystemPolicyResponse * putFileSystemPolicy(const PutFileSystemPolicyRequest &request);
    PutLifecycleConfigurationResponse * putLifecycleConfiguration(const PutLifecycleConfigurationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateFileSystemResponse * updateFileSystem(const UpdateFileSystemRequest &request);

protected:
    /// @cond internal
    EfsClientPrivate * const d_ptr; ///< Internal d-pointer.
    EfsClient(EfsClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(EfsClient)
    Q_DISABLE_COPY(EfsClient)

};

} // namespace EFS
} // namespace QtAws

#endif
