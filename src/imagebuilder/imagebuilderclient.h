// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMAGEBUILDERCLIENT_H
#define QTAWS_IMAGEBUILDERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsimagebuilderglobal.h"

class QNetworkReply;

namespace QtAws {
namespace ImageBuilder {

class ImageBuilderClientPrivate;
class CancelImageCreationRequest;
class CancelImageCreationResponse;
class CreateComponentRequest;
class CreateComponentResponse;
class CreateContainerRecipeRequest;
class CreateContainerRecipeResponse;
class CreateDistributionConfigurationRequest;
class CreateDistributionConfigurationResponse;
class CreateImageRequest;
class CreateImageResponse;
class CreateImagePipelineRequest;
class CreateImagePipelineResponse;
class CreateImageRecipeRequest;
class CreateImageRecipeResponse;
class CreateInfrastructureConfigurationRequest;
class CreateInfrastructureConfigurationResponse;
class DeleteComponentRequest;
class DeleteComponentResponse;
class DeleteContainerRecipeRequest;
class DeleteContainerRecipeResponse;
class DeleteDistributionConfigurationRequest;
class DeleteDistributionConfigurationResponse;
class DeleteImageRequest;
class DeleteImageResponse;
class DeleteImagePipelineRequest;
class DeleteImagePipelineResponse;
class DeleteImageRecipeRequest;
class DeleteImageRecipeResponse;
class DeleteInfrastructureConfigurationRequest;
class DeleteInfrastructureConfigurationResponse;
class GetComponentRequest;
class GetComponentResponse;
class GetComponentPolicyRequest;
class GetComponentPolicyResponse;
class GetContainerRecipeRequest;
class GetContainerRecipeResponse;
class GetContainerRecipePolicyRequest;
class GetContainerRecipePolicyResponse;
class GetDistributionConfigurationRequest;
class GetDistributionConfigurationResponse;
class GetImageRequest;
class GetImageResponse;
class GetImagePipelineRequest;
class GetImagePipelineResponse;
class GetImagePolicyRequest;
class GetImagePolicyResponse;
class GetImageRecipeRequest;
class GetImageRecipeResponse;
class GetImageRecipePolicyRequest;
class GetImageRecipePolicyResponse;
class GetInfrastructureConfigurationRequest;
class GetInfrastructureConfigurationResponse;
class ImportComponentRequest;
class ImportComponentResponse;
class ImportVmImageRequest;
class ImportVmImageResponse;
class ListComponentBuildVersionsRequest;
class ListComponentBuildVersionsResponse;
class ListComponentsRequest;
class ListComponentsResponse;
class ListContainerRecipesRequest;
class ListContainerRecipesResponse;
class ListDistributionConfigurationsRequest;
class ListDistributionConfigurationsResponse;
class ListImageBuildVersionsRequest;
class ListImageBuildVersionsResponse;
class ListImagePackagesRequest;
class ListImagePackagesResponse;
class ListImagePipelineImagesRequest;
class ListImagePipelineImagesResponse;
class ListImagePipelinesRequest;
class ListImagePipelinesResponse;
class ListImageRecipesRequest;
class ListImageRecipesResponse;
class ListImagesRequest;
class ListImagesResponse;
class ListInfrastructureConfigurationsRequest;
class ListInfrastructureConfigurationsResponse;
class ListTagsForResourceRequest;
class ListTagsForResourceResponse;
class PutComponentPolicyRequest;
class PutComponentPolicyResponse;
class PutContainerRecipePolicyRequest;
class PutContainerRecipePolicyResponse;
class PutImagePolicyRequest;
class PutImagePolicyResponse;
class PutImageRecipePolicyRequest;
class PutImageRecipePolicyResponse;
class StartImagePipelineExecutionRequest;
class StartImagePipelineExecutionResponse;
class TagResourceRequest;
class TagResourceResponse;
class UntagResourceRequest;
class UntagResourceResponse;
class UpdateDistributionConfigurationRequest;
class UpdateDistributionConfigurationResponse;
class UpdateImagePipelineRequest;
class UpdateImagePipelineResponse;
class UpdateInfrastructureConfigurationRequest;
class UpdateInfrastructureConfigurationResponse;

class QTAWSIMAGEBUILDER_EXPORT ImageBuilderClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    ImageBuilderClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit ImageBuilderClient(
        const QUrl &endpoint, QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

public slots:
    CancelImageCreationResponse * cancelImageCreation(const CancelImageCreationRequest &request);
    CreateComponentResponse * createComponent(const CreateComponentRequest &request);
    CreateContainerRecipeResponse * createContainerRecipe(const CreateContainerRecipeRequest &request);
    CreateDistributionConfigurationResponse * createDistributionConfiguration(const CreateDistributionConfigurationRequest &request);
    CreateImageResponse * createImage(const CreateImageRequest &request);
    CreateImagePipelineResponse * createImagePipeline(const CreateImagePipelineRequest &request);
    CreateImageRecipeResponse * createImageRecipe(const CreateImageRecipeRequest &request);
    CreateInfrastructureConfigurationResponse * createInfrastructureConfiguration(const CreateInfrastructureConfigurationRequest &request);
    DeleteComponentResponse * deleteComponent(const DeleteComponentRequest &request);
    DeleteContainerRecipeResponse * deleteContainerRecipe(const DeleteContainerRecipeRequest &request);
    DeleteDistributionConfigurationResponse * deleteDistributionConfiguration(const DeleteDistributionConfigurationRequest &request);
    DeleteImageResponse * deleteImage(const DeleteImageRequest &request);
    DeleteImagePipelineResponse * deleteImagePipeline(const DeleteImagePipelineRequest &request);
    DeleteImageRecipeResponse * deleteImageRecipe(const DeleteImageRecipeRequest &request);
    DeleteInfrastructureConfigurationResponse * deleteInfrastructureConfiguration(const DeleteInfrastructureConfigurationRequest &request);
    GetComponentResponse * getComponent(const GetComponentRequest &request);
    GetComponentPolicyResponse * getComponentPolicy(const GetComponentPolicyRequest &request);
    GetContainerRecipeResponse * getContainerRecipe(const GetContainerRecipeRequest &request);
    GetContainerRecipePolicyResponse * getContainerRecipePolicy(const GetContainerRecipePolicyRequest &request);
    GetDistributionConfigurationResponse * getDistributionConfiguration(const GetDistributionConfigurationRequest &request);
    GetImageResponse * getImage(const GetImageRequest &request);
    GetImagePipelineResponse * getImagePipeline(const GetImagePipelineRequest &request);
    GetImagePolicyResponse * getImagePolicy(const GetImagePolicyRequest &request);
    GetImageRecipeResponse * getImageRecipe(const GetImageRecipeRequest &request);
    GetImageRecipePolicyResponse * getImageRecipePolicy(const GetImageRecipePolicyRequest &request);
    GetInfrastructureConfigurationResponse * getInfrastructureConfiguration(const GetInfrastructureConfigurationRequest &request);
    ImportComponentResponse * importComponent(const ImportComponentRequest &request);
    ImportVmImageResponse * importVmImage(const ImportVmImageRequest &request);
    ListComponentBuildVersionsResponse * listComponentBuildVersions(const ListComponentBuildVersionsRequest &request);
    ListComponentsResponse * listComponents(const ListComponentsRequest &request);
    ListContainerRecipesResponse * listContainerRecipes(const ListContainerRecipesRequest &request);
    ListDistributionConfigurationsResponse * listDistributionConfigurations(const ListDistributionConfigurationsRequest &request);
    ListImageBuildVersionsResponse * listImageBuildVersions(const ListImageBuildVersionsRequest &request);
    ListImagePackagesResponse * listImagePackages(const ListImagePackagesRequest &request);
    ListImagePipelineImagesResponse * listImagePipelineImages(const ListImagePipelineImagesRequest &request);
    ListImagePipelinesResponse * listImagePipelines(const ListImagePipelinesRequest &request);
    ListImageRecipesResponse * listImageRecipes(const ListImageRecipesRequest &request);
    ListImagesResponse * listImages(const ListImagesRequest &request);
    ListInfrastructureConfigurationsResponse * listInfrastructureConfigurations(const ListInfrastructureConfigurationsRequest &request);
    ListTagsForResourceResponse * listTagsForResource(const ListTagsForResourceRequest &request);
    PutComponentPolicyResponse * putComponentPolicy(const PutComponentPolicyRequest &request);
    PutContainerRecipePolicyResponse * putContainerRecipePolicy(const PutContainerRecipePolicyRequest &request);
    PutImagePolicyResponse * putImagePolicy(const PutImagePolicyRequest &request);
    PutImageRecipePolicyResponse * putImageRecipePolicy(const PutImageRecipePolicyRequest &request);
    StartImagePipelineExecutionResponse * startImagePipelineExecution(const StartImagePipelineExecutionRequest &request);
    TagResourceResponse * tagResource(const TagResourceRequest &request);
    UntagResourceResponse * untagResource(const UntagResourceRequest &request);
    UpdateDistributionConfigurationResponse * updateDistributionConfiguration(const UpdateDistributionConfigurationRequest &request);
    UpdateImagePipelineResponse * updateImagePipeline(const UpdateImagePipelineRequest &request);
    UpdateInfrastructureConfigurationResponse * updateInfrastructureConfiguration(const UpdateInfrastructureConfigurationRequest &request);

private:
    Q_DECLARE_PRIVATE(ImageBuilderClient)
    Q_DISABLE_COPY(ImageBuilderClient)

};

} // namespace ImageBuilder
} // namespace QtAws

#endif
