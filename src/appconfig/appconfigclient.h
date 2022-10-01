// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_APPCONFIGCLIENT_H
#define QTAWS_APPCONFIGCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsappconfigglobal.h"

class QNetworkReply;

namespace QtAws {
namespace AppConfig {

class AppConfigClientPrivate;
class CreateApplicationRequest;
class CreateApplicationResponse;
class CreateConfigurationProfileRequest;
class CreateConfigurationProfileResponse;
class CreateDeploymentStrategyRequest;
class CreateDeploymentStrategyResponse;
class CreateEnvironmentRequest;
class CreateEnvironmentResponse;
class CreateExtensionRequest;
class CreateExtensionResponse;
class CreateExtensionAssociationRequest;
class CreateExtensionAssociationResponse;
class CreateHostedConfigurationVersionRequest;
class CreateHostedConfigurationVersionResponse;
class DeleteApplicationRequest;
class DeleteApplicationResponse;
class DeleteConfigurationProfileRequest;
class DeleteConfigurationProfileResponse;
class DeleteDeploymentStrategyRequest;
class DeleteDeploymentStrategyResponse;
class DeleteEnvironmentRequest;
class DeleteEnvironmentResponse;
class DeleteExtensionRequest;
class DeleteExtensionResponse;
class DeleteExtensionAssociationRequest;
class DeleteExtensionAssociationResponse;
class DeleteHostedConfigurationVersionRequest;
class DeleteHostedConfigurationVersionResponse;
class GetApplicationRequest;
class GetApplicationResponse;
class GetConfigurationRequest;
class GetConfigurationResponse;
class GetConfigurationProfileRequest;
class GetConfigurationProfileResponse;
class GetDeploymentRequest;
class GetDeploymentResponse;
class GetDeploymentStrategyRequest;
class GetDeploymentStrategyResponse;
class GetEnvironmentRequest;
class GetEnvironmentResponse;
class GetExtensionRequest;
class GetExtensionResponse;
class GetExtensionAssociationRequest;
class GetExtensionAssociationResponse;
class GetHostedConfigurationVersionRequest;
class GetHostedConfigurationVersionResponse;
class ListApplicationsRequest;
class ListApplicationsResponse;
class ListConfigurationProfilesRequest;
class ListConfigurationProfilesResponse;
class ListDeploymentStrategiesRequest;
class ListDeploymentStrategiesResponse;
class ListDeploymentsRequest;
class ListDeploymentsResponse;
class ListEnvironmentsRequest;
class ListEnvironmentsResponse;
class ListExtensionAssociationsRequest;
class ListExtensionAssociationsResponse;
class ListExtensionsRequest;
class ListExtensionsResponse;
class ListHostedConfigurationVersionsRequest;
class ListHostedConfigurationVersionsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class StartDeploymentRequest;
class StartDeploymentResponse;
class StopDeploymentRequest;
class StopDeploymentResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateApplicationRequest;
class UpdateApplicationResponse;
class UpdateConfigurationProfileRequest;
class UpdateConfigurationProfileResponse;
class UpdateDeploymentStrategyRequest;
class UpdateDeploymentStrategyResponse;
class UpdateEnvironmentRequest;
class UpdateEnvironmentResponse;
class UpdateExtensionRequest;
class UpdateExtensionResponse;
class UpdateExtensionAssociationRequest;
class UpdateExtensionAssociationResponse;
class ValidateConfigurationRequest;
class ValidateConfigurationResponse;

class QTAWSAPPCONFIG_EXPORT AppConfigClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    AppConfigClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit AppConfigClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CreateApplicationResponse * createApplication(const CreateApplicationRequest &request);
    CreateConfigurationProfileResponse * createConfigurationProfile(const CreateConfigurationProfileRequest &request);
    CreateDeploymentStrategyResponse * createDeploymentStrategy(const CreateDeploymentStrategyRequest &request);
    CreateEnvironmentResponse * createEnvironment(const CreateEnvironmentRequest &request);
    CreateExtensionResponse * createExtension(const CreateExtensionRequest &request);
    CreateExtensionAssociationResponse * createExtensionAssociation(const CreateExtensionAssociationRequest &request);
    CreateHostedConfigurationVersionResponse * createHostedConfigurationVersion(const CreateHostedConfigurationVersionRequest &request);
    DeleteApplicationResponse * deleteApplication(const DeleteApplicationRequest &request);
    DeleteConfigurationProfileResponse * deleteConfigurationProfile(const DeleteConfigurationProfileRequest &request);
    DeleteDeploymentStrategyResponse * deleteDeploymentStrategy(const DeleteDeploymentStrategyRequest &request);
    DeleteEnvironmentResponse * deleteEnvironment(const DeleteEnvironmentRequest &request);
    DeleteExtensionResponse * deleteExtension(const DeleteExtensionRequest &request);
    DeleteExtensionAssociationResponse * deleteExtensionAssociation(const DeleteExtensionAssociationRequest &request);
    DeleteHostedConfigurationVersionResponse * deleteHostedConfigurationVersion(const DeleteHostedConfigurationVersionRequest &request);
    GetApplicationResponse * getApplication(const GetApplicationRequest &request);
    GetConfigurationResponse * getConfiguration(const GetConfigurationRequest &request);
    GetConfigurationProfileResponse * getConfigurationProfile(const GetConfigurationProfileRequest &request);
    GetDeploymentResponse * getDeployment(const GetDeploymentRequest &request);
    GetDeploymentStrategyResponse * getDeploymentStrategy(const GetDeploymentStrategyRequest &request);
    GetEnvironmentResponse * getEnvironment(const GetEnvironmentRequest &request);
    GetExtensionResponse * getExtension(const GetExtensionRequest &request);
    GetExtensionAssociationResponse * getExtensionAssociation(const GetExtensionAssociationRequest &request);
    GetHostedConfigurationVersionResponse * getHostedConfigurationVersion(const GetHostedConfigurationVersionRequest &request);
    ListApplicationsResponse * listApplications(const ListApplicationsRequest &request);
    ListConfigurationProfilesResponse * listConfigurationProfiles(const ListConfigurationProfilesRequest &request);
    ListDeploymentStrategiesResponse * listDeploymentStrategies(const ListDeploymentStrategiesRequest &request);
    ListDeploymentsResponse * listDeployments(const ListDeploymentsRequest &request);
    ListEnvironmentsResponse * listEnvironments(const ListEnvironmentsRequest &request);
    ListExtensionAssociationsResponse * listExtensionAssociations(const ListExtensionAssociationsRequest &request);
    ListExtensionsResponse * listExtensions(const ListExtensionsRequest &request);
    ListHostedConfigurationVersionsResponse * listHostedConfigurationVersions(const ListHostedConfigurationVersionsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    StartDeploymentResponse * startDeployment(const StartDeploymentRequest &request);
    StopDeploymentResponse * stopDeployment(const StopDeploymentRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateApplicationResponse * updateApplication(const UpdateApplicationRequest &request);
    UpdateConfigurationProfileResponse * updateConfigurationProfile(const UpdateConfigurationProfileRequest &request);
    UpdateDeploymentStrategyResponse * updateDeploymentStrategy(const UpdateDeploymentStrategyRequest &request);
    UpdateEnvironmentResponse * updateEnvironment(const UpdateEnvironmentRequest &request);
    UpdateExtensionResponse * updateExtension(const UpdateExtensionRequest &request);
    UpdateExtensionAssociationResponse * updateExtensionAssociation(const UpdateExtensionAssociationRequest &request);
    ValidateConfigurationResponse * validateConfiguration(const ValidateConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(AppConfigClient)
    Q_DISABLE_COPY(AppConfigClient)

};

} // namespace AppConfig
} // namespace QtAws

#endif
