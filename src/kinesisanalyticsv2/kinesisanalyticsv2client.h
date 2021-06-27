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

#ifndef QTAWS_KINESISANALYTICSV2CLIENT_H
#define QTAWS_KINESISANALYTICSV2CLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace KinesisAnalyticsV2 {

class KinesisAnalyticsV2ClientPrivate;
class AddApplicationCloudWatchLoggingOptionRequest;
class AddApplicationCloudWatchLoggingOptionResponse;
class AddApplicationInputRequest;
class AddApplicationInputResponse;
class AddApplicationInputProcessingConfigurationRequest;
class AddApplicationInputProcessingConfigurationResponse;
class AddApplicationOutputRequest;
class AddApplicationOutputResponse;
class AddApplicationReferenceDataSourceRequest;
class AddApplicationReferenceDataSourceResponse;
class AddApplicationVpcConfigurationRequest;
class AddApplicationVpcConfigurationResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateApplicationPresignedUrlRequest;
class CreateApplicationPresignedUrlResponse;
class CreateApplicationSnapshotRequest;
class CreateApplicationSnapshotResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteApplicationCloudWatchLoggingOptionRequest;
class DeleteApplicationCloudWatchLoggingOptionResponse;
class DeleteApplicationInputProcessingConfigurationRequest;
class DeleteApplicationInputProcessingConfigurationResponse;
class DeleteApplicationOutputRequest;
class DeleteApplicationOutputResponse;
class DeleteApplicationReferenceDataSourceRequest;
class DeleteApplicationReferenceDataSourceResponse;
class DeleteApplicationSnapshotRequest;
class DeleteApplicationSnapshotResponse;
class DeleteApplicationVpcConfigurationRequest;
class DeleteApplicationVpcConfigurationResponse;
class DescribeApplicationRequest;
class DescribeApplicationResponse;
class DescribeApplicationSnapshotRequest;
class DescribeApplicationSnapshotResponse;
class DescribeApplicationVersionRequest;
class DescribeApplicationVersionResponse;
class DiscoverInputSchemaRequest;
class DiscoverInputSchemaResponse;
class ListApplicationSnapshotsRequest;
class ListApplicationSnapshotsResponse;
class ListApplicationVersionsRequest;
class ListApplicationVersionsResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RollbackApplicationRequest;
class RollbackApplicationResponse;
class StartApplicationRequest;
class StartApplicationResponse;
class StopApplicationRequest;
class StopApplicationResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;
class UpdateApplicationMaintenanceConfigurationRequest;
class UpdateApplicationMaintenanceConfigurationResponse;

class QTAWS_EXPORT KinesisAnalyticsV2Client : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisAnalyticsV2Client(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KinesisAnalyticsV2Client(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddApplicationCloudWatchLoggingOptionResponse * addApplicationCloudWatchLoggingOption(const AddApplicationCloudWatchLoggingOptionRequest &request);
    AddApplicationInputResponse * addApplicationInput(const AddApplicationInputRequest &request);
    AddApplicationInputProcessingConfigurationResponse * addApplicationInputProcessingConfiguration(const AddApplicationInputProcessingConfigurationRequest &request);
    AddApplicationOutputResponse * addApplicationOutput(const AddApplicationOutputRequest &request);
    AddApplicationReferenceDataSourceResponse * addApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest &request);
    AddApplicationVpcConfigurationResponse * addApplicationVpcConfiguration(const AddApplicationVpcConfigurationRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateApplicationPresignedUrlResponse * createApplicationPresignedUrl(const CreateApplicationPresignedUrlRequest &request);
    CreateApplicationSnapshotResponse * createApplicationSnapshot(const CreateApplicationSnapshotRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteApplicationCloudWatchLoggingOptionResponse * deleteApplicationCloudWatchLoggingOption(const DeleteApplicationCloudWatchLoggingOptionRequest &request);
    DeleteApplicationInputProcessingConfigurationResponse * deleteApplicationInputProcessingConfiguration(const DeleteApplicationInputProcessingConfigurationRequest &request);
    DeleteApplicationOutputResponse * deleteApplicationOutput(const DeleteApplicationOutputRequest &request);
    DeleteApplicationReferenceDataSourceResponse * deleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest &request);
    DeleteApplicationSnapshotResponse * deleteApplicationSnapshot(const DeleteApplicationSnapshotRequest &request);
    DeleteApplicationVpcConfigurationResponse * deleteApplicationVpcConfiguration(const DeleteApplicationVpcConfigurationRequest &request);
    DescribeApplicationResponse * describeApplication(const DescribeApplicationRequest &request);
    DescribeApplicationSnapshotResponse * describeApplicationSnapshot(const DescribeApplicationSnapshotRequest &request);
    DescribeApplicationVersionResponse * describeApplicationVersion(const DescribeApplicationVersionRequest &request);
    DiscoverInputSchemaResponse * discoverInputSchema(const DiscoverInputSchemaRequest &request);
    ListApplicationSnapshotsResponse * listApplicationSnapshots(const ListApplicationSnapshotsRequest &request);
    ListApplicationVersionsResponse * listApplicationVersions(const ListApplicationVersionsRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RollbackApplicationResponse * rollbackApplication(const RollbackApplicationRequest &request);
    StartApplicationResponse * startApplication(const StartApplicationRequest &request);
    StopApplicationResponse * stopApplication(const StopApplicationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateApplicationMaintenanceConfigurationResponse * updateApplicationMaintenanceConfiguration(const UpdateApplicationMaintenanceConfigurationRequest &request);

protected:
    /// @cond internal
    KinesisAnalyticsV2ClientPrivate * const d_ptr; ///< Internal d-pointer.
    KinesisAnalyticsV2Client(KinesisAnalyticsV2ClientPrivate * const d);
    /// @endcond

private:
    Q_DECLARE_PRIVATE(KinesisAnalyticsV2Client)
    Q_DISABLE_COPY(KinesisAnalyticsV2Client)

};

} // namespace KinesisAnalyticsV2
} // namespace QtAws

#endif
