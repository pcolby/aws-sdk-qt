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

#ifndef QTAWS_ELASTICBEANSTALKCLIENT_H
#define QTAWS_ELASTICBEANSTALKCLIENT_H

#include <QObject>

class QNetworkReply;

QTAWS_BEGIN_NAMESPACE

class AwsAbstractClient;
class AwsAbstractCredentials;
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
    ElasticBeanstalkAbortEnvironmentUpdateResponse * abortEnvironmentUpdate(const ElasticBeanstalkAbortEnvironmentUpdateRequest &request);
    ElasticBeanstalkApplyEnvironmentManagedActionResponse * applyEnvironmentManagedAction(const ElasticBeanstalkApplyEnvironmentManagedActionRequest &request);
    ElasticBeanstalkCheckDNSAvailabilityResponse * checkDNSAvailability(const ElasticBeanstalkCheckDNSAvailabilityRequest &request);
    ElasticBeanstalkComposeEnvironmentsResponse * composeEnvironments(const ElasticBeanstalkComposeEnvironmentsRequest &request);
    ElasticBeanstalkCreateApplicationResponse * createApplication(const ElasticBeanstalkCreateApplicationRequest &request);
    ElasticBeanstalkCreateApplicationVersionResponse * createApplicationVersion(const ElasticBeanstalkCreateApplicationVersionRequest &request);
    ElasticBeanstalkCreateConfigurationTemplateResponse * createConfigurationTemplate(const ElasticBeanstalkCreateConfigurationTemplateRequest &request);
    ElasticBeanstalkCreateEnvironmentResponse * createEnvironment(const ElasticBeanstalkCreateEnvironmentRequest &request);
    ElasticBeanstalkCreateStorageLocationResponse * createStorageLocation();
    ElasticBeanstalkDeleteApplicationResponse * deleteApplication(const ElasticBeanstalkDeleteApplicationRequest &request);
    ElasticBeanstalkDeleteApplicationVersionResponse * deleteApplicationVersion(const ElasticBeanstalkDeleteApplicationVersionRequest &request);
    ElasticBeanstalkDeleteConfigurationTemplateResponse * deleteConfigurationTemplate(const ElasticBeanstalkDeleteConfigurationTemplateRequest &request);
    ElasticBeanstalkDeleteEnvironmentConfigurationResponse * deleteEnvironmentConfiguration(const ElasticBeanstalkDeleteEnvironmentConfigurationRequest &request);
    ElasticBeanstalkDescribeApplicationVersionsResponse * describeApplicationVersions(const ElasticBeanstalkDescribeApplicationVersionsRequest &request);
    ElasticBeanstalkDescribeApplicationsResponse * describeApplications(const ElasticBeanstalkDescribeApplicationsRequest &request);
    ElasticBeanstalkDescribeConfigurationOptionsResponse * describeConfigurationOptions(const ElasticBeanstalkDescribeConfigurationOptionsRequest &request);
    ElasticBeanstalkDescribeConfigurationSettingsResponse * describeConfigurationSettings(const ElasticBeanstalkDescribeConfigurationSettingsRequest &request);
    ElasticBeanstalkDescribeEnvironmentHealthResponse * describeEnvironmentHealth(const ElasticBeanstalkDescribeEnvironmentHealthRequest &request);
    ElasticBeanstalkDescribeEnvironmentManagedActionHistoryResponse * describeEnvironmentManagedActionHistory(const ElasticBeanstalkDescribeEnvironmentManagedActionHistoryRequest &request);
    ElasticBeanstalkDescribeEnvironmentManagedActionsResponse * describeEnvironmentManagedActions(const ElasticBeanstalkDescribeEnvironmentManagedActionsRequest &request);
    ElasticBeanstalkDescribeEnvironmentResourcesResponse * describeEnvironmentResources(const ElasticBeanstalkDescribeEnvironmentResourcesRequest &request);
    ElasticBeanstalkDescribeEnvironmentsResponse * describeEnvironments(const ElasticBeanstalkDescribeEnvironmentsRequest &request);
    ElasticBeanstalkDescribeEventsResponse * describeEvents(const ElasticBeanstalkDescribeEventsRequest &request);
    ElasticBeanstalkDescribeInstancesHealthResponse * describeInstancesHealth(const ElasticBeanstalkDescribeInstancesHealthRequest &request);
    ElasticBeanstalkListAvailableSolutionStacksResponse * listAvailableSolutionStacks();
    ElasticBeanstalkRebuildEnvironmentResponse * rebuildEnvironment(const ElasticBeanstalkRebuildEnvironmentRequest &request);
    ElasticBeanstalkRequestEnvironmentInfoResponse * requestEnvironmentInfo(const ElasticBeanstalkRequestEnvironmentInfoRequest &request);
    ElasticBeanstalkRestartAppServerResponse * restartAppServer(const ElasticBeanstalkRestartAppServerRequest &request);
    ElasticBeanstalkRetrieveEnvironmentInfoResponse * retrieveEnvironmentInfo(const ElasticBeanstalkRetrieveEnvironmentInfoRequest &request);
    ElasticBeanstalkSwapEnvironmentCNAMEsResponse * swapEnvironmentCNAMEs(const ElasticBeanstalkSwapEnvironmentCNAMEsRequest &request);
    ElasticBeanstalkTerminateEnvironmentResponse * terminateEnvironment(const ElasticBeanstalkTerminateEnvironmentRequest &request);
    ElasticBeanstalkUpdateApplicationResponse * updateApplication(const ElasticBeanstalkUpdateApplicationRequest &request);
    ElasticBeanstalkUpdateApplicationVersionResponse * updateApplicationVersion(const ElasticBeanstalkUpdateApplicationVersionRequest &request);
    ElasticBeanstalkUpdateConfigurationTemplateResponse * updateConfigurationTemplate(const ElasticBeanstalkUpdateConfigurationTemplateRequest &request);
    ElasticBeanstalkUpdateEnvironmentResponse * updateEnvironment(const ElasticBeanstalkUpdateEnvironmentRequest &request);
    ElasticBeanstalkValidateConfigurationSettingsResponse * validateConfigurationSettings(const ElasticBeanstalkValidateConfigurationSettingsRequest &request);

private:
    Q_DECLARE_PRIVATE(ElasticBeanstalkClient)
    Q_DISABLE_COPY(ElasticBeanstalkClient)

};

QTAWS_END_NAMESPACE

#endif
