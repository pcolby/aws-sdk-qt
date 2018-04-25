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

#ifndef QTAWS_KINESISANALYTICSCLIENT_H
#define QTAWS_KINESISANALYTICSCLIENT_H

#include "core/awsabstractclient.h"

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
class StartApplicationRequest;
class StartApplicationResponse;
class StopApplicationRequest;
class StopApplicationResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;

class QTAWS_EXPORT KinesisAnalyticsClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    KinesisAnalyticsClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    KinesisAnalyticsClient(
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
    StartApplicationResponse * startApplication(const StartApplicationRequest &request);
    StopApplicationResponse * stopApplication(const StopApplicationRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);

private:
    Q_DECLARE_PRIVATE(KinesisAnalyticsClient)
    Q_DISABLE_COPY(KinesisAnalyticsClient)

};

} // namespace KinesisAnalytics
} // namespace QtAws

#endif
