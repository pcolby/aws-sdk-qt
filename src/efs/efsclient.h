// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_EFSCLIENT_H
#define QTAWS_EFSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsefsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace Efs {

class EfsClientPrivate;
class CreateAccessPointRequest;
class CreateAccessPointResponse;
class CreateFileSystemRequest;
class CreateFileSystemResponse;
class CreateMountTargetRequest;
class CreateMountTargetResponse;
class CreateReplicationConfigurationRequest;
class CreateReplicationConfigurationResponse;
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
class DeleteReplicationConfigurationRequest;
class DeleteReplicationConfigurationResponse;
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
class DescribeReplicationConfigurationsRequest;
class DescribeReplicationConfigurationsResponse;
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

    explicit EfsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateAccessPointResponse * createAccessPoint(const CreateAccessPointRequest &request);
    CreateFileSystemResponse * createFileSystem(const CreateFileSystemRequest &request);
    CreateMountTargetResponse * createMountTarget(const CreateMountTargetRequest &request);
    CreateReplicationConfigurationResponse * createReplicationConfiguration(const CreateReplicationConfigurationRequest &request);
    CreateTagsResponse * createTags(const CreateTagsRequest &request);
    DeleteAccessPointResponse * deleteAccessPoint(const DeleteAccessPointRequest &request);
    DeleteFileSystemResponse * deleteFileSystem(const DeleteFileSystemRequest &request);
    DeleteFileSystemPolicyResponse * deleteFileSystemPolicy(const DeleteFileSystemPolicyRequest &request);
    DeleteMountTargetResponse * deleteMountTarget(const DeleteMountTargetRequest &request);
    DeleteReplicationConfigurationResponse * deleteReplicationConfiguration(const DeleteReplicationConfigurationRequest &request);
    DeleteTagsResponse * deleteTags(const DeleteTagsRequest &request);
    DescribeAccessPointsResponse * describeAccessPoints(const DescribeAccessPointsRequest &request);
    DescribeAccountPreferencesResponse * describeAccountPreferences(const DescribeAccountPreferencesRequest &request);
    DescribeBackupPolicyResponse * describeBackupPolicy(const DescribeBackupPolicyRequest &request);
    DescribeFileSystemPolicyResponse * describeFileSystemPolicy(const DescribeFileSystemPolicyRequest &request);
    DescribeFileSystemsResponse * describeFileSystems(const DescribeFileSystemsRequest &request);
    DescribeLifecycleConfigurationResponse * describeLifecycleConfiguration(const DescribeLifecycleConfigurationRequest &request);
    DescribeMountTargetSecurityGroupsResponse * describeMountTargetSecurityGroups(const DescribeMountTargetSecurityGroupsRequest &request);
    DescribeMountTargetsResponse * describeMountTargets(const DescribeMountTargetsRequest &request);
    DescribeReplicationConfigurationsResponse * describeReplicationConfigurations(const DescribeReplicationConfigurationsRequest &request);
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

private:
    Q_DECLARE_PRIVATE(EfsClient)
    Q_DISABLE_COPY(EfsClient)

};

} // namespace Efs
} // namespace QtAws

#endif
