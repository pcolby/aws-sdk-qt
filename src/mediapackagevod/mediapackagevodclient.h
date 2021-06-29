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

    MediaPackageVodClient(
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

protected:
    /// @cond internal
    MediaPackageVodClientPrivate * const d_ptr; ///< Internal d-pointer.
    MediaPackageVodClient(MediaPackageVodClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(MediaPackageVodClient)
    Q_DISABLE_COPY(MediaPackageVodClient)

};

} // namespace MediaPackageVod
} // namespace QtAws

#endif
