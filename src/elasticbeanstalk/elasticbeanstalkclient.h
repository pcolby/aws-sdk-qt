/*
    Copyright 2013-2019 Paul Colby

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

#ifndef QTAWS_ELASTICBEANSTALKCLIENT_H
#define QTAWS_ELASTICBEANSTALKCLIENT_H

#include "core/awsabstractclient.h"

class QNetworkReply;

namespace QtAws {
namespace ElasticBeanstalk {

class ElasticBeanstalkClientPrivate;
class AbortEnvironmentUpdateRequest;
class AbortEnvironmentUpdateResponse;
class ApplyEnvironmentManagedActionRequest;
class ApplyEnvironmentManagedActionResponse;
class CheckDNSAvailabilityRequest;
class CheckDNSAvailabilityResponse;
class ComposeEnvironmentsRequest;
class ComposeEnvironmentsResponse;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateApplicationVersionRequest;
class CreateApplicationVersionResponse;
class CreateConfigurationTemplateRequest;
class CreateConfigurationTemplateResponse;
class CreateEnvironmentRequest;
class CreateEnvironmentResponse;
class CreatePlatformVersionRequest;
class CreatePlatformVersionResponse;
class CreateStorageLocationRequest;
class CreateStorageLocationResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteApplicationVersionRequest;
class DeleteApplicationVersionResponse;
class DeleteConfigurationTemplateRequest;
class DeleteConfigurationTemplateResponse;
class DeleteEnvironmentConfigurationRequest;
class DeleteEnvironmentConfigurationResponse;
class DeletePlatformVersionRequest;
class DeletePlatformVersionResponse;
class DescribeAccountAttributesRequest;
class DescribeAccountAttributesResponse;
class DescribeApplicationVersionsRequest;
class DescribeApplicationVersionsResponse;
class DescribeApplicationsRequest;
class DescribeApplicationsResponse;
class DescribeConfigurationOptionsRequest;
class DescribeConfigurationOptionsResponse;
class DescribeConfigurationSettingsRequest;
class DescribeConfigurationSettingsResponse;
class DescribeEnvironmentHealthRequest;
class DescribeEnvironmentHealthResponse;
class DescribeEnvironmentManagedActionHistoryRequest;
class DescribeEnvironmentManagedActionHistoryResponse;
class DescribeEnvironmentManagedActionsRequest;
class DescribeEnvironmentManagedActionsResponse;
class DescribeEnvironmentResourcesRequest;
class DescribeEnvironmentResourcesResponse;
class DescribeEnvironmentsRequest;
class DescribeEnvironmentsResponse;
class DescribeEventsRequest;
class DescribeEventsResponse;
class DescribeInstancesHealthRequest;
class DescribeInstancesHealthResponse;
class DescribePlatformVersionRequest;
class DescribePlatformVersionResponse;
class ListAvailableSolutionStacksRequest;
class ListAvailableSolutionStacksResponse;
class ListPlatformVersionsRequest;
class ListPlatformVersionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class RebuildEnvironmentRequest;
class RebuildEnvironmentResponse;
class RequestEnvironmentInfoRequest;
class RequestEnvironmentInfoResponse;
class RestartAppServerRequest;
class RestartAppServerResponse;
class RetrieveEnvironmentInfoRequest;
class RetrieveEnvironmentInfoResponse;
class SwapEnvironmentCNAMEsRequest;
class SwapEnvironmentCNAMEsResponse;
class TerminateEnvironmentRequest;
class TerminateEnvironmentResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;
class UpdateApplicationResourceLifecycleRequest;
class UpdateApplicationResourceLifecycleResponse;
class UpdateApplicationVersionRequest;
class UpdateApplicationVersionResponse;
class UpdateConfigurationTemplateRequest;
class UpdateConfigurationTemplateResponse;
class UpdateEnvironmentRequest;
class UpdateEnvironmentResponse;
class UpdateTagsForResourceRequest;
class UpdateTagsForResourceResponse;
class ValidateConfigurationSettingsRequest;
class ValidateConfigurationSettingsResponse;

class QTAWS_EXPORT ElasticBeanstalkClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ElasticBeanstalkClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    ElasticBeanstalkClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
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
    CreatePlatformVersionResponse * createPlatformVersion(const CreatePlatformVersionRequest &request);
    CreateStorageLocationResponse * createStorageLocation(const CreateStorageLocationRequest &request);
    CreateStorageLocationResponse * createStorageLocation();
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteApplicationVersionResponse * deleteApplicationVersion(const DeleteApplicationVersionRequest &request);
    DeleteConfigurationTemplateResponse * deleteConfigurationTemplate(const DeleteConfigurationTemplateRequest &request);
    DeleteEnvironmentConfigurationResponse * deleteEnvironmentConfiguration(const DeleteEnvironmentConfigurationRequest &request);
    DeletePlatformVersionResponse * deletePlatformVersion(const DeletePlatformVersionRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes(const DescribeAccountAttributesRequest &request);
    DescribeAccountAttributesResponse * describeAccountAttributes();
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
    DescribePlatformVersionResponse * describePlatformVersion(const DescribePlatformVersionRequest &request);
    ListAvailableSolutionStacksResponse * listAvailableSolutionStacks(const ListAvailableSolutionStacksRequest &request);
    ListAvailableSolutionStacksResponse * listAvailableSolutionStacks();
    ListPlatformVersionsResponse * listPlatformVersions(const ListPlatformVersionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    RebuildEnvironmentResponse * rebuildEnvironment(const RebuildEnvironmentRequest &request);
    RequestEnvironmentInfoResponse * requestEnvironmentInfo(const RequestEnvironmentInfoRequest &request);
    RestartAppServerResponse * restartAppServer(const RestartAppServerRequest &request);
    RetrieveEnvironmentInfoResponse * retrieveEnvironmentInfo(const RetrieveEnvironmentInfoRequest &request);
    SwapEnvironmentCNAMEsResponse * swapEnvironmentCNAMEs(const SwapEnvironmentCNAMEsRequest &request);
    TerminateEnvironmentResponse * terminateEnvironment(const TerminateEnvironmentRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateApplicationResourceLifecycleResponse * updateApplicationResourceLifecycle(const UpdateApplicationResourceLifecycleRequest &request);
    UpdateApplicationVersionResponse * updateApplicationVersion(const UpdateApplicationVersionRequest &request);
    UpdateConfigurationTemplateResponse * updateConfigurationTemplate(const UpdateConfigurationTemplateRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);
    UpdateTagsForResourceResponse * updateTagsForResource(const UpdateTagsForResourceRequest &request);
    ValidateConfigurationSettingsResponse * validateConfigurationSettings(const ValidateConfigurationSettingsRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticBeanstalkClient)
    Q_DISABLE_COPY(ElasticBeanstalkClient)

};

} // namespace ElasticBeanstalk
} // namespace QtAws

#endif
