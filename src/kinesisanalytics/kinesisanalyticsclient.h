// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_KINESISANALYTICSCLIENT_H
#define QTAWS_KINESISANALYTICSCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawskinesisanalyticsglobal.h"

class QNetworkReply;

namespace QtAws {
namespace KinesisAnalytics {

class KinesisAnalyticsClientPrivate;
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
class CreateApplicationRequest;
class CreateApplicationResponse;
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
class DescribeApplicationRequest;
class DescribeApplicationResponse;
class DiscoverInputSchemaRequest;
class DiscoverInputSchemaResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
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

class QTAWSKINESISANALYTICS_EXPORT KinesisAnalyticsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisAnalyticsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit KinesisAnalyticsClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AddApplicationCloudWatchLoggingOptionResponse * addApplicationCloudWatchLoggingOption(const AddApplicationCloudWatchLoggingOptionRequest &request);
    AddApplicationInputResponse * addApplicationInput(const AddApplicationInputRequest &request);
    AddApplicationInputProcessingConfigurationResponse * addApplicationInputProcessingConfiguration(const AddApplicationInputProcessingConfigurationRequest &request);
    AddApplicationOutputResponse * addApplicationOutput(const AddApplicationOutputRequest &request);
    AddApplicationReferenceDataSourceResponse * addApplicationReferenceDataSource(const AddApplicationReferenceDataSourceRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteApplicationCloudWatchLoggingOptionResponse * deleteApplicationCloudWatchLoggingOption(const DeleteApplicationCloudWatchLoggingOptionRequest &request);
    DeleteApplicationInputProcessingConfigurationResponse * deleteApplicationInputProcessingConfiguration(const DeleteApplicationInputProcessingConfigurationRequest &request);
    DeleteApplicationOutputResponse * deleteApplicationOutput(const DeleteApplicationOutputRequest &request);
    DeleteApplicationReferenceDataSourceResponse * deleteApplicationReferenceDataSource(const DeleteApplicationReferenceDataSourceRequest &request);
    DescribeApplicationResponse * describeApplication(const DescribeApplicationRequest &request);
    DiscoverInputSchemaResponse * discoverInputSchema(const DiscoverInputSchemaRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartApplicationResponse * startApplication(const StartApplicationRequest &request);
    StopApplicationResponse * stopApplication(const StopApplicationRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisAnalyticsClient)
    Q_DISABLE_COPY(KinesisAnalyticsClient)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
