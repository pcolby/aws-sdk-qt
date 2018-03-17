/*
    Copyright 2013-2018 Paul Colby

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

#ifndef QTAWS_ELASTICBEANSTALKCLIENT_H
#define QTAWS_ELASTICBEANSTALKCLIENT_H

#include <QObject>

class QNetworkReply;

namespace AWS {

class AwsAbstractClient;
class AwsAbstractCredentials;

namespace ElasticBeanstalk {

class ElasticBeanstalkClientPrivate;

class QTAWS_EXPORT ElasticBeanstalkClient : public AwsAbstractClient {
    Q_OBJECT

public:
    ElasticBeanstalkClient(
        const AwsRegion::Region region = AwsRegion::InvalidRegion,
        AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElasticBeanstalkClient(
        const QUrl &endpoint, AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    AbortEnvironmentUpdateResponse * abortEnvironmentUpdate(const AbortEnvironmentUpdateRequest &request);
    ApplyEnvironmentManagedActionResponse * applyEnvironmentManagedAction(const ApplyEnvironmentManagedActionRequest &request);
    CheckDNSAvailabilityResponse * checkDNSAvailability(const CheckDNSAvailabilityRequest &request);
    ComposeEnvironmentsResponse * composeEnvironments(const ComposeEnvironmentsRequest &request);
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateApplicationVersionResponse * createApplicationVersion(const CreateApplicationVersionRequest &request);
    CreateConfigurationTemplateResponse * createConfigurationTemplate(const CreateConfigurationTemplateRequest &request);
    CreateEnvironmentResponse * createEnvironment(const CreateEnvironmentRequest &request);
    CreateStorageLocationResponse * createStorageLocation();
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteApplicationVersionResponse * deleteApplicationVersion(const DeleteApplicationVersionRequest &request);
    DeleteConfigurationTemplateResponse * deleteConfigurationTemplate(const DeleteConfigurationTemplateRequest &request);
    DeleteEnvironmentConfigurationResponse * deleteEnvironmentConfiguration(const DeleteEnvironmentConfigurationRequest &request);
    DescribeApplicationVersionsResponse * describeApplicationVersions(const DescribeApplicationVersionsRequest &request);
    DescribeApplicationsResponse * describeApplications(const DescribeApplicationsRequest &request);
    DescribeConfigurationOptionsResponse * describeConfigurationOptions(const DescribeConfigurationOptionsRequest &request);
    DescribeConfigurationSettingsResponse * describeConfigurationSettings(const DescribeConfigurationSettingsRequest &request);
    DescribeEnvironmentHealthResponse * describeEnvironmentHealth(const DescribeEnvironmentHealthRequest &request);
    DescribeEnvironmentManagedActionHistoryResponse * describeEnvironmentManagedActionHistory(const DescribeEnvironmentManagedActionHistoryRequest &request);
    DescribeEnvironmentManagedActionsResponse * describeEnvironmentManagedActions(const DescribeEnvironmentManagedActionsRequest &request);
    DescribeEnvironmentResourcesResponse * describeEnvironmentResources(const DescribeEnvironmentResourcesRequest &request);
    DescribeEnvironmentsResponse * describeEnvironments(const DescribeEnvironmentsRequest &request);
    DescribeEventsResponse * describeEvents(const DescribeEventsRequest &request);
    DescribeInstancesHealthResponse * describeInstancesHealth(const DescribeInstancesHealthRequest &request);
    ListAvailableSolutionStacksResponse * listAvailableSolutionStacks();
    RebuildEnvironmentResponse * rebuildEnvironment(const RebuildEnvironmentRequest &request);
    RequestEnvironmentInfoResponse * requestEnvironmentInfo(const RequestEnvironmentInfoRequest &request);
    RestartAppServerResponse * restartAppServer(const RestartAppServerRequest &request);
    RetrieveEnvironmentInfoResponse * retrieveEnvironmentInfo(const RetrieveEnvironmentInfoRequest &request);
    SwapEnvironmentCNAMEsResponse * swapEnvironmentCNAMEs(const SwapEnvironmentCNAMEsRequest &request);
    TerminateEnvironmentResponse * terminateEnvironment(const TerminateEnvironmentRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateApplicationVersionResponse * updateApplicationVersion(const UpdateApplicationVersionRequest &request);
    UpdateConfigurationTemplateResponse * updateConfigurationTemplate(const UpdateConfigurationTemplateRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);
    ValidateConfigurationSettingsResponse * validateConfigurationSettings(const ValidateConfigurationSettingsRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticBeanstalkClient)
    Q_DISABLE_COPY(ElasticBeanstalkClient)

};

} // namespace ElasticBeanstalk
} // namespace AWS

#endif
