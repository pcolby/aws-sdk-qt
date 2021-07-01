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

#ifndef QTAWS_IMAGEBUILDERCLIENT_H
#define QTAWS_IMAGEBUILDERCLIENT_H

#include "core/awsabstractclient.h"

#include "qtawsimagebuilderglobal.h"

class QNetworkReply;

namespace QtAws {
namespace imagebuilder {

class imagebuilderClientPrivate;
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

class QTAWSIMAGEBUILDER_EXPORT imagebuilderClient : public QtAws::Core::AwsAbstractClient {
    Q_OBJECT

public:
    imagebuilderClient(
        const QtAws::Core::AwsRegion::Region region = QtAws::Core::AwsRegion::InvalidRegion,
        QtAws::Core::AwsAbstractCredentials * credentials = NULL,
        QNetworkAccessManager * const manager = NULL,
        QObject * const parent = 0);

    explicit imagebuilderClient(
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
    Q_DECLARE_PRIVATE(imagebuilderClient)
    Q_DISABLE_COPY(imagebuilderClient)

};

} // namespace imagebuilder
} // namespace QtAws

#endif
