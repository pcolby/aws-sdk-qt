// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MEDIAPACKAGEVODCLIENT_H
#define QTAWS_MEDIAPACKAGEVODCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsmediapackagevodglobal.h"

class QNetworkReply;

namespace QtAws {
namespace MediaPackageVod {

class MediaPackageVodClientPrivate;
class ConfigureLogsRequest;
class ConfigureLogsResponse;
class CreateAssetRequest;
class CreateAssetResponse;
class CreatePackagingConfigurationRequest;
class CreatePackagingConfigurationResponse;
class CreatePackagingGroupRequest;
class CreatePackagingGroupResponse;
class DeleteAssetRequest;
class DeleteAssetResponse;
class DeletePackagingConfigurationRequest;
class DeletePackagingConfigurationResponse;
class DeletePackagingGroupRequest;
class DeletePackagingGroupResponse;
class DescribeAssetRequest;
class DescribeAssetResponse;
class DescribePackagingConfigurationRequest;
class DescribePackagingConfigurationResponse;
class DescribePackagingGroupRequest;
class DescribePackagingGroupResponse;
class ListAssetsRequest;
class ListAssetsResponse;
class ListPackagingConfigurationsRequest;
class ListPackagingConfigurationsResponse;
class ListPackagingGroupsRequest;
class ListPackagingGroupsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdatePackagingGroupRequest;
class UpdatePackagingGroupResponse;

class QTAWSMEDIAPACKAGEVOD_EXPORT MediaPackageVodClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    MediaPackageVodClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit MediaPackageVodClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    ConfigureLogsResponse * configureLogs(const ConfigureLogsRequest &request);
    CreateAssetResponse * createAsset(const CreateAssetRequest &request);
    CreatePackagingConfigurationResponse * createPackagingConfiguration(const CreatePackagingConfigurationRequest &request);
    CreatePackagingGroupResponse * createPackagingGroup(const CreatePackagingGroupRequest &request);
    DeleteAssetResponse * deleteAsset(const DeleteAssetRequest &request);
    DeletePackagingConfigurationResponse * deletePackagingConfiguration(const DeletePackagingConfigurationRequest &request);
    DeletePackagingGroupResponse * deletePackagingGroup(const DeletePackagingGroupRequest &request);
    DescribeAssetResponse * describeAsset(const DescribeAssetRequest &request);
    DescribePackagingConfigurationResponse * describePackagingConfiguration(const DescribePackagingConfigurationRequest &request);
    DescribePackagingGroupResponse * describePackagingGroup(const DescribePackagingGroupRequest &request);
    ListAssetsResponse * listAssets(const ListAssetsRequest &request);
    ListPackagingConfigurationsResponse * listPackagingConfigurations(const ListPackagingConfigurationsRequest &request);
    ListPackagingGroupsResponse * listPackagingGroups(const ListPackagingGroupsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdatePackagingGroupResponse * updatePackagingGroup(const UpdatePackagingGroupRequest &request);

private:
    Q_DECLARE_PRIVATE(MediaPackageVodClient)
    Q_DISABLE_COPY(MediaPackageVodClient)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
